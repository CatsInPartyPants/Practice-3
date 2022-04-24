// lesson2.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <string>
#include <Windows.h>

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	/*int a, b;
	std::cout << "Enter a: " << std::endl;
	std::cin >> a;
	std::cout << "Enter b: " << std::endl;
	std::cin >> b;
	
	std::cout << "Сумма a и b: " << a + b << std::endl;
	std::cout << "Разность a и b: " << a - b << std::endl;
	std::cout << "Произведение a и b: " << a * b << std::endl;
	std::cout << "Деление a и b: " << (float)a / b << std::endl;

	int a = 85, b = 14;
	std::cout << a % b << std::endl;
	a += b;
	std::cout << a << std::endl;
	a++;
	std::cout << a << std::endl;
	*/

	//int a = 7;
	//std::cout << a++ << std::endl;
	//std::cout << ++a << std::endl;
	//std::cout << a-- << std::endl;

	//Задание 1
	/*
	std::cout << "Вычисление стоимости покупки.\nВведите исходные данные:\n";
	double priceT, priceK, result;
	int countT, countK;
	std::cout << "Цена тетради (руб.) -> ";
	std::cin >> priceT;
	std::cout << "Количество тетрадей -> ";
	std::cin >> countT;
	std::cout << "\nЦена карандаша (руб.) -> ";
	std::cin >> priceK;
	std::cout << "Количество карандашей -> ";
	std::cin >> countK;
	result = (priceT * countT) + (priceK * countK);
	std::cout << "Общая стоимость покупки " << result << " руб.\n";
	*/

	//Задание 2
	/*
	float b, h, result;
	std::cout << "Вычисление площади треугольника.\n";
	std::cout << "Введите длину основания треугольника -> ";
	std::cin >> b;
	std::cout << "Введите длину высоты треугольника -> ";
	std::cin >> h;
	result = 0.5 * b * h;
	std::cout << "Площадь треугольника равняется " << result << " кв.см." << std::endl;
	*/

	//Задание 3
	/*
	float scale, countScale;
	std::cout << "Вычисление расстояние между населенными пунктами.\n";
	std::cout << "Введите исходные данные:\n";
	std::cout << "Масштаб (количество киллометров в одном сантиметре) ->: ";
	std::cin >> scale;
	std::cout << "Расстояние между точками (см): ";
	std::cin >> countScale;
	std::cout << "Расстояние между точками: " << scale*countScale << " км." << std::endl;
	*/

	//Задание 4

	int secondsFromStart;
	int hours = 0, minutes = 0, seconds = 0;
	std::cout << "Введите количество секунд, прошедших с 00:00 -> \n";
	std::cin >> secondsFromStart;
	seconds = secondsFromStart % 60;
	minutes = secondsFromStart / 60 % 60;
	hours = secondsFromStart / 60 / 60;
	std::cout << "Текущее время: " << hours << ":" << minutes << ":" << seconds << std::endl;
}
