#include <iostream>
using namespace std;
int main() {
  float a,b;
  cin >> a >> b;
  float ans = (a - b)/a * 100;
  printf("%.10f\n", ans);

}
