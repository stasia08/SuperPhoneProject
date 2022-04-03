#include"Phone.h"

int main() {
	Phone ph1("Apple iPhone", 1000);
	Phone ph2("Apple iPhone", 1100);
	Phone ph3("Apple iPhone", 2000);

	cout << ph1.getInfo() << endl;
	cout << ph2.getInfo() << endl;
	cout << ph3.getInfo() << endl;

	return 0;
}