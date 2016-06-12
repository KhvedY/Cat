using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace ConsoleApplication9
{
    class Program
    {
        static int Count = 0;
        static int Hight = 0;
        static int Width = 0;
        static int StemHeight = 4;
        static int StemWidth = 3;

        static bool AcceptThrow()
        {
            bool result = true;

            Console.Write("Enter section count: ");
            string strCount = Console.ReadLine();

            Console.Write("\nEnter section height: ");
            string strHeight = Console.ReadLine();

            for (int i = 0; i < strCount.Length; i++)
            {
                if (!Char.IsDigit(strCount[i]))
                {
                    result = false;
                    Console.Write("\nWrong symbol in section count.");
                    break;
                }
            }

            for (int i = 0; i < strHeight.Length; i++)
            {
                if (!Char.IsDigit(strHeight[i]))
                {
                    result = false;
                    Console.Write("\nWrong symbol in section height.");
                    break;
                }
            }

            if (result)
            {
                Count = Convert.ToInt32(strCount);
                Hight = Convert.ToInt32(strHeight);
            }
            else
                Console.Write("\n");

            return result;
        }

        static void DrawFirTree()
        {
            Width = Hight * 2 - 1;

            Console.ForegroundColor = ConsoleColor.DarkGreen;
            Console.Write("\n");

            for (int i = 0; i < Count; i++)
                DrawSection();

            Console.ForegroundColor = ConsoleColor.DarkRed;
            DrawStem();
        }

        static void DrawSection()
        {
            int InsideCount = 1;

            for (int i = 0; i < Hight; i++)
            {
                int Right = (Width + InsideCount) / 2;
                int Left = Right - InsideCount + 1;

                for (int j = 1; j <= Width; j++)
                {
                    if (j >= Left && j <= Right)
                        Console.Write("@");
                    else
                        Console.Write(" ");
                }

                InsideCount += 2;
                Console.Write("\n");
            }


        }

        static void DrawStem()
        {
            int Right = (Width + StemWidth) / 2;
            int Left = Right - StemWidth + 1;

            for (int i = 0; i < StemHeight; i++)
            {
                for (int j = 1; j <= Width; j++)
                {
                    if (j >= Left && j <= Right)
                        Console.Write("#");
                    else
                        Console.Write(" ");
                }

                Console.Write("\n");
            }
        }
        static void Main(string[] args)
        {
            if (AcceptThrow())
                DrawFirTree();
        }
    }
}
