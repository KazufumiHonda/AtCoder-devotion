#include <iostream>
#include <vector>
using namespace std;
int main(){
  int n;
  cin >> n;
  vector<int> a(n);
  for(int i=0;i<n;i++) cin >> a[i];

  vector<int> b(n-1);
  for(int i=0;i<n-1;i++){
    b[i] = a[i] * a[i+1];
  }

  for(int i=0;i<n-1;i++){
    std::cout << b[i];
    if(i == n-2) std::cout << std::endl;
    else std::cout << " ";
  }
}
