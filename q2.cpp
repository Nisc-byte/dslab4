#include <iostream>
using namespace std;

long long mod_pow(long long b, long long n, long long m) {
    long long result = 1;
    b = b % m;
    while (n > 0) {
        if (n % 2 == 1)
            result = (result * b) % m;
        b = (b * b) % m;
        n /= 2;
    }
    return result;
}

int main() {
    long long b, n, m;
    cout << "Enter base (b): ";
    cin >> b;
    cout << "Enter exponent (n): ";
    cin >> n;
    cout << "Enter modulus (m): ";
    cin >> m;
    cout << "Result: " << mod_pow(b, n, m) << endl;
    return 0;
}
