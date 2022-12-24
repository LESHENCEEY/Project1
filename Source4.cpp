#include<iostream>
using namespace std;

void main6() {
	setlocale(LC_ALL, "Russian");
	double d,da4,N;
	cout << "¬ведите толщину пачки листов A4 " << endl;
	cin >> d;
	da4 = 0.1;
	N = d / da4;
	cout << "N=" << N;
}