#pragma warning(disable: 4996)
#define _CRT_SECURE_NO_WARNINGS

#include "RAM.h"
#include <iostream>
#include <cstring>
using namespace std;

//initializer
RAM::RAM() :ram_model(nullptr), ram_price(0) {}

void RAM::SetModel(const char* m)
{
	this->ram_model = new char[strlen(m) + 1];
	strcpy_s(ram_model, strlen(m) + 1, m);
}
void RAM::SetPrice(double p)
{
	this->ram_price = p;
}
char* RAM::GetModel()
{
	return this->ram_model;
}
double RAM::GetPrice()
{
	return ram_price;
}
RAM::~RAM() {
	delete[] ram_model;
}