#pragma once
#include<iostream>
using namespace std;
class Animal {
public:
	string name;
	int legs;
	int tail;
	Animal(string name, int legs, int tail) :name{ name }, legs{ legs }, tail{ tail } {};
	virtual void show() = 0 {};
};

class Dog :public Animal {
public:
	Dog(string name, int legs, int tail) :Animal(name, legs, tail) {};
	void show() override{
		cout << "Dog:" << "\nname:" << name << ", legs:" << legs << ", tail:" << tail << endl;
	}
};

class Cat :public Animal {
public:
	Cat(string name, int legs, int tail) :Animal(name, legs, tail) {};
	void show() override {
		cout << "Cat:" << "\nname:" << name << ", legs:" << legs << ", tail:" << tail << endl;
	}
};

class Parrot : public Animal {
public:
	Parrot(string name, int legs, int tail) :Animal(name, legs, tail) {};
	void show() override {
		cout << "Parrot:" << "\nname:" << name << ", legs:" << legs << ", tail:" << tail << endl;
	}
};
