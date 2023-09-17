#pragma warning(disable: 4996)
#define _CRT_SECURE_NO_WARNINGS

#include "RAM.h"
#include <iostream>
#include <cstring>
using namespace std;

//initializer
RAM::RAM() :model(nullptr), price(0) {}

RAM::RAM(char* m, double p) :price(p), model(m) {
	price = p;
	model = new char[strlen(m) + 1];
	strcpy_s(model, strlen(m) + 1, m);
}
void RAM::SetModel(const char* m)
{
	this->model = new char[strlen(m) + 1];
	strcpy_s(model, strlen(m) + 1, m);
}
void RAM::SetPrice(double p)
{
	this->price = p;
}
char* RAM::GetModel()
{
	return this->model;
}
double RAM::GetPrice()
{
	return price;
}
RAM::~RAM() {
	delete[] model;
}