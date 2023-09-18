#pragma once
class Videocard
{
private:
	char* video_model;
	double video_price;
public:
	Videocard();
	Videocard(const char* m, double p);
	void SetModel(const char* m);
	void SetPrice(double price);
	char* GetModel();
	double GetPrice();
	~Videocard();
};

