#include "Phone.h"

int Phone::count = 0;

Phone::Phone() {
	count++;
}

Phone::Phone(string brand, double price) {
	this->brand = brand;
	this->price = price;
	count++;
}

Phone::Phone(string brand, double price, int memory, int year, double display, int capecity, int size) {
	this->brand = brand;
	this->price = price;
	this->memory = memory;
	this->year = year;
	this->display = display;
	this->capecity = capecity;
	count++;
}

Phone::~Phone() {
	count--;
}

string Phone::getInfo() {
	return brand + ": price = " + to_string(price);
}

string Phone::getBrand() {
	return brand;
}

void Phone::setBrand(string brand) {
	this->brand = brand;
}

string Phone::getPrice() {
	return to_string(price);
}

void Phone::setPrice(double price) {
	this->price = price;
}

string Phone::getMemory() {
	return to_string(memory);
}

void Phone::setMemory(int memory) {
	this->memory = memory;
}


string Phone::getYear() {
	return to_string(year);
}

void Phone::setYear(int year) {
	this->year = year;
}

string Phone::getDisplay() {
	return to_string(display);
}

void Phone::setDisplay(double display) {
	this->display = display;
}

string Phone::getCapecity() {
	return to_string(capecity);
}

void Phone::setCapecity(int capecity) {
	this->price = price;
}

int Phone::getCount() {
	return count;
}
string Phone::getSize() {
	return to_string(size);
}

void Phone::setSize(int size) {
	this->size = size;
}
