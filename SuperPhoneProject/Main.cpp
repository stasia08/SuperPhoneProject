#include"Phone.h"
#include "Store.h"

int main() {
	Phone ph1("Apple iPhone", 1000);
	Phone ph2("Apple iPhone", 1100);
	Phone ph3("Apple iPhone", 2000);

	cout << Phone::getCount() << endl;
	

	return 0;
}