//hw6_21
#include<iostream>
#include<cstdlib>
using namespace std;
double avg(int a,int b,int c);
void show(int a,int b,int c);
int main(void)
{  
   int a,b,c;
   
   cout <<"��Ja��:";
   cin  >>a;
   cout <<"��Jb��:";
   cin  >>b;
   cout <<"��Jc��:";
   cin  >>c;
   
   cout << "avg(a,b,c)=" << avg(a,b,c) << endl;
   
   system("pause");
   return 0;
}

double avg(int a,int b,int c)
{
    show(a,b,c);
    return (a+b+c)/3.;
    
}

void show(int a,int b,int c)
{
   cout<<"a="<< a << endl;
   cout<<"b="<< b << endl;
   cout<<"c="<< c << endl;
}     
