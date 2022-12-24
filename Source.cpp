#include<iostream>
using namespace std;

void main1() {
	setlocale(LC_ALL, "Russian");
	double a;
	cout << "Введите число а" << endl;
	cin >> a;
	if (a > 0) { cout << "Число положительно"; }
	else { cout << "Число отрицательное"; }

	cout << "a= " << a;
}
