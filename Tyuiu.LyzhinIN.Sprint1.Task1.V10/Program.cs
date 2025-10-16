// See https://aka.ms/new-console-template for more information

using Tyuiu.LyzhinIN.Sprint1.Task1.V10.Lib;

DataService dataService =  new DataService();

Console.Title = "Спринт #1 | Выполнил: Лыжин И. Н. | НТм-24-1";
Console.WriteLine("****************************************************");
Console.WriteLine("*Спринт #1                                         *");
Console.WriteLine("*Тема: Создание итогового решения по спринту       *");
Console.WriteLine("*Задание #1                                        *");
Console.WriteLine("*Вариант #15                                       *");
Console.WriteLine("*Выполнил: Лыжин И. Н. | НТм-24-1                  *");
Console.WriteLine("****************************************************");
Console.WriteLine("*УСЛОВИЕ:                                          *");
Console.WriteLine("*Написать консольную программу, которая вычисляет  *");
Console.WriteLine("*выражение (4 + 2 * x) / 7 и печатает результат    *");
Console.WriteLine("*на экране                                         *");
Console.WriteLine("****************************************************");
Console.WriteLine("ИСХОДНЫЕ ДАННЫЕ:                                   *");
Console.WriteLine("****************************************************");


double x;

Console.WriteLine("Введите значения X:");
x = Convert.ToDouble(Console.ReadLine());

Console.WriteLine("****************************************************");
Console.WriteLine("РЕЗУЛЬТАТ:                                         *");
Console.WriteLine("****************************************************");

Console.WriteLine(dataService.Calculate(x));
Console.ReadKey();
