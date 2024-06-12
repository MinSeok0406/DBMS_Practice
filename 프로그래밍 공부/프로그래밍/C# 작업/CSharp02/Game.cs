using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace CSharp02
{
    public enum GameMode
    {
        None,
        Lobby,
        Town,
        Field,
        Shop
    }
    public enum Item
    {
        None,
        Sword,
        Shield
    }
    class Game
    {
        private GameMode mode = GameMode.Lobby;
        private Player player = null;
        private Monster monster = null;
        private int monster_type = 0;
        private int cnt = 0;
        Random rand = new Random();

        public void Process()
        {
            switch (mode)
            {
                case GameMode.Lobby:
                    ProcessLobby();
                    break;
                case GameMode.Town:
                    ProcessTown();
                    break;
                case GameMode.Field:
                    ProcessField();
                    break;
                case GameMode.Shop:
                    ProcessShop();
                    break;
            }
        }
        private void ProcessLobby()
        {
            Console.WriteLine("직업을 선택하세요");
            Console.WriteLine("[1] 기사");
            Console.WriteLine("[2] 궁수");
            Console.WriteLine("[3] 법사");

            string input = Console.ReadLine();
            switch (input)
            {
                case "1":
                    player = new Knight();
                    mode = GameMode.Town;
                    break;
                case "2":
                    player = new Archer();
                    mode = GameMode.Town;
                    break;
                case "3":
                    player = new Mage();
                    mode = GameMode.Town;
                    break;
            }
        }
        private void ProcessTown()
        {
            if (cnt > 0)
            {
                // 필드에서 마을로 돌아오면 피를 20 회복한다.
                player.SetInfo(player.GetHp() + 20, player.GetAttack(), player.GetDefence(), player.GetLevel());
            }
            Console.WriteLine();
            Console.WriteLine("마을에 입장했습니다!");
            Console.WriteLine("[1] 필드로 가기");
            Console.WriteLine("[2] 로비로 돌아가기");
            Console.WriteLine("[3] 상점으로 가기");
            Console.WriteLine($"현재 상태 HP : {player.GetHp()}, ATT : {player.GetAttack()}, DEF : {player.GetDefence()}," +
                $" LV : {player.GetLevel()}, MONEY : {player.money}");
            cnt++;

            string input = Console.ReadLine();
            switch (input)
            {
                case "1":
                    mode = GameMode.Field;
                    break;
                case "2":
                    mode = GameMode.Lobby;
                    break;
                case "3":
                    mode = GameMode.Shop;
                    break;
            }
        }
        private void ProcessField()
        {
            Console.WriteLine("필드에 입장했습니다!");
            Console.WriteLine("[1] 싸우기");
            Console.WriteLine("[2] 일정 확률로 마을 돌아가기");

            CreateRandomMonster();

            string input = Console.ReadLine();
            switch (input)
            {
                case "1":
                    ProcessFight();
                    break;
                case "2":
                    TryEscape();
                    break;
            }
        }
        private void ProcessShop()
        {
            Console.WriteLine("상점에 오신 걸 환영합니다!!");
            Console.WriteLine("1. 물건 구매");
            Console.WriteLine("2. 물건 판매");
            Console.WriteLine("3. 상점 나가기");
            string input = Console.ReadLine();
            if (input == "1")
            {
                BuyThing();
            }
            else if (input == "2")
            {
                SaleThing();
            }
            else
            {
                ProcessTown();
            }
        }
        private void BuyThing()
        {
            while (true)
            {
                int charge = 0;
                Console.WriteLine("무엇을 사시겠습니까?");
                Console.WriteLine("1. 검(150원) -> 공격력 +3");
                Console.WriteLine("2. 방패(100원) -> 방어력 +2");
                Console.WriteLine("3. 나가기");
                string input = Console.ReadLine();
                if (input == "1") 
                {
                    charge = player.money - 150;
                    if (charge < 0)
                    {
                        Console.WriteLine("돈이 부족합니다.");
                        continue;
                    }

                    player.money -= 150;
                    player.SetInfo(player.GetHp(), player.GetAttack() + 3, player.GetDefence(), player.GetLevel());
                    Console.WriteLine("검을 구매했습니다!!");
                }
                else if (input == "2")
                {
                    charge = player.money - 100;
                    if (charge < 0)
                    {
                        Console.WriteLine("돈이 부족합니다.");
                        continue;
                    }

                    player.money -= 100;
                    player.SetInfo(player.GetHp(), player.GetAttack(), player.GetDefence() + 2, player.GetLevel());
                    Console.WriteLine("방패를 구매했습니다!!");
                }
                else
                {
                    break;
                }
            }
            ProcessShop();
        }
        private void SaleThing()
        {
            ProcessShop();
        } // 미완성
        private void TryEscape()
        {
            int randValue = rand.Next(0, 101);
            if(randValue < 33)
            {
                mode = GameMode.Town;
            }
            else
            {
                ProcessFight();
            }
        }
        private void ProcessFight()
        {
            while (true)
            {
                int damage = player.GetAttack();
                int block = monster.GetDefence();
                int charge = 0;
                int Critical = rand.Next(0, 101);
                int avoidance = rand.Next(0, 101);
                // 크리티컬 히트 15%
                if (Critical < 15)
                {
                    Console.WriteLine("크리티컬 히트!!");
                    damage *= 2;
                    charge = damage - block;
                    
                    if(charge < 0) 
                    {
                        charge = 0;
                    }
                    monster.OnDamaged(charge);
                }
                else
                {
                    charge = damage - block;

                    if (charge < 0)
                    {
                        charge = 0;
                    }
                    monster.OnDamaged(charge);
                }
                
                if (monster.IsDead())
                {
                    Manager();
                    
                    Console.WriteLine("승리했습니다!");
                    Console.WriteLine($"남은 체력 : {player.GetHp()}, 현재 레벨 : {player.GetLevel()}, 소지한 돈 : {player.money}");
                    Console.WriteLine();
                    break;
                }

                damage = monster.GetAttack();
                block = player.GetDefence();
                // 회피율 10%
                if (avoidance < 10)
                {
                    Console.WriteLine("적의 공격을 회피했습니다!");
                }
                else
                {
                    charge = damage - block;

                    if (charge < 0)
                    {
                        charge = 0;
                    }
                    player.OnDamaged(charge);
                }

                if (player.IsDead())
                {
                    Console.WriteLine("패배했습니다");
                    mode = GameMode.Lobby;
                    Console.WriteLine();
                    break;
                }
            }
        }
        private void CreateRandomMonster()
        {
            int randValue = rand.Next(0, 3);
            switch (randValue)
            {
                case 0:
                    monster_type = 0;
                    monster = new Slime();
                    Console.WriteLine("슬라임이 생성되었습니다!");
                    break;
                case 1:
                    monster_type = 1;
                    monster = new Orc();
                    Console.WriteLine("오크가 생성되었습니다!");
                    break;
                case 2:
                    monster_type = 2;
                    monster = new Skeleton();
                    Console.WriteLine("스켈레톤이 생성되었습니다!");
                    break;
            }
        }
        private void Manager()
        {
            // 경험치 AND 돈 분배
            if (monster_type == 0)
            {
                player.ex += 10;
                player.money += 20;
            }
            else if (monster_type == 1)
            {
                player.ex += 20;
                player.money += 50;
            }
            else if (monster_type == 2)
            {
                player.ex += 25;
                player.money += 70;
            }

            // 레벨업!
            while (player.ex >= 100)
            {
                Console.WriteLine("레벨업!!");
                if (player.GetLevel() % 2 == 0)
                {
                    player.SetInfo(player.GetHp() + 5, player.GetAttack() + 2, player.GetDefence() + 1, player.GetLevel() + 1);
                }
                else
                {
                    player.SetInfo(player.GetHp() + 5, player.GetAttack() + 2, player.GetDefence(), player.GetLevel() + 1);
                }
                
                player.ex -= 100;
            }
        }
        private void Monster_Enforce()
        {
            // 전투를 10회 반복할 때마다 몬스터 강화
        } // 미완성
    }
}