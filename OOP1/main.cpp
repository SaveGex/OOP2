#include <iostream>
#include <vector>
#include "Array_whole_number.h"

using namespace std;

int main() {

	Array_whole_numbers obj{ {1} };
	obj.display();

	obj = obj + Array_whole_numbers{ {2,3} };
	obj.display();

	obj = obj + 4;
	obj.display();

	obj = 4 + obj;
	obj.display();
	cout << "\033[33m";
	for (int i = 0; i < 3; i++) {
		obj = obj + 5;
		obj.display();
	}
	Array_whole_numbers obj2{ {1} };
	//* its intersection of sets
	Array_whole_numbers obj3 = (obj * obj2);
	cout << "\033[0m";
	obj3.display();

	obj3 = obj - obj2;
	obj3.display();
	return 0;
}