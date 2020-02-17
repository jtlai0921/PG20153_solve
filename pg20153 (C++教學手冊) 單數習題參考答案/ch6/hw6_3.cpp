//hw6_3
#include<iostream>
#include<cstdlib>
using namespace std;
void repeat(int);
int main(void)     
{
     repeat(3);
     repeat(10); 
     system("pause");
     return 0;
} 

void repeat(int k)   
{
     int i;
     for(i=1;i<=k;i++)
        cout << "Hello C++" << endl;  
     cout << endl;
     return;
}     
