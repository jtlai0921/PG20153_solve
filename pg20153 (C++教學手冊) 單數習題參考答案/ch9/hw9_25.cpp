//hw9_25
#include<iostream>
#include<cstdlib>
using namespace std;
#define SIZE 3
#define LENGTH 12
void convert(char m[SIZE][LENGTH]); 
int main(void)
{
   int i;
   char a[SIZE][LENGTH]={"Bloodshed","Dev c++","Program31"};
   cout << "Before process..." << endl;
   for(i=0;i<SIZE;i++)
      cout << "a[" << i << "]=" << *(a+i) << endl;
   convert(a);
   cout << endl << "After process..." << endl;
   for(i=0;i<SIZE;i++)
      cout << "a[" << i << "]=" << *(a+i) << endl;                
   system("pause");
   return 0;
}

void convert(char m[SIZE][LENGTH])  
{
   int i,j;
   for(i=0;i<SIZE;i++)
       for(j=0;j<LENGTH;j++)
          if (*(*(m+i)+j)=='\0')
             break;
          else if((*(*(m+i)+j)>=97) && (*(*(m+i)+j)<=122))
             *(*(m+i)+j)-=32;
   return;
}                
