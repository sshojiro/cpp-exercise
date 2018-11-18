#include <Eigen/Dense>
#include <iostream>
using namespace std;
using namespace Eigen;

int main(){
  
  MatrixXd mat = MatrixXd::Random(3,3);
  VectorXd vec(3);
  vec << 1, 2, 3;
  cout << mat << endl;
  cout << vec << endl;
  cout << mat * vec << endl;
  return 0;
}
