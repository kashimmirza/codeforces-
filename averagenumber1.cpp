#include<bits/stdc++.h>
using namespace std;
int main(){

    int n;
    cin>>n;
    int a[n];
    long long sum=0;
    for(int i=0;i<n;i++){
        cin>>a[i];
        sum+=a[i];



    }
    int c=0;
    int b[100001];
    long long av=sum/n;

    map<int, int>tt;

    int i=0;
    for( ;i<n;i++){


        if(av==a[i]){


            b[c]=i+1;
            c++;


        }
    }
    cout<<c<<endl;
for(int k=0;k<c;k++){
    cout<<b[k]<<" ";

}










}
