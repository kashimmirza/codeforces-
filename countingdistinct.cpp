#include<bits/stdc++.h>
using namespace std;
int main(){
string s;
cin>>s;
int flag=1;
int c=0;
for(int i=0;i<s.size();i++){
    if(flag==1){
        c++;
    }
    for(int j=0;j<s.size();j++){


        if(s[i]==s[j]&&i!=j){

            flag=0;
            break;
        }
    }
}
if(c==3){
    cout<<c*2<<endl;
}
else if(c==2){
    cout<<(c-1)*3<<endl;
}
else
    cout<<c<<endl;




}
