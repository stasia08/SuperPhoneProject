#pragma once
#include"Header.h"
#include"Phone.h"
class AppStore
{
private:
	string brand;
	double price;
	Phone* list;
public:
	AppStore();
	AppStore(string brand);
	AppStore(string brand, double price);
	~AppStore();

	void add(Phone ph);
	Phone get(int index);
	int getSize();
	string getBrand();
	void setBrand(string brand);
	void sortByPhoneBrandAsk();
	void sortByPhoneBrandDesk();
	Phone getMaxBigPhone();
	Phone getMinBigPhone();




};

