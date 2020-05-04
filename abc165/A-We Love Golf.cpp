#include<iostream>
#include<bits/stdc++.h>
#define fastIO ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

using namespace std;

int main(){
  int k;
  cin>>k;
  int a,b,flag=0;
  cin>>a>>b;
  if(k==1)
    cout<<"OK"<<endl;
  else if((b-a)>=k)
    cout<<"OK"<<endl;
  else 
  {
    for(int i=a;i<=b;i++){
      if(i%k==0){
        flag=1; 
        break;}
    }
    if(flag==1)cout<<"OK"<<endl;
    else
       cout<<"NG"<<endl;
  }
  return 0;
}
