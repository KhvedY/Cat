using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace ConsoleApplication3
{
    class Program
    {     
                static void Zero()
        {                      
            Console.Write("  000  " + Environment.NewLine);
            Console.Write(" 0   0 " + Environment.NewLine);
            Console.Write("0     0" + Environment.NewLine);
            Console.Write("0     0" + Environment.NewLine);
            Console.Write("0     0" + Environment.NewLine);
            Console.Write(" 0   0 " + Environment.NewLine);
            Console.Write("  000  " + Environment.NewLine);
            Console.WriteLine("\n");
        }

        static void One()
        {
            Console.Write("   1   " + Environment.NewLine);
            Console.Write("  11   " + Environment.NewLine);
            Console.Write(" 111   " + Environment.NewLine);
            Console.Write("   1   " + Environment.NewLine);
            Console.Write("   1   " + Environment.NewLine);
            Console.Write("   1   " + Environment.NewLine);
            Console.Write("  111  " + Environment.NewLine);
            Console.WriteLine("\n");
        }

        static void Two()
        {
            Console.WriteLine("  222  " + Environment.NewLine);
            Console.WriteLine(" 2    2" + Environment.NewLine);
            Console.WriteLine("     2 " + Environment.NewLine);
            Console.WriteLine("    2  " + Environment.NewLine);
            Console.WriteLine("   2   " + Environment.NewLine);
            Console.WriteLine("  2    " + Environment.NewLine);
            Console.WriteLine(" 222222" + Environment.NewLine);
            Console.WriteLine("\n");
        }

        static void Three()
        {
            Console.Write("  333  " + Environment.NewLine);
            Console.Write(" 3    3" + Environment.NewLine);
            Console.Write("      3" + Environment.NewLine);
            Console.Write("    33 " + Environment.NewLine);
            Console.Write("      3" + Environment.NewLine);
            Console.Write(" 3    3" + Environment.NewLine);
            Console.Write("  333  " + Environment.NewLine);
            Console.WriteLine("\n");
        }

        static void Four()
        {
            Console.Write("     4 " + Environment.NewLine);
            Console.Write("    44 " + Environment.NewLine);
            Console.Write("   4 4 " + Environment.NewLine);
            Console.Write("  4  4 " + Environment.NewLine);
            Console.Write(" 444444" + Environment.NewLine);
            Console.Write("     4 " + Environment.NewLine);
            Console.Write("     4 " + Environment.NewLine);
            Console.WriteLine("\n");
        }

        static void Five()
        {
            Console.Write(" 555555" + Environment.NewLine);
            Console.Write(" 5     " + Environment.NewLine);
            Console.Write("  555  " + Environment.NewLine);
            Console.Write("     5 " + Environment.NewLine);
            Console.Write("      5" + Environment.NewLine);
            Console.Write(" 5    5" + Environment.NewLine);
            Console.Write("   555 " + Environment.NewLine);
            Console.WriteLine("\n");
        }

        static void Six()
        {
            Console.Write("   666 " + Environment.NewLine);
            Console.Write("  6   6" + Environment.NewLine);
            Console.Write(" 6     " + Environment.NewLine);
            Console.Write(" 66666 " + Environment.NewLine);
            Console.Write(" 6    6" + Environment.NewLine); ;
            Console.Write(" 6    6" + Environment.NewLine);
            Console.Write("  6666" + Environment.NewLine);
            Console.WriteLine("\n");
        }

        static void Seven()
        {
            Console.Write(" 777777" + Environment.NewLine);
            Console.Write("      7" + Environment.NewLine);
            Console.Write("     7 " + Environment.NewLine);
            Console.Write("    7  " + Environment.NewLine);
            Console.Write("   7   " + Environment.NewLine);
            Console.Write("  7    " + Environment.NewLine);
            Console.Write("  7    " + Environment.NewLine);
            Console.WriteLine("\n");
        }

        static void Eight()
        {
            Console.Write("  8888 " + Environment.NewLine);
            Console.Write(" 8    8" + Environment.NewLine);
            Console.Write(" 8    8" + Environment.NewLine);
            Console.Write("  8888 " + Environment.NewLine);
            Console.Write(" 8    8" + Environment.NewLine);
            Console.Write(" 8    8" + Environment.NewLine);
            Console.Write("  8888 " + Environment.NewLine);
            Console.WriteLine("\n");
        }

        static void Nine()
        {
            Console.Write("  99999" + Environment.NewLine);
            Console.Write(" 9    9" + Environment.NewLine);
            Console.Write(" 9    9" + Environment.NewLine);
            Console.Write("  99999" + Environment.NewLine);
            Console.Write("      9" + Environment.NewLine);
            Console.Write(" 9    9" + Environment.NewLine);
            Console.Write("  99999" + Environment.NewLine);
            Console.WriteLine("\n");
        }
        static void Main(string[] args)
        {
            Console.Write("Enter your number: ");
            string text = Console.ReadLine();
           
                foreach (int element in text)
                {
                    switch (element)
                    {
                        case '0':
                            Zero();
                            break;
                        case '1':
                            One();
                            break;
                        case '2':
                            Two();
                            break;
                        case '3':
                            Three();
                            break;
                        case '4':
                            Four();
                            break;
                        case '5':
                            Five();
                            break;
                        case '6':
                            Six();
                            break;
                        case '7':
                            Seven();
                            break;
                        case '8':
                            Eight();
                            break;
                        case '9':
                            Nine();
                            break;
                    }
                }
                Console.WriteLine("\n");
            }
        }
    }

