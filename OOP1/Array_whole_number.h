#pragma once
#ifndef Array_whole_number
#define Array_whole_number

#include <vector>
#include <iostream>

using namespace std;

class Array_whole_numbers {
private:
	vector<int> some_array;

	bool check_exist(int value, vector<int> array) {
		//if ticket is false, then value exist at array
		bool ticket = true;

		for (int i = 0; i < array.size(); i++) {

			if (value == array[i]) {
				ticket = false;
				return ticket;
			}
		}
		return ticket;
	}
public:
	Array_whole_numbers(vector<int> array) : some_array{ array } {};
	Array_whole_numbers() : Array_whole_numbers({NULL}) {};

	Array_whole_numbers operator+(vector<int> array);
	Array_whole_numbers operator+(int value);
	friend Array_whole_numbers operator+(int value, Array_whole_numbers obj);
	friend Array_whole_numbers operator+(Array_whole_numbers obj1, Array_whole_numbers obj2);
	void display() {
		for (auto var : some_array) {
			cout << var << ' ' ;
		}
		cout << endl;
	}
	Array_whole_numbers operator*(Array_whole_numbers obj2);
	Array_whole_numbers operator-(Array_whole_numbers obj2);
};
#endif // !Array_whole_numbers
