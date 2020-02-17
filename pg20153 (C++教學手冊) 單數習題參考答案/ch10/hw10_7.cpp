//hw10_7
#include<iostream>
#include<cstdlib>
using namespace std;
struct mydata  
{
   int length;
   int width;
   int hight;
};
int a(int,int,int);                
int main(void)
{
   struct mydata num={10,2,3};     
   cout << "ªø=" << num.length << endl;    
   cout << "¼e=" << num.width << endl;
   cout << "°ª=" << num.hight << endl;
   cout << "Åé¿n=" <<a(num.length,num.width,num.hight) << endl; 
   system("pause");
   return 0;
}   
int a(int a,int b,int c)          
{    
   return a*b*c;
}    
