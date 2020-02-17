//hw3_25
#include<iostream>
#include<cstdlib>
#include<iomanip>
using namespace std;
int main(void)
{
    int a,b;
    cout << "Input a number=:";    
    cin  >> a;                  
    cout << "Input b number=:";  
    cin  >> b;                  
    cout << "a=" <<a << " in oct is ";
    cout << setbase(8) << a << endl;  
    cout << "b=" <<b << " in oct is ";
    cout << setbase(8) << b << endl;  
    cout << "(a+b)^2" << " in hex is ";
    cout << setbase(16) << (a+b)*(a+b) << endl; 
    system("pause");
    return 0;
} 
