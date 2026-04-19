#include <iostream>
using namespace std;

bool isStrong(int num);
int main() {
    int num;
    cout << "Enter a number: "; cin >> num;
    if (isStrong(num)) cout << "Strong Number" << endl;
    else cout << "Not Strong Number" << endl;
    return 0;
}

int factorial(int n) {
    int fact = 1;
    for (int i = 1; i <= n; i++)
    fact *= i;
    return fact;
}
bool isStrong(int num) {
    int temp = num, sum = 0;
    while (temp > 0) {
        sum += factorial(temp % 10);
        temp /= 10;
    }
    return sum == num;
}
