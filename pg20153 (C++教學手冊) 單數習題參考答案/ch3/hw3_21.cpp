// hw3_21 
#include <iostream>
#include <cstdlib>
using namespace std;
int main(void)
{
   float f=28.47;
   cout.setf(ios::right,ios::adjustfield);	// 設定向右對齊
   cout.fill('0'); 			   // 設定填充字元
   cout << "f=";
   cout.width(7);			      // 設定欄寬
   cout << f << endl;			// 輸出f的值
   system("pause");
   return 0;
}
