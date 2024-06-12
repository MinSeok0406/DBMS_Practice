/*using System;
using System.Linq.Expressions;

namespace CSharp01
{
    // 객체(OOP Object Oriented Programming)
    // OOP(은닉성/상속성/다형성)

    class Player // 부모 / 기반
    {
        // 필드
        public int id;
        public int hp;
        public int attack;
        protected int element;

        public Player()
        {
            Console.WriteLine("Player 생성자 호출!");
        }

        private Player(int hp)
        {
            this.hp = hp;
            Console.WriteLine("Player hp 생성자 호출!");
        }

        protected void Move()
        {
            Console.WriteLine("Player Move");
        }

        protected void Attack()
        {
            Console.WriteLine("Player Attack");
        }

        
    }
    class Mage : Player
    {

    }

    class Archer : Player
    {

    }

    // 참조
    class Knight : Player // 자식 / 파생
    {

        public Knight() : base(100)
        {
            element = 10;
            Console.WriteLine("Knight 생성자 호출!");
        }


        public Knight(int hp)
        {
            this.hp = hp;
            Console.WriteLine("int 생성자 호출!!");
        }

        public Knight(int hp, int attack) : this(hp)
        {
            this.hp = hp;
            this.attack = attack;
            Console.WriteLine("int int 생성자 호출!!");
        }

       
       
    }

    class Program
    {
        static void Main(string[] args)
        {
            Knight knight = new Knight();
            knight.element = 100;
        }
    }
}*/