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
   cout << "��=" << num.length << endl;    
   cout << "�e=" << num.width << endl;
   cout << "��=" << num.hight << endl;
   cout << "��n=" <<a(num.length,num.width,num.hight) << endl; 
   system("pause");
   return 0;
}   
int a(int a,int b,int c)          
{    
   return a*b*c;
}    
