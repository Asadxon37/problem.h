#include <iostream>
using namespace std;
void bitoDi(int k) {
    if(k>1) {
        bitoDi(k/2);
    }
    cout << k%2;
}
int main() {
int n;
    cin >> n;
    if(n==0) {
        cout<<0;
    } else {bitoDi(n);}
    cout<<endl;
    return 0;

}