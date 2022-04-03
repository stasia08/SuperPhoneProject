#include "Phone.h"

Phone::Phone() {

}
Phone::Phone(string brand, double price) {
	this->brand = brand;
	this->price = price;
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
