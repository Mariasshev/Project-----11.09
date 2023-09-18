#include "Laptop.h"
#include "CPU.h"
#include "SSD.h"
#include "RAM.h"
#include "Videocard.h"
#include <iostream>
#include <fstream>
using namespace std;



int main() {

	Laptop laptop("TUF Gaming", "black", "INTEL Core i7", 50, "Radeon RX 580", 450, "SSD300", 300, "DDR-SDRAM", 200);
	laptop.PrintInf();		//show information

}