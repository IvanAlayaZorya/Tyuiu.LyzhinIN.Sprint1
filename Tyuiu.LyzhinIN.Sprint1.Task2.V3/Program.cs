// See https://aka.ms/new-console-template for more information

using Tyuiu.LyzhinIN.Sprint1.Task2.V3.Lib;

DataService dataService = new DataService();

Console.Title = "Спринт #1 | Выполнил: Лыжин И. Н. | НТм-24-1";
Console.WriteLine("****************************************************");
Console.WriteLine("*Спринт #1                                         *");
Console.WriteLine("*Тема: Арифметические операторы в C#               *");
Console.WriteLine("*Задание #2                                        *");
Console.WriteLine("*Вариант #3                                        *");
Console.WriteLine("*Выполнил: Лыжин И. Н. | НТм-24-1                  *");
Console.WriteLine("****************************************************");
Console.WriteLine("*УСЛОВИЕ:                                          *");
Console.WriteLine("*Написать консольную программу, которая            *");
Console.WriteLine("*конвертирует часы в минуты                        *");
Console.WriteLine("*                                                  *");
Console.WriteLine("****************************************************");
Console.WriteLine("ИСХОДНЫЕ ДАННЫЕ:                                   *");
Console.WriteLine("****************************************************");

int x;

Console.WriteLine("Введите количество часов");
x = Convert.ToInt32(Console.ReadLine());

Console.WriteLine("****************************************************");
Console.WriteLine("РЕЗУЛЬТАТ:                                         *");
Console.WriteLine("****************************************************");

Console.Write(dataService.ConvertHourToMin(x));
Console.ReadKey();

