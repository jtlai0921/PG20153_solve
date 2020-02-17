//hw18_11(c)
#include <iostream>   
#include <cstdlib>
using namespace std;
template <class T1,class T2>	 
double times(T1 a,T2 b)  		
{
   double sum=a*b; 		
   return sum;
}

int main()
{
   cout << "times(3.7,4)="<< times<double,int>(3.7,4) <<endl;   
   cout << "times(3,4.2)="<< times<int,double>(3,4.2) <<endl;

   system("pause");
   return 0;
}

