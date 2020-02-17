//hw8_21
#include<iostream>
#include<cstdlib>
using namespace std;
int min(int a[3][3]);
int main(void)
{
   int a[3][3]={{21,8,9},{10,1,54},{9,3,41}};
     cout << "二維陣列a中,最小值為:" << min(a) << endl; 
   system("pause");
   return 0;
}  

int min(int a[3][3])            
{
   int i,j,mina=a[0][0];
   for(i=0;i<3;i++)
      for(j=0;j<3;j++)
          if(a[i][j]<mina)        
               mina=a[i][j];
   return mina;             
}  
