#pragma warning(disable: 4996)
#define _CRT_SECURE_NO_WARNINGS

#include "Laptop.h"
#include "CPU.h"
#include "SSD.h"
#include "RAM.h"
#include "Videocard.h"
#include <iostream>
using namespace std;

int Laptop:: count = 0;

Laptop::Laptop() :name(nullptr), color(nullptr), price(0) {
	cout << "Price: "<< price << endl;
}


double Laptop::GetPrice()
{
	return this->price;
}

char* Laptop::GetName()
{
	return this->name;
}

char* Laptop::GetColor()
{
	return this->color;
}

void Laptop::PrintInf(CPU cpu, SSD ssd, Videocard video_card, RAM ram)
{
	cout << "Your laptop: " << endl;
	cout << "Name: " << this->name << endl;
	cout << "Color: " << this->color << endl;
	cout << "\n\tCPU: \tmodel: " << cpu.GetModel() << "\tprice: " << cpu.GetPrice() << endl;
	cout << "\n\tSSD: \tmodel: " << ssd.GetModel() << "\tprice: " << ssd.GetPrice() << endl;
	cout << "\n\tVideocard: \tmodel: " << video_card.GetModel() << "\tprice: " << video_card.GetPrice() << endl;
	cout << "\n\tRAM: \tmodel: " << ram.GetModel() << "\tprice: " << ram.GetPrice() << endl;
	cout << "Price: " << this->price << endl;
	cout << "Amount: " << this->count << endl;

}

//Delegation

Laptop::Laptop(const char* n) {
	this->name = new char[strlen(n) + 1];
	strcpy_s(name, strlen(n) + 1, n);
}
Laptop::Laptop(const char* n, const char* c):Laptop(n) {
	this->color = new char[strlen(c) + 1];
	strcpy_s(color, strlen(c) + 1, c);
}
Laptop::Laptop(const char* n, const char* c, double allprice):Laptop(n, c) {
	++count;
	this->price = allprice;
}


Laptop::~Laptop()
{
	delete[] name;
	delete[] color;
	--count;
}
