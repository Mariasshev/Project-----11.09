#pragma once
class Videocard
{
private:
	char* model;
	double price;
public:
	Videocard();
	Videocard(char* m, double p);
	void SetModel(const char* m);
	void SetPrice(double price);
	char* GetModel();
	double GetPrice();
	~Videocard();
};

