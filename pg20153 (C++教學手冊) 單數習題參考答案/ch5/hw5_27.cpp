//hw5_27
#include<iostream>
#include<cstdlib>
using namespace std;
int main(void)
{
     int a=5,b=9,c=3,max,min;
     max=(a>b)?a:b;
     max=(max>c)?max:c;
     min=(a<b)?a:b;
     min=(min<c)?min:c;
     if(max>a && a>min)
        cout << max << "," << a << "," << min << endl;
     else if(max>b && b>min)
        cout << max <<"," << b << "," << min << endl;
     else 
        cout << max <<"," << c << "," << min << endl; 
     system("pause");
     return 0;
} 
