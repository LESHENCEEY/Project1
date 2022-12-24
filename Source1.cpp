#include<iostream>
using namespace std;

void main3() {
	setlocale(LC_ALL, "Russian");
	int a;
	int b;
	double c;
	cout << "¬ведите число а и ещЄ раз введите число b" << endl;
	cin >> a;
	cin >> b;
	c = (a + b) / 2.0;
	cout << "c=" << c;
   
}