#include <vector>
#include "Array_whole_number.h"

using namespace std;


Array_whole_numbers Array_whole_numbers::operator+(vector<int> array){

	vector<int>buffer_array;
	short size1 = array.size();
	short size2 = some_array.size();

	//Add elements at the buffer array if they aren't empty
	if (size1 > 0) {
		for (int i = 0; i < size1; i++) {
			if (check_exist(some_array[i], some_array)) {
				buffer_array.push_back(some_array[i]);
			}
		}
	}
	if (size2 > 0) {
		for (int i = 0; i < size1; i++) {
			if (check_exist(some_array[i], some_array)) {

				buffer_array.push_back(array[i]);
			}
		}
	}
	return Array_whole_numbers{ {some_array} };
};


Array_whole_numbers Array_whole_numbers::operator+(int value) {
	if (check_exist(value, some_array)) {
		some_array.push_back(value);
	}

	return Array_whole_numbers{ {some_array} };
}


//friend function
Array_whole_numbers operator+(int value, Array_whole_numbers obj) {
	if (obj.check_exist(value, obj.some_array)) {
		obj.some_array.push_back(value);
	}
	return obj;
}


//friend function
Array_whole_numbers operator+(Array_whole_numbers obj1, Array_whole_numbers obj2) {

	vector<int> buffer_array{ obj1.some_array };

	for (int i = 0; i < obj2.some_array.size(); i++) {

		if (obj1.check_exist(obj2.some_array[i], buffer_array) ) {
			buffer_array.push_back(obj2.some_array[i]);
		}
	}


	return Array_whole_numbers{buffer_array};
}


Array_whole_numbers Array_whole_numbers::operator*(Array_whole_numbers obj2){
	vector<int> buffer_array;

	for (int i = 0; i < some_array.size(); i++) {

		//if ticket is true, then element is exists at both arrays
		int value = some_array[i];
		bool ticket = false;

		for (int a = 0; a < obj2.some_array.size(); a++) {
			if (value == obj2.some_array[a]) {
				ticket = true;
			}
		}
		if (ticket) {
			buffer_array.push_back(value);
		}
	}

	return Array_whole_numbers{buffer_array};
}



Array_whole_numbers Array_whole_numbers::operator-(Array_whole_numbers obj2) {
	vector<int> buffer_array;

	for (int i = 0; i < some_array.size(); i++) {
		//if ticket is true, then element is exists at both arrays
		int value = some_array[i];
		bool ticket = false;

		for (int a = 0; a < obj2.some_array.size(); a++) {
			if (value == obj2.some_array[a]) {
				ticket = true;
			}
		}
		if (ticket == false) {
			buffer_array.push_back(value);
		}
	}
	return Array_whole_numbers{ buffer_array };

}
