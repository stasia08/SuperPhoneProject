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
