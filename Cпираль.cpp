using System;

namespace Arrays
{
    class Program
    {
        static void Main()
        {

            int[,] intArray1 = new int[5, 5] { { 13, 14, 15, 16, 17  }, { 12, 3, 4, 5, 18  }, { 11, 2, 1, 6, 19 }, { 10, 9, 8, 7, 20  }, { 25, 24, 23, 22, 21 } };

            for (int i = 0; i < 5; i++)
            {
                for (int j = 0; j < 5; j++)
                {
                    Console.Write("{0,4}", intArray1[i, j]);
                }
                Console.WriteLine();
            }
            Console.WriteLine();
        }
    }
}
