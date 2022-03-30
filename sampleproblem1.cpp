#include<bits/stdc++.h>
using namespace std;
int main(){
    int T;
    cin>>T;
    for(int i=1;i<=T;i++){

        int N, M;
        cin>>N>>M;
        int sum=0;
        int arr[N];
        for(int j=1;j<=N;j++){
            cin>>arr[j];
            sum= sum + arr[j];


        }
        cout<<sum<<endl;
        int rem = sum%M;
        cout<<"Case #"<<i<<": "<<rem<<endl;



    }





}
