using System;

namespace Arrays
{
    class Program
    {
        static void Main()
        {
            int spaceCount = 0;
            Console.WriteLine("Enter the number of stairs: ");
            string Stairs = Console.ReadLine();
            int stairCount = Convert.ToInt32(Stairs);

            for (int i = 0; i < stairCount; i++)
            {
                for (int j = 0; j < spaceCount; j++)
                    Console.Write(" ");
                Console.WriteLine("***");
                
                    for (int j = 0; j < spaceCount; j++)
                        Console.Write(" ");
                    Console.WriteLine("  *");
                    spaceCount += 2;                       
            }
        }
    }
}
