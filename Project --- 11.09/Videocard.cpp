#pragma warning(disable: 4996)
#define _CRT_SECURE_NO_WARNINGS

#include "Videocard.h"
#include <iostream>
#include <cstring>
using namespace std;

//initializer
Videocard::Videocard() :video_model(nullptr), video_price(0) {}


void Videocard::SetModel(const char* m)
{
	this->video_model = new char[strlen(m) + 1];
	strcpy_s(video_model, strlen(m) + 1, m);
}
void Videocard::SetPrice(double p)
{
	this->video_price = p;
}
char* Videocard::GetModel()
{
	return this->video_model;
}
double Videocard::GetPrice()
{
	return video_price;
}
Videocard::~Videocard() {
	delete[] video_model;
}