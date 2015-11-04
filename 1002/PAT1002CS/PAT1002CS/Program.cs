using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace PAT1002CS
{
    class Program
    {
        static void Main(string[] args)
        {
            String str = Console.ReadLine();
            int total = 0;
            for(int i = 0; i < str.Length; i++)
            {
                String num = str[i].ToString();
                total += int.Parse(num);
            }
            List<int> n=new List<int>();
            while (total  != 0)
            {
                n.Add(total % 10);
                total /= 10;
            }         
            for(int i = n.Count-1 ; i >= 0; i--)
            {
                switch (n[i]) {
                    case (0):Console.Write("ling"); break;
                    case (1):Console.Write("yi");break;
                    case (2):Console.Write("er");break;
                    case (3):Console.Write("san");break;
                    case (4):Console.Write("si");break;
                    case (5): Console.Write("wu"); break;
                    case (6): Console.Write("liu"); break;
                    case (7): Console.Write("qi"); break;
                    case (8): Console.Write("ba"); break;
                    case (9): Console.Write("jiu");break;
                }
                if (i == 0)
                {
                    Console.WriteLine();
                }
                else
                {
                    Console.Write(" ");
                }
            }                  
        }
    }
}
