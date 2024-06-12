/*using System;
using System.Collections.Generic;

namespace CSharp01
{
    class Practice08
    {
        delegate int OnClicked();   // delegate는 함수 자체를 인자로 넘겨주는 형식

        static void ButtonPressed(OnClicked clickedFunction)
        {

            clickedFunction();
        }

        static int TestDelegate()
        {
            Console.WriteLine("Hello Delegate");
            return 0;
        }

        static int TestDelegate2()
        {
            Console.WriteLine("Hello Delegate 2");
            return 0;
        }

        static void Main(string[] args)
        {
            // delegate(대리자)
            OnClicked clicked = new OnClicked(TestDelegate);
            clicked += TestDelegate2;

            ButtonPressed(clicked);
        }
    }
}
*/