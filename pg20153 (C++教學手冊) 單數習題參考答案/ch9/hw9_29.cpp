//hw9_29
#include <iostream>
#include <cstdlib>
#include <iomanip>
using namespace std;
void search(int a[][3],int b[]);
int main(void)
{
   int a[4][3]={{26,5,7},{10,3,47},{6,76,8},{40,4,32}};
   int i,j,result[2]={0};
   cout << "elements in array:" << endl;  
   for(i=0;i<4;i++)
   {
      for(j=0;j<3;j++)
      { 
         cout << setfill('0') << setw(2);
         cout << *(*(a+i)+j) << " ";
      }
      cout << endl;
   }
   search(a,result);
   cout << "maximum=" << *(result+0) << endl;
   cout << "minimum=" << *(result+1) << endl;
   cout << *(result+0) << "-" << *(result+1) << "=" << *(result+0)-*(result+1) << endl;
   system("pause");
   return 0;
}

void search(int a[4][3],int b[2]) 
{
   int i,j,max=*(*(a+0)+0),min=*(*(a+0)+0);
   for(i=0;i<4;i++)
      for(j=0;j<3;j++)
      {
         if(max<*(*(a+i)+j))   
            max=*(*(a+i)+j);
         if(min>*(*(a+i)+j))   
            min=*(*(a+i)+j);
      }
   *(b+0)=max;
   *(b+1)=min;
   return;
}
