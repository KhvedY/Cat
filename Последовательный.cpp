using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace ArrayConsistent
{
    class Program
    {
        static void Main(string[] args)
        {
            int[,] Array = new int[5, 6];
            int counter = 1;
            for (int i = 0; i < 5; i++)
            {
                for (int j = 0; j < 6; j++)
                {
                    Array[i, j] = counter;
                    counter++;
                    Console.Write("{0,4}", Array[i, j]);
                }
                Console.WriteLine();
            }
            Console.WriteLine();  
        }
    }
}
