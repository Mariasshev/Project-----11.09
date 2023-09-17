#pragma warning(disable: 4996)
#define _CRT_SECURE_NO_WARNINGS

#include "SSD.h"
#include <iostream>
#include <cstring>
using namespace std;

//initializer
SSD::SSD() :model(nullptr), price(0) {}

SSD::SSD(char* m, double p) :price(p), model(m) {
	price = p;
	model = new char[strlen(m) + 1];
	strcpy_s(model, strlen(m) + 1, m);
}

void SSD::SetModel(const char* m)
{
	this->model = new char[strlen(m) + 1];
	strcpy_s(model, strlen(m) + 1, m);
}
void SSD::SetPrice(double p)
{
	this->price = p;
}
char* SSD::GetModel()
{
	return this->model;
}
double SSD::GetPrice()
{
	return price;
}

SSD::~SSD() {
	delete[] model;
}