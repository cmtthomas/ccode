//g++ sin_period_amp.cpp -o sin_period_amp.o

#include <iostream>
#include <cmath>
using namespace std;

double r4(double var) { //r4 - A function which rouds decimals to 4 places
    double value;
    if (var < 0 ) {
      value = (int)(var*10000 - 0.0005);
    }
    else value = (int)(var*10000 + 0.0005);
    return (double)value / 10000;
  }

int main(){
  double PI=3.14159265;
  double a, p, t, rad, sr, aspr; //amplitude, period, theta, radian, sine r, all together
  //t is theta in terms of degrees
  cout << "Input amplitude: ";
  cin >> a;
  cout << "Input period: ";
  cin >> p;
  cout <<"\n Theta\tsin(t)\ta*sin(pt) \n";
    for ( t=0; t<=360; t = t+15) {
      rad = t*(PI/180);
      sr = sin(rad);
      aspr = a*sin(p*rad);
      cout <<t<<"\t"<<r4(sr)<<"\t\t"<<r4(aspr)<<"\n";
    }
    return 0;
}
