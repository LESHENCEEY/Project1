#include<iostream>
#include <cmath>
using namespace std;

void main8() {
	setlocale(LC_ALL, "Russian");
	double q, S, b1;
	int n_= 0;
	double sum_= 0;
	int n;
	q = 1.05;
	S = pow(10, 9);
	b1 = 5 * pow(10, 3);
	n = (log((S * (q - 1) / b1) + 1)) / log(q);
	cout << "n=" << n << endl;
	while (sum_ < S) {
		sum_ = sum_ + b1 * pow(q, n_);
		n_ = n_ + 1;
		//cout << "n_=" << n_ << endl;
		//cout << "sum_" << sum_ << endl;
	} 
	if (sum_ > S) {
		sum_ = sum_ - b1 * pow(q, n_);
		n_ = n_ - 1;
	}
	cout << "n_=" << n_ << endl;
	cout << "sum_" << sum_ << endl;
}
