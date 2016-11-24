#pragma once
#include "Frame.h"
#include "ExArray.h"
void main() {
	/*
	try {
		Frame*f1 = new Frame;
		Frame*f2 = new Frame[10];

		delete f1;
		delete[] f2;
	}
	catch (string msg) {
		cout << "Error msg : " << msg << endl;
	}
	*/
	ExArray<int> arr1(3);
	ExArray<char> arr2(4);
	ExArray<double> arr3(5);

	arr1.addData(2);
	arr2.addData('A');
	arr3.addData(32.12);

	arr1.printData();
	arr2.printData();
	arr3.printData();
}