#include<iostream>
#include <cmath>
using namespace std; 

void main9() {
	setlocale(LC_ALL, "Russian");
	int b1 = 1 , l = 1, t = 20 , n = 1 , q = 2;
    double n_ , Sm = 1 , T , pi , R = 6.4*pow(10,12), S;
	pi = acos(-1);
	S = pi * R * R;
	//cout << "pi=" << pi << endl;
	while (Sm < S) {
		Sm = b1 * pow(q, n); 
		cout << "n=" << n << " Sm=" << Sm << endl;
		n = n + 1;
	}
	T = n * t / 60;
	cout << "T=" << T << endl;
	n_ = (log((S * (q - 1) / b1) + 1)) / log(q);
	cout << "n_=" << n_ << endl;
}