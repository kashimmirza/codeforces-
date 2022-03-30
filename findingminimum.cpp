#include<bits/stdc++.h>
using namespace std;
int main(){
int n;
int t;
cin>>t;
for(int i=1;i<=t;i++){
cin>>n;
vector<int>a(n);
int x;
for(int i=0;i<n;i++){
    cin>>x;
    a.push_back(x);
}

int j=0;
int sum=0;
for(int i=0;i<n;i++){
     int mi=a[i];
     int index=i;
     j=findminimum(a, i,n);
        if(mi>=a[j]){
            mi=a[j];
            index=j;
        }
        reverse(a.begin()+i, a.begin()+index);


     }
     cout<<i<<" "<<index<<endl;
     sum+=j-i+1;
    }
    cout<<sum<<endl;
}
}


