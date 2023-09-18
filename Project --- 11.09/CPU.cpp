#pragma warning(disable: 4996)
#define _CRT_SECURE_NO_WARNINGS

#include "CPU.h"
#include <iostream>
#include <cstring>
using namespace std;


//initializer
CPU::CPU():cpu_model(nullptr),cpu_price(0) {}


void CPU::SetModel(const char* m)
{
	this->cpu_model = new char[strlen(m) + 1];
	strcpy_s(cpu_model, strlen(m) + 1, m);
}
void CPU::SetPrice(double p)
{
	this->cpu_price = p;
}
char* CPU::GetModel()
{
	return this->cpu_model;
}
double CPU::GetPrice()
{
	return cpu_price;
}
CPU::~CPU() {
	delete[] cpu_model;
}
