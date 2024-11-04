#include <iostream>
using namespace std;
void swap_values(double &a, double &b) {
    a=b+a;
    b=a-b;
    a=a-b;
    cout<<"a="<<a<<endl;
    cout<<"b="<<b<<endl;
}
int main() {
double a, b;
    cout<<"a=";
    cin>>a;
    cout<<"b=";
    cin>>b;
    swap_values(a,b);



}