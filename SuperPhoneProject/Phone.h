#pragma once
#include<iostream>
#include<string>
using namespace std;

class Phone
{
private:

	static int count;

	string brand;
	double price;
	int memory;
	int year;
	double display;
	int capecity;
public:
	Phone();
	Phone(string brand, double price, int memory, int year, double display, int capecity);
	Phone(string brand, double price);
	~Phone();

	static int getCount();

	string getInfo();
	string getBrand();
	void setBrand(string brand);
	string getPrice();
	void setPrice(double price);
	string getMemory(); 
	void getMemory(int memory);
	string setMemory();
	void setMemory(int memory);
	string getYear();
	void getYear(int year);
	string setYear();
	void setYear(int year);
	string getDisplay();
	void setDisplay(double display);
	string getCapecity();
	void setCapecity(int capecity);


};

