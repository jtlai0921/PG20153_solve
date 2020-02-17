//hw8_27
#include<iostream>
#include<cstdlib>

using namespace std;
int main(void)
{
   char a[20];
   int i,A=0,E=0,I=0,O=0,U=0,other=0;
   cout << "Input a string(<20)? ";
   cin.getline(a,20); 
   cout << a <<  endl;
   for(i=0;i<strlen(a);i++)
   {
      if (a[i]=='A')
          A=A+1;
      else if(a[i]=='E')
              E=E+1;
           else if(a[i]=='I')
                   I=I+1;
                else if(a[i]=='O')
                        O=O+1;
                      else if(a[i]=='U')
                           U=U+1;
                           else
                              other=other+1;    
    }
   cout <<"出現A,E,I,O,U大寫字母及其他英文字母如下:" << endl; 
   cout << "A=" << A << endl;
   cout << "E=" << E << endl;
   cout << "I=" << I << endl; 
   cout << "O=" << O << endl;
   cout << "U=" << U << endl;
   cout << "other=" << other << endl;                                      
   system("pause");
   return 0;
}
