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
	*/
	/*
	int a = 85, b = 14;
	std::cout << a % b << std::endl;
	a += b;
	std::cout << a << std::endl;
	a++;
	std::cout << a << std::endl;
	*/

	int a = 7;
	std::cout << a++ << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a-- << std::endl;

}
