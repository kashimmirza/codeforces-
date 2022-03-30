#include<bits/stdc++.h>
using namespace std;
int main(){
    int T;
    cin>>T;
    for(int i=1;i<=T;i++){

        int N, M;
        cin>>N>>M;
        int a[N];
        long long  sum=0;
        int bag;
        for(int j=0;j<N;j++){
            cin>>a[j];
            sum= sum + a[j];


        }

        int rem = sum%M;
        cout<<"Case #"<<i<<": "<<rem<<endl;



    }





}
