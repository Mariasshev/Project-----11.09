#include "Laptop.h"
#include "CPU.h"
#include "SSD.h"
#include "RAM.h"
#include "Videocard.h"
#include <iostream>
#include <fstream>
using namespace std;



int main() {
	Mouse mouse{ "white", "m350px" };
	HDMI hdmi{ 36.6, 42.5 };
	Laptop* laptop = new Laptop("TUF Gaming", "black", "INTEL Core i7", 50, "Radeon RX 580", 450, "SSD300", 300, "DDR-SDRAM", 200, &mouse, &hdmi);
	//Laptop laptop("TUF Gaming", "black", "INTEL Core i7", 50, "Radeon RX 580", 450, "SSD300", 300, "DDR-SDRAM", 200, &mouse);
	laptop->PrintInf();		//show information

}