#include <iostream>
#include <cstdlib>

using namespace std;
int main(){
    char a_char[10];
    cout<<"input?"<<endl;
    cin>>a_char;
    cout<<"As a string:"<<atoi(a_char)<<endl;
    cout<<"As an integer:"<<atoi(a_char)<<endl;
    return 0;
}
