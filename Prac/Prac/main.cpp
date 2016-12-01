#pragma once
//#include "Frame.h"
//#include "ExArray.h"
#include <iostream>
#include <string>
#include <vector>
#include <list>
#include <map>
using namespace std;

void dump(list<string> &l) {
	list<string>::iterator iter = l.begin();
	while (iter != l.end()) {
		cout << *iter << endl;
		iter++;
	}
}
class Word {
private:
	string word;
public:
	Word(string word) {
		this->word = word;
	}
	string getWord() {
		return this->word;
	}
};
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
	/*
	ExArray<int> arr1(3);
	ExArray<char> arr2(4);
	ExArray<double> arr3(5);

	arr1.addData(2);
	arr2.addData('A');
	arr3.addData(32.12);

	arr1.printData();
	arr2.printData();
	arr3.printData();*/
	/*
	vector<int> v;

	v.push_back(10);
	v.push_back(20);
	v.push_back(30);
	v.insert(v.begin(), 40);
	v.insert(v.end(), 50);

	for (int i = 0; i < v.size(); i++) {
		cout << v[i] << endl;
	}
	cout << "acces index at 1 : " << v.at(1) << endl;
	v.erase(v.begin());
	v.erase(v.end() - 1);

	vector<int>::iterator iter = v.begin();
	cout << "access index at 1 with iterator : " << iter[1] << endl;
	while (iter != v.end()) {
		cout << *iter << endl;
		iter++;
	}
	*/
	/*
	list<string> names;
	names.insert(names.begin(), "Konkuk");
	names.insert(names.end(), "University");
	names.insert(names.end(), "SCLAB");
	names.insert(names.end(), "CSY");

	dump(names);
	cout << "===" << endl;
	names.reverse();
	dump(names);
	*/
	/*
	map<string, int>m;
	m["Seoul"] = 100;
	m["Daegu"] = 120;
	m["Busan"] = 200;

	cout << "Train to Seoul = " << m["Seoul"] << "$" << endl;
	cout << "Train to Daegu = " << m["Daegu"] << "$" << endl;
	cout << "Train to Busan = " << m["Busan"] << "$" << endl;
	*/
	map<char, list<Word>> m;
	list<Word> aList;
	list<Word> bList;

	aList.push_back(Word("apple"));
	aList.push_back(Word("avoid"));
	aList.push_back(Word("appear"));

	bList.push_back(Word("bread"));
	bList.push_back(Word("bring"));
	bList.push_back(Word("bow"));

	m['a'] = aList;
	m['b'] = bList;
	map<char, list<Word>>::const_iterator iter = m.begin();

	while (iter != m.end()) {
		cout << iter->first << ":" << endl;
		list<Word> temp = iter->second;
		list<Word>::const_iterator iter_list = temp.begin();
		while (iter_list != temp.end()) {
			Word word = *iter_list;
			cout << word.getWord() << ", ";
			iter_list++;
		}
		cout << "\n===" << endl;
		iter++;
	}
}