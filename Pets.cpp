#include "Animal.h"
#include<iostream>
using namespace std;

int main() {
	const int value = 3;
	Animal* animal[value]{ new Cat("Mursik",4,1), new Dog("Sharik",4,1), new Parrot("Kesha", 2,0) };

	for (int i = 0; i < value; i++)
		animal[i]->show();

	for (int i = 0; i < value; i++)
		delete animal[i];
	
}

/*

Создать базовый класс «животное» и производные классы «Собака»,
«Кошка», «Попугай». С помощью конструктора установить имя каждого животного и его
характеристики.

Нарисовать диаграмму классов (фото или скан или draw.io - прислать jpg или png)
*/
