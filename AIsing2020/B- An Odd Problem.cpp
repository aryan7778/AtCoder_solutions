#include<bits/stdc++.h>
#define fastIO ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

using namespace std;

int main(){
  fastIO
 int n;
  cin>>n;
  int arr[n];
  int count=0;
  for(int i=0;i<n;i++){
    cin>>arr[i];
    if((arr[i]%2!=0)&&((i+1)%2!=0)) {
      count++;
    }
  }
  cout<<count<<endl;
  return 0;
}
