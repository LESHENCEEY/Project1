#include<iostream>
using namespace std;

void main4() {
    setlocale(LC_ALL, "Russian");
    double a;
    double b;
    double c;
    double max_;
    double min_;
    cout << "¬ведите число а" << endl;
    cin >> a;
    cin >> b;
    cin >> c;
    if (a > b) {
        if (c < b) {
            max_ = a; min_ = c;
        }
        else {
            if (c > a) {
                max_ = c; min_ = b;
            }
            else {
                max_ = a; min_ = b;
            }
        }
    }
    else {
        if (c < a) {
            max_ = b; min_ = c;
        }
        else {
            if (c > b) {
                max_ = c; min_ = a;
            }
            else {
                max_ = b; min_ = a;
            }
        }
    }
    cout << "max_= " << max_ << " min_= " << min_ << endl;
}