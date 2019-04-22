// coefficient, base, exponent (cbe.cpp) CMT

#include <iostream>
using namespace std;

long double cbe(double c, double b, int e){
  long double value = 1;
  double exponent = e;
  while(exponent > 0 && e != 0){
    value = b * value;
    exponent--;
  }

  return c*value;
  }

int main() {
  long double y;
  int x;
  cout.precision(23);
  cout << "x\ty\n";
  for (x= 0; x < 33; x++){
    cout << x << "\t" << cbe(1,2,x) << endl;
  } //endx
  //cout << cbe(1,2,10);
  return 0;
}
