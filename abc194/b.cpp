#include <iostream>
#include <vector>
using namespace std;
int main(){
  int n;
  cin >> n;
  vector<int> a(n),b(n);
  for(int i=0;i<n;i++) cin >> a[i] >> b[i];

  int ans = a[0]+b[0];
  for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
      if(i==j){
        ans = min(ans,a[i]+b[j]);
      }else{
        ans = min(ans,max(a[i],b[j]));
      }
    }
  }

  cout << ans << endl;
}
