#include "Store.h"


Store::Store() {
	brand = "no store brand";
	size = 0;
	list = NULL;
}

Store::Store(string brand) {
	this->brand = brand;
	size = 0;
	list = NULL;
}

 Store::Store(string brand, Phone* list, int size) {
	this->brand = brand;
	this->size = size;
	this->list = list;
}

 Store::~Store() {
	 if (list != NULL) {
		 delete[] list;
	 }
 }

 string Store::getBrand() {
	 return brand;
 }

 void Store::setBrand(string brand) {
	 this->brand = brand;
 }

 int Store::getSize() {
	 return size;
 }

 Phone Store::get(int index) {
	 if (list == NULL || index < 0 || index >= size) {
		 return Phone();
	 }
	 else {
		 return list[index];
	 }
 }

 void Store::add( Phone phone) {
	 if (list == NULL) {
		 list = new Phone[1];
		 size = 1;
		 list[0] = phone;
	 }
	 else {
		 Phone* temp = new Phone[size + 1];
		 for (int i = 0; i < size; i++)
		 {
			 temp[i] = list[i];
		 }
		 temp[size] = phone;
		 delete[] list;
		 list = temp;
	 }
 }

 string Store::getInfo() {
	 if (list == NULL) {
		 return "Brand " + brand + " is empty.";
	 }
	 else {
		 string msg = "Phone of store " + brand + ":\n";
		 for (int i = 0; i < size; i++)
		 {
			 msg += list[i].getInfo() + "\n";
		 }

		 return msg;
	 }
 }
	




