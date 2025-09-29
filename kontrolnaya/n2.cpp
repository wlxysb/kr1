#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double S;
    double A;
    double V0;

    cout << "Введите S" << endl;
    cin >> S;
    cout << "Введите A" << endl;
    cin >> A;
    cout << "Введите V" << endl;
    cin >> V0;

    //S = V0*t + (a*t*t)/2

    double t1;
    double t2;

    t1 = (((-V0) + (pow((pow(V,2)+2*A*S),0.5)))/A);
    t2 = (((-V0) - (pow((pow(V,2)+2*A*S),0.5)))/A);

    if (t1 > t2) {
        cout << t1 << endl;
    } else {
        cout << t2 << endl;
    }

    return 0;

}