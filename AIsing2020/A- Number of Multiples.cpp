#include<bits/stdc++.h>
#define fastIO ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

using namespace std;

int main(){
  fastIO
 int l,r,d;
  cin>>l>>r>>d;
  int count=0;
  for(int i=l;i<=r;i++){
    if(i%d==0){
      count++;
    }
  }
  cout<<count<<endl;
  return 0;
}
