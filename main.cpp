using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace ConsoleApp11
{
    class Program
    {
        public static int liczSume(int n)
        {
            int start = 0;
            for(int i = 1; i <= n; i++)
            {
                start += i;
            }

            return start;

        }
        static void Main(string[] args)
        {
            
            int n = 10;
            int[] suma = new int[n];
            int liczba = 0;
            for(int i = 0; i < n; i++)
            {
                liczba = Convert.ToInt32(Console.ReadLine());
                if(liczba >= 1 && liczba <= 1000)
                {
                    var x  = liczSume(liczba);
                    suma[i] = x;   
                }
            }
            for (int i = 0; i < n; i++)
            {
                Console.WriteLine(suma[i]);
            }

                Console.ReadKey();
        }
    }
}
