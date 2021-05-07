#include <iostream>
#include <cmath>
using namespace std;

int main(){
  int n;
  cin >> n;
  int x0,y0,xn2,yn2;
  cin >> x0 >> y0 >> xn2 >> yn2;

  double cx,cy;
  cx = (double)(x0+xn2)/2;
  cy = (double)(y0+yn2)/2;

  double theta = (double)360/n * M_PI /180;

  double x,y;

  x = cos(theta) * (x0 - cx) - sin(theta) * (y0 - cy) + cx;
  y = sin(theta) * (x0 - cx) + cos(theta) * (y0 - cy) + cy;

  printf("%.10lf %.10lf\n",x,y);
}
