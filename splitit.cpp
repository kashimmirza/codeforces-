#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
    string s;
    string s1;
    string s3;
   int n, k;
   cin>>n>>k;
   if(k==0){

    cout<<"YES"<<endl;
   }
   else if(k!=0){
    for(int i=0;i<k;i++){

        s1+=s[i];
    }
    for(int i=n-k;i<n;i++){
        s1+=s[i];

    }
     s3=s1;
    reverse(s1.begin(), s1.end());
    if(s3==s1){

        cout<<"YES"<<endl;
    }


   }
   else if(n==2*k){

    cout<<"NO"<<endl;
   }
   else
    cout<<"NO"<<endl;





}
}
