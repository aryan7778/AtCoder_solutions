#include<iostream>
#include<bits/stdc++.h>
#define fastIO ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

using namespace std;

int main(){
  long long int x;
  cin>>x;
  long long int now=100;
  long int yr=0;
  while(now<x)
  {
    yr++;
    now+=now/100;
  }
  cout<<yr<<endl;
  return 0;
}
