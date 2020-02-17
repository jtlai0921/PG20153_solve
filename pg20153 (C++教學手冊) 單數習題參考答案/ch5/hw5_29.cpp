//hw5_29
#include<iostream>
#include<cstdlib>
using namespace std;
int main(void)
{
    float x,y;
    cout << "請輸入x座標值:";
    cin  >> x;
    cout << "請輸入y座標值:";
    cin  >> y;
    if(x>0) 
    {
       if(y>0)
          cout << "輸入座標值座落於第一象限" << endl;    
       else if(y<0)
          cout << "輸入座標值座落於第四象限" << endl;       
    }  
    else if(x<0)
    {
       if(y>0)
          cout << "輸入座標值座落於第二象限" << endl;    
       else if(y<0)
          cout << "輸入座標值座落於第三象限" << endl;
    } 
    if (x==0)   
       cout <<"座標位於y軸上" << endl; 
    if (y==0)
       cout <<"座標位於x軸上" << endl; 
    system("pause");
    return 0;
} 
