#include <iostream>
#include <cmath>
using namespace std;
int floorFunction(double n){
  n=floor(n);
  return n;
}
int ceilingFunction(double n){
  n=ceil(n);
  return n;
}

int main(){
  double a;
  cin>>a;
  cout<<"Floor:"<<floorFunction(a)<<endl;
  cout<<"Ceiling:"<<ceilingFunction(a)<<endl;


return 0;
}