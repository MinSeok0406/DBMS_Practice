/*using System;
using System.Collections.Generic;

namespace CSharp01
{
    class Practice09
    {
        static void OnInputTest()
        {
            Console.WriteLine("Input Received");
        }

        static void OnOutTest()
        {
            Console.WriteLine("Out Received");
        }

        static void Main(string[] args)
        {
            InputManager inputManager = new InputManager();
            inputManager.InputKey += OnInputTest;
            inputManager.OutKey += OnOutTest;

            while (true) 
            {
                inputManager.Update();
            }
        }
    }
}*/