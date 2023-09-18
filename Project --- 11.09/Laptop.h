#pragma once
#include "CPU.h"
#include "SSD.h"
#include "RAM.h"
#include "Videocard.h"


class Laptop {
private:
	double price;
	char* name;
	char* color;
	CPU cpu;
	SSD ssd;
	Videocard video_card;
	RAM ram;
public:
	static int count;
	Laptop();
	Laptop(const char* n);
	Laptop(const char* n, const char* c);
	Laptop(const char* n, const char* c, double allprice);
	//initialization
	Laptop(const char* name, const char* color, const char* cpu_model, double cpu_price, const char* video_model, double video_price, const char* ssd_model, double ssd_price, const char* ram_model, double ram_price);
	

	void PrintInf();
	double GetPrice();
	char* GetName();
	char* GetColor();
	~Laptop();

};
