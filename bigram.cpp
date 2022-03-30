#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
while(t--){


    int n;
    cin>>n;
    string s;
    cin>>s;
    char p[501];
    int j=0;
    for(int i=0;i<s.size();i++){
        if(s[i]==' '){
                p[j]=s[i];
                j++;


        }

    }
    p[j]=s[s.size()-1];
    p[j++]='\0';
    cout<<p<<endl;
}





}
