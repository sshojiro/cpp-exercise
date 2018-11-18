#include <fstream>
#include <iostream>
#include <Eigen/Dense>
using namespace std;
using namespace Eigen;

int main(int argc, char* argv[]){
  int n, d;
  if (argc == 1){
    // Exception
    cout << 
    "this script expects one input, which must be a csv file"
     << endl;
  } else {
    // Default process
    if (argc == 4){
      n = atoi(argv[2]);
      d = atoi(argv[3]);
    } else {
      n = 100;
      d = 10;
    }
    cout << n << endl;
    cout << d << endl;
    MatrixXd m = MatrixXd::Random(n, d);
    ofstream myfile;
    myfile.open(argv[1]);
    myfile << m;
    myfile.close();
  }
  return 0;
}