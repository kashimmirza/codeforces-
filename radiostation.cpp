#include<bits/stdc++.h>
#include<string>
using namespace std;
int main(){
int n, m;
cin>>n>>m;
string name, ip;
map<string, string>map_string;
for(int i=0;i<n;i++){
    cin>>name>>ip;
    map_string[ip]=name;


}
string cmd;
for(int i=0;i<m;i++){
    cin>>cmd>>ip;
    ip=ip[ip.size()-1];
    cout<<cmd<<" "<<ip<<" "<<"#"<<cout<<map_string[ip]<<endl;


}





}
