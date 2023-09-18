#pragma warning(disable: 4996)
#define _CRT_SECURE_NO_WARNINGS

#include "Laptop.h"
#include "CPU.h"
#include "SSD.h"
#include "RAM.h"
#include "Videocard.h"
#include <iostream>
using namespace std;

double AllPrice = 0;
int Laptop:: count = 0;

//initializer
Laptop::Laptop() :name(nullptr), color(nullptr), price(0) {
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

void Laptop::PrintInf()
{
	cout << "Your laptop: " << endl;
	cout << "Name: " << this->name << endl;
	cout << "Color: " << this->color << endl;
	cout << "\n\tCPU: \tmodel: " << cpu.GetModel() << "\tprice: " << cpu.GetPrice() << endl;
	cout << "\n\tSSD: \tmodel: " << ssd.GetModel() << "\tprice: " << ssd.GetPrice() << endl;
	cout << "\n\tVideocard: \tmodel: " << video_card.GetModel() << "\tprice: " << video_card.GetPrice() << endl;
	cout << "\n\tRAM: \tmodel: " << ram.GetModel() << "\tprice: " << ram.GetPrice() << endl;
	cout << "Price: " << this->price << "$" << endl;
	cout << "Amount: " << this->count << endl;

}

//Delegation
Laptop::Laptop(const char* n) {
	this->name = nullptr;
}
Laptop::Laptop(const char* n, const char* c):Laptop(n) {
	this->color = nullptr;
}
Laptop::Laptop(const char* n, const char* c, double allprice):Laptop(n, c) {
	this->price = 0;
}


//initializer
Videocard::Videocard(const char* m, double p){
	video_price = p;
	AllPrice += p;
	video_model = new char[strlen(m) + 1];
	strcpy_s(video_model, strlen(m) + 1, m);
}

SSD::SSD(const char* m, double p){
	ssd_price = p;
	AllPrice += p;
	ssd_model = new char[strlen(m) + 1];
	strcpy_s(ssd_model, strlen(m) + 1, m);
}

CPU::CPU(const char* m, double p){

	cpu_model = new char[strlen(m) + 1];
	strcpy_s(cpu_model, strlen(m) + 1, m);
	cpu_price = p;
	AllPrice += p;
}
RAM::RAM(const char* m, double p) {
	ram_price = p;
	AllPrice += p;
	ram_model = new char[strlen(m) + 1];
	strcpy_s(ram_model, strlen(m) + 1, m);
}

Laptop::Laptop(const char* name, const char* color, const char* cpu_model, double cpu_price, const char* video_model, double video_price, const char* ssd_model, double ssd_price, const char* ram_model, double ram_price) : cpu(cpu_model, cpu_price), video_card(video_model, video_price), ssd(ssd_model, ssd_price), ram(ram_model, ram_price)
{

	this->name = new char[strlen(name) + 1];
	strcpy_s(this->name, strlen(name) + 1, name);
	this->price = AllPrice;
	this->color = new char[strlen(color) + 1];
	strcpy_s(this->color, strlen(color) + 1, color);
	count++;

};


Laptop::~Laptop()		//clearing dynamic memory
{
	delete[] this->name;
	delete[] this->color;
	--count;
}
