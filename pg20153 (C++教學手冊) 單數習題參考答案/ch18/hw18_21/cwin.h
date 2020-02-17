//標頭檔cwin.h，用來儲存CWin類別的定義
#ifndef CWIN_H
#define CWIN_H
class CWin    // 定義視窗類別CWin
{
   protected:
     char id;
     int width;   
     int height;
   public:
     CWin(char ch, int w, int h):id(ch),width(w),height(h){}
     void show(void);    // 函數成員area()的原型
};
#endif
