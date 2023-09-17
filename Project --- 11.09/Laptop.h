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
	
	

	void PrintInf(CPU cpu, SSD ssd, Videocard video_card, RAM ram);
	/*void SetName(const char* n);
	void SetColor(const char* c);
	void SetPrice(double p);*/
	double GetPrice();
	char* GetName();
	char* GetColor();
	~Laptop();

};
