using System;
using System.Collections.Generic;
using System.Text;


namespace CSharp01
{
    // Observer Pattern
    class InputManager
    {
        public delegate void OnInputKey();
        public delegate void OnOutKey();
        public event OnInputKey InputKey;
        public event OnOutKey OutKey;
        
        public void Update()
        {
            if (Console.KeyAvailable == false)
            {
                return;
            }

            ConsoleKeyInfo info = Console.ReadKey();
            if (info.Key == ConsoleKey.A)
            {
                InputKey();
            }

            if (info.Key == ConsoleKey.B)
            { 
                OutKey(); 
            }
        }
    }
}
