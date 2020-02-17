// show.cpp，用來顯示資料成員 
#include "cminiwin.h"  		// 載入cwin.h標頭檔
#include <iostream>
using namespace std;

void CMiniWin::show(void)
{
    cout << "Mini window " << id << ":" << endl; 
    cout << "Area = " << 0.8*width*height << endl;
}   
