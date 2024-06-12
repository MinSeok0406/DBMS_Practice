using System;
using System.Collections.Generic;
using System.Text;

namespace CSharp01
{
    class Last_Practice
    {
        class Monster
        {
            public int Id { get; set; }
        }

        static void Main(string[] args)
        {
            // Nullable
            int? number = null;

            int b = number ?? 0; // number가 null이 아니라면 number값을 b에다가 대입하고 null이라면 b에 0을 대입한다.

            Monster monster = null;

            int? id = monster?.Id;  // monster가 null이 아니라면 Id을 대입하고 null이 맞다면 null을 대입한다.

        }
    }
}
