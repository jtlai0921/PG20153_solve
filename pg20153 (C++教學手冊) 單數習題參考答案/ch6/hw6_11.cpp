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
     
     cout <<"輸入本金 p:";
     cin  >>p;
     cout << "輸入月利率 r%:";
     cin  >>r; 
     cout <<"輸入期數 n:";
     cin  >>n; 
     
     if(n>0)
        t=p*power((1+r/100),n);
     else if(n==0) 
        t=p*(1+r/100);
     else
        cout <<"資料輸入錯誤" << endl; 
        
    cout <<"本利合為 "<< t << endl;
    
    system("pause");
    return 0;
}
float power(float a,int n)
{
    if(n==0)
    return 1;
    else return a*(power(a,n-1));
}    


