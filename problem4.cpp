#include <iostream>
using namespace std;
int digitSum(int b) {
    int sum = 0;
    while (b > 0) {
        sum += b % 10;
        b /= 10;
    }return sum;
}
int main() {
    int n;
    cin >> n;
    cout << digitSum(n);
}