/*using System;

namespace CSharp01
{

    class Player
    {
        protected int hp;
        protected int attack;
    }

    class Knight : Player
    {

    }

    class Mage : Player
    {
        public int mp;
    }

    class Practice03
    {
        // OOP(은닉성/상속성/다형성)
        static void EnterGame(Player player)
        {
            //bool isMage = (player is Mage);
            Mage mage = (player as Mage);
            if(mage != null) 
            {
                mage.mp = 10;
            }
        }

        static void Main(string[] args)
        {
            Knight knight = new Knight();
            Mage mage = new Mage();

            // Mage 타입 -> Player 타입
            // Player 타입 -> Mage 타입?
            Player magePlayer = mage;
            Mage mage2 = (Mage)magePlayer;

            EnterGame(knight);
        }

    }
}*/