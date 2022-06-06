#include<bits/stdc++.h>
using namespace std;
int main(){
    int m,n;
    cin>>n;
    cin>>m;

map<string, string>mp;
string a, b;
for(int i=0;i<m;i++){
    cin>>a;
    cin>>b;
    mp[a]=b;

}

string se;

for(auto i=0;i<n;i++){
    cin>>se;
    if(se.size()>mp[se].size()){
        cout<<mp[se]<<" ";
    }
    else {
        cout<<se<<" ";
    }


}




}
