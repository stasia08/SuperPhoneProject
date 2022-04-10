#pragma once
#include"Header.h"
#include"Phone.h"
class Store
{
private:
	string brand;
	Phone* list;
public:
	Store();
	Store(string brand);
	Store(string brand, double price, int memory, int year, double display, int capecity );
	~Store();

	void add(Phone ph);
	Phone get(int index);
	int getSize();
	string getBrand();
	void setBrand(string brand);

	void sortByPhoneBrandAsk();
	void sortByPhoneBrandDesk();

	Phone getMaxBigPhone();
	Phone getMinBigPhone();
	string getInfo();


	

	

};

