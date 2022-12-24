#include<iostream>
using namespace std;

void main5() {
	setlocale(LC_ALL, "Russian");
	int a,b;
	double d,c;
	cout << "¬ведите двухзначное число a  " << endl;
	cin >> a;
	b = a / 10;
	d = a / 10.0;
	c = (d - b)*10;
	cout << "c=" << c << endl;
	cout << "b=" << b << endl;
	}