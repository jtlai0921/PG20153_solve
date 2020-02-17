//hw9_31
#include<iostream>
#include<cstdlib>
using namespace std;
int main(void)
{
   char *ptr1,*ptr2,*temp;
   ptr1=new char[20];
   ptr2=new char[20];
   ptr1="Happy New Year!";   
   ptr2="How are you?";
   
   cout << "before swap..." << endl;
   cout << "ptr1=" << ptr1 << endl;  
   cout << "ptr2=" << ptr2 << endl;  
      
   temp=ptr1;
   ptr1=ptr2;
   ptr2=temp;
   
   cout << endl << "after swap..." << endl;
   cout << "ptr1=" << ptr1 << endl;  
   cout << "ptr2=" << ptr2 << endl;    
   
   delete[] ptr1;      
   delete[] ptr2;            
   system("pause");
   return 0;
}

