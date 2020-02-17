//hw14_11
#include <iostream>
#include <cstdlib>
using namespace std;
class CTime        
{
   private:
      int hour,min;
      float sec;
   
    public:
      CTime(int h,int m,float s):hour(h),min(m),sec(s){}
      
      CTime(){}
      
      void show_time()
      {
         cout << hour << "hr " << min << "min " << sec << "sec" << endl;
      }   
      float to_sec()
      {
         return hour*3600.+min*60.+sec;
      }
      
      CTime operator-(CTime &t)  
      {
         float time,s;
         int h,m;
         
         time=this->to_sec()-t.to_sec();
         h=(int)time/3600;
         m=((int)time-h*3600)/60;
         s=time-(h*3600+m*60);
         return CTime(h,m,s);
      }
};
   
int main(void)
{
   CTime t1(6,53,56.3);
   CTime t2(5,45,30.3);
   CTime t3=t1-t2;
   
   t3.show_time();
               
   system("pause");
   return 0;
}       
