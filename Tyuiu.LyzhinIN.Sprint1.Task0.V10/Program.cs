// See https://aka.ms/new-console-template for more information
using Tyuiu.LyzhinIN.Sprint1.Task0.V10.Lib;

DataService ds = new DataService();

Console.Title = "Спринт #1 | Выполнил: Лыжин И. Н. | НТм-24-1";
Console.WriteLine("****************************************************");
Console.WriteLine("*Спринт #1                                         *");
Console.WriteLine("*Тема: Создание итогового решения по спринту       *");
Console.WriteLine("*Задание #1                                        *");
Console.WriteLine("*Вариант #10                                       *");
Console.WriteLine("*Выполнил: Лыжин И. Н. | НТм-24-1                  *");
Console.WriteLine("****************************************************");
Console.WriteLine("*УСЛОВИЕ:                                          *");
Console.WriteLine("*Написать консольную программу, которая вычисляет  *");
Console.WriteLine("*выражение (3 / 6 - 4) * 3 и печатает результат    *");
Console.WriteLine("*на экране                                         *");
Console.WriteLine("****************************************************");
Console.WriteLine("ИСХОДНЫЕ ДАННЫЕ:                                   *");
Console.WriteLine("****************************************************");
Console.WriteLine(" (3 / 6 - 4) * 3                                   *");
Console.WriteLine("****************************************************");
Console.WriteLine("РЕЗУЛЬТАТ:                                         *");
Console.WriteLine("****************************************************");


Console.WriteLine(ds.Calculate());
Console.ReadKey();