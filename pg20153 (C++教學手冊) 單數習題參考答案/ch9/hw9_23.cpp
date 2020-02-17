//hw9_23
#include<iostream>
#include<cstdlib>
#include<iomanip>
using namespace std;

#define M 2
#define N 3
int main(void)
{
   int i,j;
   int num1[M][N]={{2,2,6},{3,2,8}};
   int num2[M][N]={{5,2,2},{3,3,2}};
   int num3[M][N];
   cout <<"Before process,num1[i][j]=" << endl;
   for(i=0;i<M;i++)     
   {
      for(j=0;j<N;j++)
         cout << setw(2) << *(*(num1+i)+j) << " ";
      cout << endl;
   }
   cout <<"Before process,num2[i][j]=" << endl;
   for(i=0;i<M;i++)       
   {
      for(j=0;j<N;j++)
         cout << setw(2) << *(*(num2+i)+j) << " ";
      cout << endl;
   }
   for(i=0;i<M;i++)  
      for(j=0;j<N;j++)
        *(*(num3+i)+j)=*(*(num1+i)+j)+ *(*(num2+i)+j);
  
   cout << endl << "After process,num3[i][j]=" << endl;
   for(i=0;i<M;i++)
   {
     for(j=0;j<N;j++)
        cout << setw(2) << *(*(num3+i)+j) << " ";    
     cout << endl;
   }              
   system("pause");
   return 0;
}  
     
