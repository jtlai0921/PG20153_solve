//hw7_9
#include<iostream>
#include<cstdlib>
using namespace std;
int rectangle(int length,int width);     
float rectangle(float length,float width);
int rectangle(void);
int main(void)
{
   int length=5,width=2;
   float x=2.3,y=2.5;
   cout << "rectangle(" << length << "," << width << ")=" << rectangle(length,width) << endl;
   cout << "rectangle(" << x << "," << y << ")=" << rectangle(x,y) << endl;
   cout << "rectangle()=" << rectangle() << endl;
   system("pause");
   return 0;
}

int rectangle(int i,int j)        
{
   return i*j;                
}

float rectangle(float i,float j)  
{
   return i*j;                   
} 

int rectangle(void)
{
   return 1*1; 
}                 
