#include<iostream>
#include<cmath>
using namespace std;
struct Point{
    double x,y;
};
double get_crosspro(Point p1,Point p2)
{
    return p1.x*p2.y-p2.x*p1.y;
}
Point subtract(Point p1,Point p2)
{  Point result;
     result.x=p1.x-p2.x;
     result.y=p1.y-p2.y;
     return result;
}
int get_direction(Point a,Point b,Point p)
{ const int LEFT=-1,RIGHT=1,ON_THE_LINE=0;
    b = subtract(b,a);
    p = subtract(p,a);
    double cross_pro=get_crosspro(b,p);
    if(cross_pro>0)
    {
        return LEFT;
    }
    else if(cross_pro<0)
    {
        return RIGHT;
    }
    else
    {
      return ON_THE_LINE;
    }
}
 int main()
 {
     int res;
     Point a;
     Point b;
     Point p;
      std::cout<<"enter the coordintes of points lying on line\n";
      std::cout<<"enter the first coordintes of points lying on line\n";
      std::cin>> a.x;
      std::cin>> a.y;
      std::cout<<"enter the  second coordintes of points lying on line\n";
      std::cin>> b.x;
      std::cin>> b.y;
      std::cout<<"enter the coordintes of points of which you want to check location\n";
      std::cin>> p.x;
      std::cin>> p.y;
    res=get_direction( a,b,p);

    std::cout<<"The result is :-\n";
    if(res==1)
    std::cout<<"Rightside";
    else if(res==-1)
    std::cout<<"Leftside";
    else
    std::cout<<"on the line joining the points";
    return 0;
}
