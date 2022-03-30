#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
for(int y=0;y<t;y++){
    int n;
    cin>>n;
    vector<int>a(n+1);

for(int i=0;i<n;i++){

    cin>>a[i];

}
sort(a.begin(),a.end());
vector<int> b;




for(int i=0;i<n;i++){
    if(i==0||a[i]!=a[i-1]){
        b.emplace_back(a[i]);
    }


    }
    for(int i=0;i<n;i++){
        if(i>0&&a[i]==a[i-1]){
            b.emplace_back(a[i]);
        }
    }
    for(int i=0;i<n;i++){
        cout<<b[i]<<" ";
    }
}
}









