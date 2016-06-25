using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace MillionByWords
{
    class Program
    {
        static string Converter(string num)
        {
            if (num == "0")
                return "Ноль";
            string res = "";
            int number = Convert.ToInt32(num);
            int counter = 0;
            while (number > 0)
            {
                if (number == 1000000)
                    return "Один миллион";
                while (number >= 100000)
                {
                    number -= 100000;
                    counter++;
                }
                if (counter >= 9)
                    res = res + "Девятьсот ";
                else if (counter >= 8)
                    res = res + "Восемьсот ";
                else if (counter >= 7)
                    res = res + "Семьсот ";
                else if (counter >= 6)
                    res = res + "Шестьсот ";
                else if (counter >= 5)
                    res = res + "Пятьсот ";
                else if (counter >= 4)
                    res = res + "Четыреста ";
                else if (counter >= 3)
                    res = res + "Триста ";
                else if (counter >= 2)
                    res = res + "Двести ";
                else if (counter >= 1)
                    res = res + "Сто "; 
                counter = 0;
                if(number>=20000||number<11000)
                {
                    while (number >= 10000)
                {
                    number -= 10000;
                    counter++;
                }
                    if (counter == 9)
                    res = res + "Девяносто ";
                else if (counter == 8)
                    res = res + "Восемьдесят ";
                else if (counter == 7)
                    res = res + "Семьдесят ";
                else if (counter == 6)
                    res = res + "Шестьдесят ";
                else if (counter == 5)
                    res = res + "Пятьдесят ";
                else if (counter == 4)
                    res = res + "Сорок ";
                else if (counter == 3)
                    res = res + "Тридцать ";
                else if (counter == 2)
                    res = res + "Двадцать ";
                else if (counter == 1)
                    res = res + "Десять ";
                    if (number < 1000)
                        res = res + "Тысяч ";
                }
                counter = 0;
                if(number<20000&&number>=11000)
                {
                    while (number >= 1000)
                {
                    number -= 1000;
                    counter++;
                }
                if (counter == 10&&number<1000)
                    res = res + "Десять Тысяч ";
                else if (counter == 11)
                    res = res + "Одинадцать Тысяч ";
                else if (counter == 12)
                    res = res + "Двенадцать Тысяч ";
                else if (counter == 13)
                    res = res + "Тринадцать Тысяч ";
                else if (counter == 14)
                    res = res + "Четырнадцать Тысяч ";
                else if (counter == 15)
                    res = res + "Пятнадцать Тысяч ";
                else if (counter == 16)
                    res = res + "Шестнадцать Тысяч ";
                else if (counter == 17)
                    res = res + "Семнадцать Тысяч ";
                else if (counter == 18)
                    res = res + "Восемнадцать Тысяч ";
                else if (counter == 19)
                    res = res + "Девятнадцать Тысяч ";
                }
                counter = 0;
                if(number<10000&&number>=1000)
                    while(number>=1000)
                    {
                        number -= 1000;
                        counter++;
                    }
                    if (counter == 1)
                        res = res + "Одна Тысяча ";
                    else if (counter == 2)
                        res = res + "Две Тысячи ";
                    else if (counter == 3)
                        res = res + "Три Тысячи ";
                    else if (counter == 4)
                        res = res + "Четыре Тысячи ";
                    else if (counter == 5)
                        res = res + "Пять Тысяч ";
                    else if (counter == 6)
                        res = res + "Шесть Тысяч ";
                    else if (counter == 7)
                        res = res + "Семь Тысяч ";
                    else if (counter == 8)
                        res = res + "Восемь Тысяч ";
                    else if (counter == 9)
                        res = res + "Девять Тысяч ";
                counter = 0;
                while (number >= 100)
                {
                    number -= 100;
                    counter++;
                }
                if (counter >= 9)
                    res = res + "Девятьсот ";
                else if (counter >= 8)
                    res = res + "Восемьсот ";
                else if (counter >= 7)
                    res = res + "Семьсот ";
                else if (counter >= 6)
                    res = res + "Шестьсот ";
                else if (counter >= 5)
                    res = res + "Пятьсот ";
                else if (counter >= 4)
                    res = res + "Четыреста ";
                else if (counter >= 3)
                    res = res + "Триста ";
                else if (counter >= 2)
                    res = res + "Двести ";
                else if (counter >= 1)
                    res = res + "Сто ";
                counter = 0;
                while (number >= 10)
                {
                    number -= 10;
                    counter++;
                }
                if (counter == 9)
                    res = res + "Девяносто ";
                else if (counter == 8)
                    res = res + "Восемьдесят ";
                else if (counter == 7)
                    res = res + "Семьдесят ";
                else if (counter == 6)
                    res = res + "Шестьдесят ";
                else if (counter == 5)
                    res = res + "Пятьдесят ";
                else if (counter == 4)
                    res = res + "Сорок ";
                else if (counter == 3)
                    res = res + "Тридцать ";
                else if (counter == 2)
                    res = res + "Двадцать ";
                if (counter == 1&&number==0)
                    res = res + "Десять ";
                else if (counter == 1&&number==1)
                    res = res + "Одинадцать ";
                else if (counter == 1 && number == 2)
                    res = res + "Двенадцать ";
                else if (counter == 1 && number == 3)
                    res = res + "Тринадцать ";
                else if (counter == 1 && number == 4)
                    res = res + "Четырнадцать ";
                else if (counter == 1 && number == 5)
                    res = res + "Пятнадцать ";
                else if (counter == 1 && number == 6)
                    res = res + "Шестнадцать ";
                else if (counter == 1 && number == 7)
                    res = res + "Семнадцать ";
                else if (counter == 1 && number == 8)
                    res = res + "Восемнадцать ";
                else if (counter == 1 && number == 9)
                    res = res + "Девятнадцать ";
                if (number == 1)
                    res = res + "Один";
                if (numberl == 2)
                    res = res + "Два";
                if (number == 3)
                    res = res + "Три";
                if (number == 4)
                    res = res + "Четыре";
                if (number == 5)
                    res = res + "Пять";
                if (number == 6)
                    res = res + "Шесть";
                if (number == 7)
                    res = res + "Семь";
                if (number == 8)
                    res = res + "Восемь";
                if (number == 9)
                    res = res + "Девять";
                number = 0;
            }

            return res;
        }
        static void Main(string[] args)
        {        
            while(true)
            {
            Console.WriteLine("Enter a number :");
            string Number = Console.ReadLine();
            Console.WriteLine(Converter(Number));
            }
            
        }
    }
}
