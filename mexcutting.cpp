#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
string  s;
while(t--){
    cin>>s;
    int c=0;
    int c1=0;
    int c2=0;
    for(int i=0;i<s.size();i++){

        if(s[i]=='0'&&s[i+1]=='1'&&s[i+2]=='0'){

            c=2;
            break;
        }
        else if(s[i]=='0'){

            c=1;
        }
        else if(s[i]=='1'){

            c=0;
        }
    }
    if(c==2){
        cout<<c<<endl;
    }
    else
        cout<<c1+c2<<endl;


}




}
