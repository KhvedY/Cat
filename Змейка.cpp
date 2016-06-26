using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace ArraySnake
{
    class Program
    {
        static void Main(string[] args)
        {
            int[,] arr = new int[5, 6];
            int counter=1;
            for (int i = 0; i < 5; i++)
            {
                if(i%2==0||i==0)
                for (int j = 0; j < 6; j++)
                {
                    arr[i, j] = counter;
                    counter++;
                }
                else
                for (int k = 5; k >=0; k--)
                {
                    arr[i, k] = counter;
                    counter++;
                }
            }
                for (int a = 0; a < 5; a++)
                {
                    for (int b = 0; b < 6; b++)
                    {
                        Console.Write("{0,4}", arr[a, b]);
                    }   
                    Console.WriteLine();
                }
                
                
            
        }
    }
}
