#include"Phone.h"
#include "Store.h"
#include <ctime>

void changePrice(Phone& ph) {
	srand(time(NULL));
	ph.price = rand() % ( 10000 - 1000 + 1 ) + 1000 ;
}

int main() {
	Phone ph1("Apple iPhone", 1000);
	//Phone ph2("Apple iPhone", 1100);
	//Phone ph3("Apple iPhone", 2000);
	//cout << Phone::getCount() << endl;
	
	cout << "Before: " << ph1.getInfo() << endl;
	changePrice(ph1);
	cout << "After: " << ph1.getInfo() << endl;

	return 0;
}