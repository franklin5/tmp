#include "stdcpp.h"

int main(){
  complex<double> a(2,1);
  double b=2;
  cout << a*b << endl;
  Matrix2d M;
  M(0,0) = b;
  M(0,1) = 2+b;
  M(1,1) = b;
  M(1,0) =-b;
  //  cout << (a* M).real() << endl;
  //  cout << M << endl;
  Matrix2cd c;
  //  c.real().noalias()=(a*M).real();
  //c.imag().noalias()=(a*M).imag();
  //  c.noalias() = complex<double> (0,-1)* a*M;  
  c.setIdentity();
  cout << c << endl;
  complex<double> IMAGI (0.0,1.0);
  cout << IMAGI << endl;
  //  cout << c*c << endl;
  return 0;
}
