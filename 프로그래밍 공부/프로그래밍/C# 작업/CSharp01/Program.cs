/*using System;

namespace CSharp01
{
    // 객체(OOP Object Oriented Programming)

    // 참조
    class Knight
    {
        public int hp;
        public int attack;

        public void Move()
        {
            Console.WriteLine("Knight Move");
        }

        public void Attack()
        {
            Console.WriteLine("Knight Attack");
        }

        *//*public Knight Clone()
        {
            Knight knight = new Knight();
            knight.hp = hp;
            knight.attack = attack;

            return knight;
        }*//*
    }

    // 복사
    struct Mage
    {
        public int hp;
        public int attack;
    }

    class Program
    {
        static void KillMage(Mage mage)
        {
            mage.hp = 0;
        }

        static void KillKight(Knight knight)
        {
            knight.hp = 0;
        }

        static void Main(string[] args)
        {
            Mage mage;
            mage.hp = 100;
            mage.attack = 50;
            KillMage(mage);

            Mage mage2 = mage;
            mage2.hp = 0;

            Knight knight = new Knight();
            knight.hp = 100;
            knight.attack = 10;
            knight.Move();
            knight.Attack();


            *//*Knight knight2 = knight.Clone();
            knight.hp = 0;*//*
        }
    }
}*/