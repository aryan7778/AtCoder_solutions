#include<iostream>
#include<bits/stdc++.h>
#include<algorithm>

using namespace std;
int main(){
	int a,b,c,d;
	int flag;
	cin>>a>>b>>c>>d;
    while(a>0||c>0){
    	c=c-b;
    	if(c<=0){
		
    	flag=0; break;
		}
	    a=a-d;
    	if(a<=0){
		flag=1;
		break;
    }
	}
	
	if(flag==1)
	cout<<"No"<<endl;
	else
	cout<<"Yes"<<endl;
return 0;
}
