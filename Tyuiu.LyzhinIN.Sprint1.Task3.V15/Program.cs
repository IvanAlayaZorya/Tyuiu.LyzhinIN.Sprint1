// See https://aka.ms/new-console-template for more information

using Tyuiu.LyzhinIN.Sprint1.Task3.V15.Lib;

DataService dataService = new DataService();

Console.Title = "Спринт #1 | Выполнил: Лыжин И. Н. | НТм-24-1";
Console.WriteLine("****************************************************");
Console.WriteLine("*Спринт #1                                         *");
Console.WriteLine("*Тема: Арифметические операторы в C#               *");
Console.WriteLine("*Задание #3                                        *");
Console.WriteLine("*Вариант #15                                       *");
Console.WriteLine("*Выполнил: Лыжин И. Н. | НТм-24-1                  *");
Console.WriteLine("****************************************************");
Console.WriteLine("*УСЛОВИЕ:                                          *");
Console.WriteLine("*Написать консольную программу, которая определяет *");
Console.WriteLine("*расстояние между двумя автомобилями, движущимися  *");
Console.WriteLine("*друг от друга на скорости v1 и v2 соответственно, *");
Console.WriteLine("*с начальным заданным расстоянием S и заданное     *");
Console.WriteLine("*количество времени T                              *");
Console.WriteLine("****************************************************");
Console.WriteLine("ИСХОДНЫЕ ДАННЫЕ:                                   *");
Console.WriteLine("****************************************************");

double v1, v2, S, T;


Console.WriteLine("Введите скорость первого автомобиля");
v1 = Convert.ToDouble(Console.ReadLine());
Console.WriteLine("Введите скорость второго автомобиля");
v2 = Convert.ToDouble(Console.ReadLine());
Console.WriteLine("Введите начальное расстояние");
S = Convert.ToDouble(Console.ReadLine());
Console.WriteLine("Введите время движения");
T = Convert.ToDouble(Console.ReadLine());

Console.WriteLine("****************************************************");
Console.WriteLine("РЕЗУЛЬТАТ:                                         *");
Console.WriteLine("****************************************************");

Console.Write(dataService.DistanceOverTime(v1,v2,S,T));
Console.ReadKey();