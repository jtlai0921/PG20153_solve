// hw3_21 
#include <iostream>
#include <cstdlib>
using namespace std;
int main(void)
{
   float f=28.47;
   cout.setf(ios::right,ios::adjustfield);	// �]�w�V�k���
   cout.fill('0'); 			   // �]�w��R�r��
   cout << "f=";
   cout.width(7);			      // �]�w��e
   cout << f << endl;			// ��Xf����
   system("pause");
   return 0;
}
