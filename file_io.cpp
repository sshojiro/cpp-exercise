#include <fstream>
#include <iostream>
#include <Eigen/Dense>
using namespace std;
using namespace Eigen;

int main(int argc, char* argv[]){

  if (argc == 1){
    // Exception
    cout << 
    "this script expects one input, which must be a csv file"
     << endl;
  } else {
    // Default process
    MatrixXd m = MatrixXd::Random(100, 10);
    ofstream myfile;
    myfile.open(argv[1]);
    myfile << m;
    myfile.close();
  }
  return 0;
}