#include<bits/stdc++.h>
using namespace std;
int main(){
int n;
int t,k;
cin>>t;
while(t--){
    cin>>n>>k;
    char s[n];
    int i=0;
    for( i=0;i<k; i++){
        s[i]='a';
    }
    for(int j=i;j<n;){
        s[j]='b';
        j++;
        if(j<n){

        s[j]='c';
        j++;
        }
        if(j<n){
            s[j]='a';
            j++;
        }
        else
            break;

    }
    s[n]='\0';
    cout<<s<<endl;



}







}
