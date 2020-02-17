//hw18_11(b)
#include <iostream>   
#include <cstdlib>
using namespace std;
template <class T>
T times(T a,T b)  	
{
   T sum=a*b; 	
   return sum;
}

int main()
{
   cout << "times(3,4)="<< times<int>(3,4) <<endl;   
   cout << "times(3.2,4.6)="<< times<double>(3.2,4.6) <<endl;

   system("pause");
   return 0;
}

