#pragma warning(disable: 4996)
#define _CRT_SECURE_NO_WARNINGS

#include "Videocard.h"
#include <iostream>
#include <cstring>
using namespace std;

//initializer
Videocard::Videocard() :model(nullptr), price(0) {}

Videocard::Videocard(char* m, double p) :price(p), model(m) {
	price = p;
	model = new char[strlen(m) + 1];
	strcpy_s(model, strlen(m) + 1, m);
}

void Videocard::SetModel(const char* m)
{
	this->model = new char[strlen(m) + 1];
	strcpy_s(model, strlen(m) + 1, m);
}
void Videocard::SetPrice(double p)
{
	this->price = p;
}
char* Videocard::GetModel()
{
	return this->model;
}
double Videocard::GetPrice()
{
	return price;
}
Videocard::~Videocard() {
	delete[] model;
}