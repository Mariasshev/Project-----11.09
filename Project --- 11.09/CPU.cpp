#pragma warning(disable: 4996)
#define _CRT_SECURE_NO_WARNINGS

#include "CPU.h"
#include <iostream>
#include <cstring>
using namespace std;


//initializer
CPU::CPU():model(nullptr),price(0) {}

CPU::CPU(char* m, double p) :price(p), model(m) {
	price = p;
	model = new char[strlen(m) + 1];
	strcpy_s(model, strlen(m)+1, m);
}

void CPU::SetModel(const char* m)
{
	this->model = new char[strlen(m) + 1];
	strcpy_s(model, strlen(m) + 1, m);
}
void CPU::SetPrice(double p)
{
	this->price = p;
}
char* CPU::GetModel()
{
	return this->model;
}
double CPU::GetPrice()
{
	return price;
}
CPU::~CPU() {
	delete[] model;
}
