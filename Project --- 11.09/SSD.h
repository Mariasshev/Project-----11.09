#pragma once
class SSD {
private:
	char* ssd_model;
	double ssd_price;
public:
	SSD();
	SSD(const char* m, double p);
	void SetModel(const char* m);
	void SetPrice(double price);
	char* GetModel();
	double GetPrice();
	~SSD();
};