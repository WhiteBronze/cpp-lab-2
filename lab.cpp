#include <iostream> 
#include <cmath> 

using namespace std;


long double factirial_2( int j ) {

    long double l = 1;
    if (j % 2 == 0) {
        for (long double i = 2; i <= j; i += 2 ) {

            l = l * i;

        }
        return l;
    }

    else {
        for (long double i = 1; i <= j; i += 2) {

            l = l * i;

        }
        return l;
    }
}
double t(long double x) {

    long double y, z;
    y = 0;
    z = 0;
    for (long double k = 0; k <= 10; k++) {
        y = y + (pow(x, 2 * k + 1) / factirial_2(2 * k + 1));
        z = z + (pow(x, 2 * k) / factirial_2(2 * k));
    }
    return y / z;
}
int main() {

    long double y, znania;

    cin >> y;

    znania = (7 * t(0.25) + 2 * t(1 + y)) / (6 - t(y * y - 1));
    cout << znania;

    return 0;
}
