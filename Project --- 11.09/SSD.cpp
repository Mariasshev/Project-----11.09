#pragma warning(disable: 4996)
#define _CRT_SECURE_NO_WARNINGS

#include "SSD.h"
#include <iostream>
#include <cstring>
using namespace std;

//initializer
SSD::SSD() :ssd_model(nullptr), ssd_price(0) {}


void SSD::SetModel(const char* m)
{
	this->ssd_model = new char[strlen(m) + 1];
	strcpy_s(ssd_model, strlen(m) + 1, m);
}
void SSD::SetPrice(double p)
{
	this->ssd_price = p;
}
char* SSD::GetModel()
{
	return this->ssd_model;
}
double SSD::GetPrice()
{
	return ssd_price;
}

SSD::~SSD() {
	delete[] ssd_model;
}