#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
while(t--){
    string s;
    cin>>s;
    if(s.size()<=2){
        cout<<s<<endl;
        continue;


    }
    char a[101];
    a[0]=s[0];
    //cout<<a[0]<<endl;
    a[1]=s[1];
    int j=1;
    int l=(int)s.size();
    for(int i=2;i<l;i++){
        if(i%2!=0){
                j++;
            a[j]=s[i];
        }
    }
    j=j+1;
    a[j]='\0';
    cout<<a<<endl;




}





}
