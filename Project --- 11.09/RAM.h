#pragma once
class RAM{
private:
	char* model;
	double price;
public:
	RAM();
	RAM(char* m, double p);
	void SetModel(const char* m);
	void SetPrice(double price);
	char* GetModel();
	double GetPrice();
	~RAM();
};

