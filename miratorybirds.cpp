#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    vector<int>p;
    for(int i=0;i<n;i++){
            p[a[i]]++;



    }
    for(int i=0;i<p.size();i++){


        cout<<p[i]<<endl;
    }








}
