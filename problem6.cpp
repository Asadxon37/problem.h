#include <iostream>
using namespace std;

template <typename T>
T midValue(T a, T b, T c) {
    if (a > b && a < c||a>c && a<b) {
        return a;
    } if (b > a && b < c||b>c && b<a) {
        return b;
    } return c;
}
int main() {
    double x,y,z;
    cin>>x>>y>>z;
    cout<<midValue(x,y,z)<<endl;
}