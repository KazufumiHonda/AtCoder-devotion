#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
  int n;
  string s;
  int q;
  cin >> n >> s >> q;

  vector<int> as,bs;
  int len = 0;
  int t,a,b;
  int t2cnt = 0;
  vector<int> t2;
  t2.emplace_back(0);
  for(int i=0;i<q;i++){
    cin >> t >> a >> b;

    if(t == 1){
      as.emplace_back(a);
      bs.emplace_back(b);
      len++;
    }else if(t == 2){
      t2.emplace_back(len);
      t2cnt++;
    }
  }

  for(int j=t2.size()-1;j>0;j-=2){
    for(int i=t2[j-1];i<t2[j];i++){
      if(as[i] <= n){
        as[i] = as[i]+n;
      }else{
        as[i] = as[i]-n;
      }
      if(bs[i] <= n){
        bs[i] = bs[i]+n;
      }else{
        bs[i] = bs[i]-n;
      }
    }
  }


  char c;
  if(t2cnt % 2 == 1){
   for(int i=0;i<n;i++){
      c = s[i];
      s[i] = s[i+n];
      s[i+n] = c;
    }
  }


  for(int i=0;i<len;i++){
    c = s[as[i]-1];
    s[as[i]-1] = s[bs[i]-1];
    s[bs[i]-1] = c;
  }

  cout << s << endl;

}
