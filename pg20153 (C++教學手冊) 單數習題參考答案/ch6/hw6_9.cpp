//hw6_9
#include<iostream>
#include<cstdlib>
using namespace std;
float power(float,int);
int main(void)
{    
    int i,n=10;
    float sum=0,a=1./2;
    
    for(i=1;i<=n;i++)
        sum=sum+ power(a,i);
        
    cout <<"©M¬°:"<< sum << endl;
    system("pause");
    return 0;
}

float power(float a,int i)
{
    if(i==0)
       return 1;
    else 
       return a*(power(a,i-1));
}    


