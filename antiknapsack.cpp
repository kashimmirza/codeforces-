#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
while(t--){


    int n;
    cin>>n;
    int k;
    cin>>k;
    cout<<n-k +k/2<<endl;
    for(int i=k+1;i<=n;i++){

        cout<<i<<" ";
    }
    for(int i=(k+1)/2;i<k;i++){
        cout<<i<<" ";


    }
    cout<<endl;
}




}
