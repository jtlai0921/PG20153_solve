//hw6_13
#include<iostream>
#include<cstdlib>
using namespace std;

inline void cub(int i)
{
    cout<< i <<"^3="<< i*i*i << endl;
} 

int main(void)
{   
    int i;
    cout<<"��J�@���i:";
    cin >> i;
    cub(i); 
    system("pause");
    return 0;
}


