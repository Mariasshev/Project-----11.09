#pragma once
class CPU
{
private:
	char* model;
	double price;
public:
	CPU();
	CPU(char* m, double p);
	void SetModel(const char* m);
	void SetPrice(double price);
	char* GetModel();
	double GetPrice();
	~CPU();
};

