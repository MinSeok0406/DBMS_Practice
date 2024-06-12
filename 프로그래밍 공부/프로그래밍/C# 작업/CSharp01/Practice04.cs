/*using System;

namespace CSharp01
{

    class Player
    {
        protected int hp;
        protected int attack;

        public virtual void Move()
        {
            Console.WriteLine("Player 이동!");
        }
    }

    // 오버로딩(함수 이름의 재사용)
    // 오버라이딩(다형성)

    class Knight : Player
    {
        // sealed 문법 : 자식이 오버로딩을 못하게 하는 키워드
        public sealed override void Move()
        {
            Console.WriteLine("Knight 이동!");
        }
    }

    class Mage : Player
    {
        public int mp;
        public override void Move()
        {
            Console.WriteLine("Mage 이동!");
        }
    }

    class Practice03
    {
        // OOP(은닉성/상속성/다형성)
        static void EnterGame(Player player)
        {
            player.Move();
            
            Mage mage = (player as Mage);
            if (mage != null)
            {
                mage.mp = 10;
                *//*mage.Move();*//*
            }

            *//*Knight knight = (player as Knight);
            if(knight != null)
            {
                knight.Move();
            }*//*
        }

        static void Main(string[] args)
        {
            Knight knight = new Knight();
            Mage mage = new Mage();

            knight.Move();
            mage.Move();

            EnterGame(knight);
        }

    }
}*/