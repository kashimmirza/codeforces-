#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
while(t--){


    int n;
    cin>>n;
    int a[n];
    int b[n];
    for(int i=0;i<n;i++){
        a[i]=0;
    }
    int x;
    for(int i=0;i<n;i++){

        cin>>x;
        a[x]++;

    }
    int c=0;
    int sum=0;
    int re=0;
    for(int i=0;i<n; i++ ){
            re=max(sum, a[i]);




    }
    cout<<re<<endl;



    }
}







