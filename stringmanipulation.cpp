#include<bits/stdc++.h>
#include<iostream>

using namespace std;
int main(){
int t;
cin>>t;
while(t--){
    string s;
    cin>>s;
    int k, n;
    cin>>k>>n;
    int l=s.size();
    for(int i=0;i<l;i++){
            int index=(i+n)%k;
             s[index]=s[i];

    }

    s[l+1]='\0';
    cout<<s<<endl;
    std::flush;
    return 0;





}





}
