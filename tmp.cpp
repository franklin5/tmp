#include <iostream>
#include <new>
#include <math.h>
#include <iomanip>
#include <fstream>
#include <assert.h>
#include <Eigen/Eigenvalues>
using namespace std;
using Eigen::MatrixXd;
using Eigen::MatrixXcd;
using Eigen::ComplexEigenSolver;
using Eigen::VectorXcd;

class cEdge {
private:
  int _NX, _NY;
  MatrixXcd _bdg_E;
public:
  cEdge(int& NX)
    :_NX(NX),_NY(NX+1),
     _bdg_E(_NX,_NY*4){}
};

int main(){
  int _NX = 3;
  MatrixXcd bdg(4*_NX,4*_NX);
  bdg.setZero(4*_NX,4*_NX);
  ComplexEigenSolver<MatrixXcd> ces;
  for (int i = 0; i < _NX; ++i) {
    bdg(0+i,0+i) = complex<double> (-2.0,0.0);
  }
  for (int i = 0; i < _NX-1; ++i) {
    bdg(0+i,0+i+1) = complex<double> (1.0,0.0);
    bdg(0+i+1,0+i) = complex<double> (1.0,0.0);
  }
  cout << bdg << endl;
  cEdge edge(_NX);
  //  cout << "master branch" << endl;
  return 0;
}
