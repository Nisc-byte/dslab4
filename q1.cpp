#include <iostream>
using namespace std;

double power(double a, int n) {
    double result = 1;
    while (n > 0) {
        if (n % 2 == 1)
            result *= a;
        a *= a;
        n /= 2;
    }
    return result;
}

int main() {
    double a;
    int n;
    cout << "Enter the base (a): ";
    cin >> a;
    cout << "Enter the exponent (n): ";
    cin >> n;
    cout << "Result: " << power(a, n) << endl;
    return 0;
}
