#include "Store.h"

Store::Store() {
	brand = "no store brand";
	size = "no size";
	list = NULL;
}

Store::Store(string brand) {
	this->brand = brand;
	size = "no size";
	list = NULL;
}

 Store::Store(string brand, Phone* list, int size) {
	this->brand = brand;
	this->size = size;
	this->list = list;
}


