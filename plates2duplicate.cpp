#include<bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0);



int k, n, p;

int cash[30][1501];
int pref[30][1501];
int a[30][31], pre[30][31];
int rec(int idx, int taken){
if(taken==p)
    return 0;
if(idx>n||taken>p){
    return -1e9;
}
if(cash[idx][taken]!=-1)
    return cash[idx][taken];
int ans=-1e9;;
for(int i=0;i<=k;i++){
    ans=max(ans, pref[idx][i]+rec(idx+1, taken+i));

}
return cash[idx][taken]=ans;




}
int main(){
    IOS;
int t;
cin>>t;
int tc=0;
while(t--){

 tc++;
 cin >>n>>k>>p;

    for(int i=1;i<=n;i++){

        for(int j=1;j<=k;j++){
                cin>>a[i][j];
         pre[i][j]=pre[i][j-1]+a[i][j];
        }
    }
    memset(cash, -1, sizeof(cash));
    int ans= rec(1,0);
    cout<< "Case #" <<tc<< ": "<<ans<<endl;
}




}

