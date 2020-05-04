#include<bits/stdc++.h>
#include<set>
#define fastIO ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

using namespace std;

int main() {
  fastIO  
  int n;
    cin>>n;
    set <string> s;
    string str;
    for(int i=0;i<n;i++){
        cin >> str;
        s.insert(str);
    }

    cout<<s.size()<<endl;

    return 0;
}
