#include <iostream>
using namespace std;
int digitalRootBrute(int n) {
    while (n >= 10) {
        int sum = 0;
        while (n > 0) {
            sum += n % 10;
            n /= 10;
        }
        n = sum;
    }
    return n;
}
int digitalRootFast(int n) {
    if (n == 0) return 0;
    if (n % 9 == 0) return 9;
    return n % 9;
}
int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    cout << "Digital Root (Brute Force): " << digitalRootBrute(n) << endl;
    cout << "Digital Root (O(1) Trick): " << digitalRootFast(n) << endl;

    return 0;
}