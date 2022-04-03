#pragma once
#include<iostream>
using namespace std;

class Phone
{
private:
	string brand;
	double price;
public:
	Phone();
	Phone(string brand, double price);
	string getInfo();
};

