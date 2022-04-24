#pragma once
#include"Header.h"
#include"Phone.h"
class Store
{
private:
	string brand;
	Phone* list;
	int size;

public:
	Store();
	Store(string brand);
	Store(string brand, Phone* list, int size);
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

