//hw5_35
#include<iostream>
#include<cstdlib>
using namespace std;
int main(void)
{
     int a,i,s,n1=0,n2=0,n3=0,n4=0,n5=0,n6=0,n7=0,n8=0,n9=0,n0=0;
     
     cout <<"輸入一個六個位數的整數:";
     cin  >> a; 
     
      for(i=100000;i>=1;i=i/10)
      {
          s=a/i;
          a=(a-s*i);
          
          switch(s)
          {
             case 1: n1++; break;
             case 2: n2++; break;
             case 3: n3++; break;
             case 4: n4++; break;
             case 5: n5++; break;             
             case 6: n6++; break;
             case 7: n7++; break;             
             case 8: n8++; break;             
             case 9: n9++; break;
             case 0: n0++; break;             
          }
      }

      cout << n0 << " 個 0" << endl;
      cout << n1 << " 個 1"  << endl;   
      cout << n2 << " 個 2" << endl;
      cout << n3 << " 個 3" << endl;
      cout << n4 << " 個 4" << endl;
      cout << n5 << " 個 5" << endl;
      cout << n6 << " 個 6" << endl;
      cout << n7 << " 個 7" << endl;
      cout << n8 << " 個 8" << endl;
      cout << n9 << " 個 9" << endl;
      
     system("pause");
     return 0;
} 
