//hw14_13
#include<iostream>
#include<cstdlib>
using namespace std;
int main(void)
{
     float c;  
     cout << "請輸入攝氏溫度: ";
     cin >> c;              
     cout << "攝氏溫度 " << c << " 度";
     cout << "=華氏溫度 " << (9./5.)*c+32 << " 度" <<endl; 
     system("pause");
     return 0;
} 
