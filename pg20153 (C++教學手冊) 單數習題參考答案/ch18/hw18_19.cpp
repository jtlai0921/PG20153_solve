//hw18_19
#include <iostream>
#include <cstdlib>
#define STR "Hello C++"  		// �w�q STR ��"Hello C++"�r��

using namespace std;
int main()
{
   #ifndef STR              		// �p�GSTR���Q�w�q
      cout << "STR not defined" << endl;
   #else               			   // STR�S�����Q�w�q
      cout << STR << endl;
   #endif
   system("pause");
   return 0;
}

