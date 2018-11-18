#include <iostream>
#include <Eigen/Dense>
#include <time.h>
using Eigen::MatrixXd;
using namespace std; 
int main()
{
    MatrixXd m(2,2);
    clock_t t;
    t = clock();
    m << 3, 2.5, -1, 4.;
    t = clock() - t;
    cout << m << endl;
    cout << "Inserting duration is: " << t << endl;
}
