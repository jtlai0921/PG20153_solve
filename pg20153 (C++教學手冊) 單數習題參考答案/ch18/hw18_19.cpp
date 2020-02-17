//hw18_19
#include <iostream>
#include <cstdlib>
#define STR "Hello C++"  		// 定義 STR 為"Hello C++"字串

using namespace std;
int main()
{
   #ifndef STR              		// 如果STR有被定義
      cout << "STR not defined" << endl;
   #else               			   // STR沒有有被定義
      cout << STR << endl;
   #endif
   system("pause");
   return 0;
}

