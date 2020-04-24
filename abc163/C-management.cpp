#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  cout.tie(0);
  int n;
  cin>>n;
  int arr[n]={0};
  int arrr[n]={0};
  for(int i=0;i<n-1;i++){
    cin>>arr[i];
}
  for(int i=0;i<n;i++){
  	arrr[arr[i]-1]++;
    //if(arr[i]==i){
      //arrr[i]++;
  }
  for(int i=0;i<n;i++)
    cout<<arrr[i]<<endl;
return 0;
}
  
