#pragma once
class RAM{
private:
	char* ram_model;
	double ram_price;
public:
	RAM();
	RAM(const char* m, double p);
	void SetModel(const char* m);
	void SetPrice(double price);
	char* GetModel();
	double GetPrice();
	~RAM();
};

