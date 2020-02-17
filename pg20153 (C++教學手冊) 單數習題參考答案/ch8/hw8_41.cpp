//hw8_41
#include<cstring> 
#include<iostream>
#include<cstdlib>
#include<iomanip>
using namespace std;
int main(void)
{
   int i;
   float tol=0;
   int b[5]={0};
   char a[5][10]={"Richard","Amy Lee","Paul Yang","Mary Wang","Jean Fen"};
   for(i=0;i<5;i++)
   {
      cout << a[i] << " ªº¦¨ÁZ: ";
      cin  >> b[i];
   }
   cout << endl;
   for(i=0;i<5;i++)
      cout << a[i] << "  ";
   cout << endl;    
   for(i=0;i<5;i++)
   {
      cout <<"  " << setw(3) << b[i] <<"     ";
      tol=tol+b[i];
   }
   cout << endl << endl << "¥­§¡=" << setw(4) << tol/5 << endl;        
   system("pause");
   return 0;
}            
