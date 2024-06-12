/*using System;
using System.Collections.Generic;

namespace CSharp01
{
    class Pratice06
    {
        abstract class Monster // abstract는 클래스를 추상클래스로 변환하는 기능 -> 더이상 Main함수에 클래스로 선언할 수 없음
        {
            public abstract void Shout();   // abstract를 붙인 함수는 반드시 자식클래스에 이 함수를 선언해줘야함
        }

        interface IFlyable   // interface는 자식클래스에 함수를 반드시 선언하게 만들지만 구현부는 자식클래스가 임의로 바꿔서 사용가능하게 만듦
        {
            void Fly(); // interface를 사용하면 자식클래스에 다중으로 상속받게 할 수 있음 (ex. 자식클래스 : 부모클래스, interface클래스)
        }

        class Orc : Monster
        {
            public override void Shout() 
            { 

            }
        }

        class Skeleton : Monster
        {
            public override void Shout()
            {
                
            }
        }


        static void Main(string[] args)
        {
            

        }
    }
}*/