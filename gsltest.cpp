#include <stdio.h>
#include <gsl/gsl_sf_bessel.h>
#include <iostream>
using namespace std;
int main (){
  double x = 5.0;
  double y = gsl_sf_bessel_J0(x);
  cout << "J0(5.0)=" << y << endl;
  return 0;
}
