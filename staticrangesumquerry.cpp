#include<bits/stdc++.h>
using namespace std;
int main(){
int n, q;
int a[100001];
cin>>n>>q;
int b[100001];
for(int i=0;i<n;i++){
    cin>>a[i];




}
b[0]=a[0];
for(int i=1;i<n;i++){

    b[i]=b[i-1]+a[i];
}
cout<<b[n-1]<<endl;
int x, y;
int sum;
while(q--){
    cin>>x>>y;
    /*sum=0;
    while(x<=y){
        sum+=a[x-1];

        x++;


    }*/

    cout<<b[y-1]<<endl;


}





}
