#pragma once
#include<iostream>
#include<string>
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

