#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
while(t--){
string s;
string f;
cin>>s;
cin>>f;
int c=0;
int arr[100001];
int siz=0;

for(int i=0;i<f.size();i++){

    for(int j=0;j<s.size();j++){
        if(f[i]!=s[j]){
                arr[siz]=i+1;
                siz++;


        }


    }
}
int ca=1;

ca++;





int cnt=0;
for(int i=0;i<siz;i++){
        cnt+=arr[i]*(i+1);

}
cout<<"Case "<<"#"<<ca<<": "<<cnt<<endl;
}

}
