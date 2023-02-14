#include "c:\Users\james\Desktop\std_lib_facilities.h"

int main()

{
	//program the prints the median of a vector.

	vector <double> values;
	double temp = 0;
	double half = 0;
	double median2 = 0;
	
	
	while (cin >> temp) {
		values.push_back(temp); //adds input to vector
		//cout << "vector size: " << values.size() << "\n"; //prints size of vector.

		if (values.size() % 2 == 0) { // for vectors with an even number of elements:
			half = values.size() / 2.0; //divides length value by 2
			median2 = (values[half] + values[half - 1]) / 2; //gets values on both sides of middle, adds, and divides by 2.
			cout << "Median value: " << median2 << "\n";
		}

		else
			;//cout << "fine" << "\n";

	}
}