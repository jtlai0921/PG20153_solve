//hw6_11
#include<iostream>
#include<cstdlib>
using namespace std;
float power(float,int);

int main(void)
{   
     int p;
     float r,t;
     int n;
     
     cout <<"��J���� p:";
     cin  >>p;
     cout << "��J��Q�v r%:";
     cin  >>r; 
     cout <<"��J���� n:";
     cin  >>n; 
     
     if(n>0)
        t=p*power((1+r/100),n);
     else if(n==0) 
        t=p*(1+r/100);
     else
        cout <<"��ƿ�J���~" << endl; 
        
    cout <<"���Q�X�� "<< t << endl;
    
    system("pause");
    return 0;
}
float power(float a,int n)
{
    if(n==0)
    return 1;
    else return a*(power(a,n-1));
}    


