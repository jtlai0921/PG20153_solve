// hw10_17
#include <iostream.h>
#include <stdlib.h>
#include <math.h>
typedef struct
{
   double x;
   double y;
} point;
int main(void)
{
   double square;
   point p1,p2;
   p1.x=p1.y=0;
   p2.x=0;
   p2.y=3;
   cout << "p1=(" << p1.x << "," << p1.y << "), ";
   cout << "p2=(" << p2.x << "," << p2.y << ")" << endl;
   square=(p1.x-p2.x)*(p1.x-p2.x)+(p1.y-p2.y)*(p1.y-p2.y);
   cout << "distance(p1,p2)=" << sqrt(square) << endl;
   system("pause");
   return 0;
}
