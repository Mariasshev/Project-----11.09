#include "Laptop.h"
#include "CPU.h"
#include "SSD.h"
#include "RAM.h"
#include "Videocard.h"
#include <iostream>
#include <fstream>
using namespace std;



int main() {
	

	char name[20];
	cout << "Enter laptop model: ";
	cin.getline(name, sizeof(name));


	char color[20];
	cout << "Enter laptop color: ";
	cin.getline(color, sizeof(color));

	double AllPrice = 0;
	//RAM SET()
	RAM ram;
	char modelRam[20];
	cout << "Enter RAM model: ";
	cin.ignore();
	cin.getline(modelRam, sizeof(modelRam));
	ram.SetModel(modelRam);

	double priceRam;
	cout << "Enter RAM price: ";
	cin >> priceRam;
	ram.SetPrice(priceRam);
	AllPrice = priceRam;

	//SSD SET()
	SSD ssd;
	char modelSSD[20];
	cout << "Enter SSD model: ";
	cin.ignore();
	cin.getline(modelSSD, sizeof(modelSSD));
	ssd.SetModel(modelSSD);

	double priceSSD;
	cout << "Enter SSD price: ";
	cin >> priceSSD;
	ssd.SetPrice(priceSSD);
	AllPrice += priceSSD;

	//Videocard SET()
	Videocard videocard;
	char modelVideocard[20];
	cout << "Enter Videocard model: ";
	cin.ignore();
	cin.getline(modelVideocard, sizeof(modelVideocard));
	videocard.SetModel(modelVideocard);

	double priceVideocard;
	cout << "Enter Videocard price: ";
	cin >> priceVideocard;
	videocard.SetPrice(priceVideocard);
	AllPrice += priceVideocard;

	//CPU SET()
	CPU cpu;
	char modelCPU[20];
	cout << "Enter CPU model: ";
	cin.ignore();
	cin.getline(modelCPU, sizeof(modelCPU));
	cpu.SetModel(modelCPU);

	double priceCPU;
	cout << "Enter CPU price: ";
	cin >> priceCPU;
	cpu.SetPrice(priceCPU);
	AllPrice += priceCPU;
	cout << endl << endl;

	Laptop laptop(name, color, AllPrice);


	//laptop->SetPrice(AllPrice);
	laptop.PrintInf(cpu, ssd, videocard, ram);

}