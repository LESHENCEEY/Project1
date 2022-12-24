#include<iostream>
#include <cmath>
using namespace std;

void main7() {
	setlocale(LC_ALL, "Russian");
	double V, R, N, P, NA, T;
	cout << "Введите объём вашей комнаты " << endl;
	cin >> V;
	P = pow(10,5);
	NA = 6*pow(10,23);
	R = 8.31;
	T = 293;
	N = (P * V * NA) / (R * T);
	cout << "В вашей комнате столько частиц:" << N;



}