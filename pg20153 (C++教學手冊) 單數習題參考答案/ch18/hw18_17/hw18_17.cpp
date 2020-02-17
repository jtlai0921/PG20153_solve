//hw18_17
#include <iostream>
#include <cstdlib>
#include "cwin.h"
#include "ctcwin.h"
using namespace std;
int main(void)
{
   CTextWin tx1('A',"Hello C++");		// 建立子類別的物件
   CTextWin tx2(tx1);
  
   tx1.show_member();		
   tx2.show_member();	  
   
   cout<<"更改tx1物件的成員之後..."<<endl; 
   tx1.set_member('B',"Welcome C++");
   
   tx1.show_member();	   
   tx2.show_member();   
      
   system("pause");
   return 0;
}
