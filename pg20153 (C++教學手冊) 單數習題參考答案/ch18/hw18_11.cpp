//hw18_11
#include <iostream>   
#include <cstdlib>
using namespace std;
template <class T>	// 定義函數樣板 
T add(T a,T b)  		// add()的傳回型態為T，傳入的兩個引數型態也是T
{
   T sum=a+b; 		// 設定變數sum的型態為T，其值等於a+b
   return sum;
}

int main()
{
   cout << "add(3,4)="<< add<int>(3,4) <<endl;   
   cout << "add(3.2,4.6)="<< add<double>(3.2,4.6) <<endl;

   system("pause");
   return 0;
}

