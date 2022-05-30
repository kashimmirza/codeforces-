#include<bits/stdc++.h>
using namespace std;
int count_one(long long res){
    int c=0;
while(res !=0){
    res = res& res-1;
    c++;
}

return c;

}
int main(){
int  n, m, k;
cin>>n>>m>>k;
long long  a[m+1];
for(int i=0;i<=m;i++){
    cin>>a[i];
}
long long res=0;
int numberoffriend=0;
for(int i=0;i<m;i++){
    res = a[i]^a[m];//xor to find different 1 as 01 10 =11

    if(count_one(res)<=k){
        numberoffriend++;
    }

}
cout<<numberoffriend<<endl;







}
