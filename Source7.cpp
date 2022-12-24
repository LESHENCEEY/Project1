#include<iostream>
#include <cmath>
using namespace std;

int main() {
	setlocale(LC_ALL, "Russian");
	int Nsh = 64, q = 2, b1 = 1; 
	double S = 1, n = 1;
	while(n-1<Nsh){
		S = S + b1 * pow(q, n);
		n = n + 1;
		cout << "n=" << n << " S=" << S << endl;
	}
}