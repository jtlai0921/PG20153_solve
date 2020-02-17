//hw7_7
#include<iostream>
#include<cstdlib>
using namespace std;
float triangle(int,int);      
float triangle(float,float);
int main(void)
{
   int a=5,b=1;
   float x=2.3,y=3.0;
   cout <<"(" << a << "*" << b << ")/2=" << triangle(a,b) << endl;
   cout << "(" << x << "*" << y << ")/2=" << triangle(x,y) << endl; 
   system("pause");
   return 0;
}

float triangle(int base,int height)         
{
   return base*height/2.;                 
}

float triangle(float base,float height) 
{
   return base*height/2;                 
}                
