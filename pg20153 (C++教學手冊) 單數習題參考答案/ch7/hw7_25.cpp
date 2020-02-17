//hw7_25, average程式碼 
//將此範例存成檔名為average,編譯後於ms-dos下執行

#include<iostream>
#include<cstdlib>
using namespace std;
int main(int argc,char *argv[])
{
   int a=atoi(argv[1]);
   int b=atoi(argv[2]);
   int c=atoi(argv[3]);
   int d=atoi(argv[4]);
   int e=atoi(argv[5]);
   cout << "a=" << a << ",b=" << b << ",c=" << c << ",d=" << d << ",e=" << e << endl;
   cout << "avg=" << (a+b+c+d+e)/5. << endl;
   system("pause");
  return 0;
} 

