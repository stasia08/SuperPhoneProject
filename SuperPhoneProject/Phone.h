#pragma once
#include<iostream>
#include<string>
using namespace std;

class Phone
{
	friend void changePrice(Phone& ph);
private:

	static int count;

	string brand;
	double price;
	int memory;
	int year;
	double display;
	int capecity;
	int size;
public:
	Phone();
	Phone(string brand, double price, int memory, int year, double display, int capecity, int size);
	
	Phone(string brand, double price);
	~Phone();

	static int getCount();

	string getInfo();
	string getBrand();
	void setBrand(string brand);
	string getPrice();
	void setPrice(double price);
	string getMemory(); 
	void setMemory(int memory);
	string getYear();
	void setYear(int year);
	string getDisplay();
	void setDisplay(double display);
	string getCapecity();
	void setCapecity(int capecity);
	string getSize();
	void setSize(int size);
	

};

