#include<iostream>
using namespace std;

void main1() {
	setlocale(LC_ALL, "Russian");
	double a;
	cout << "������� ����� �" << endl;
	cin >> a;
	if (a > 0) { cout << "����� ������������"; }
	else { cout << "����� �������������"; }

	cout << "a= " << a;
}
