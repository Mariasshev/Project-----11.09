#pragma once
class SSD {
private:
	char* model;
	double price;
public:
	SSD();
	SSD(char* m, double p);
	void SetModel(const char* m);
	void SetPrice(double price);
	char* GetModel();
	double GetPrice();
	~SSD();
};