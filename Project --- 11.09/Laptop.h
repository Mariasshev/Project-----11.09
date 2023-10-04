#pragma once
#include "CPU.h"
#include "SSD.h"
#include "RAM.h"
#include "Videocard.h"
#include <string>
#include <iostream>
using namespace std;

class Mouse {
	string color;
	string model;
public:
	Mouse() {
		color = ' ';
		model = ' ';
	}
	Mouse(string c, string m) {
		color = c;
		model = m;
	}
	void Input() {
		cout << "Enter color: ";
		cin >> color;
		cout << "Enter model: ";
		cin >> model;
	}
	string GetColor() {
		return color;
	}
	string GetModel() {
		return model;
	}
	void Print() {
		cout << "\n\Mouse: \tcolor: " << GetColor() << "\tmodel: " << GetModel() << endl;
	}
};

class HDMI {
	double speed;
	double throughput;
public:
	HDMI() {
		speed = 0;
		throughput = 0;
	}
	HDMI(double s, double t) {
		speed = s;
		throughput = t;
	}
	void Input() {
		cout << "Enter speed: ";
		cin >> speed;
		cout << "Enter throughput: ";
		cin >> throughput;
	}
	double GetSpeed() {
		return speed;
	}
	double GetThroughput() {
		return throughput;
	}
	void Print() {
		cout << "\n\HDMI: \speed: " << GetSpeed() << "\tprice: " << GetThroughput() << endl;
	}
};

class Laptop {
private:
	double price;
	char* name;
	char* color;
	CPU cpu;
	SSD ssd;
	Videocard video_card;
	RAM ram;
	Mouse* mouse;
	HDMI* hdmi;
public:
	static int count;
	Laptop();
	Laptop(const char* n);
	Laptop(const char* n, const char* c);
	Laptop(const char* n, const char* c, double allprice);
	//initialization
	Laptop(const char* name, const char* color, const char* cpu_model, double cpu_price, const char* video_model, double video_price, const char* ssd_model, double ssd_price, const char* ram_model, double ram_price, Mouse* m, HDMI* h);
	

	void PrintInf();
	double GetPrice();
	char* GetName();
	char* GetColor();
	~Laptop();

};
