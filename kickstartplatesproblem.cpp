#include<bits/stdc++.h>
using namespace std;
int t;
int n, k, p;

const int maxn=105;
int a[maxn][maxn];
int sum[maxn][maxn];
int dp[55][1555];
int ans;










int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
int t;
cin>>t;
int l;
for( l=1;l<=t;l++){
    int n, k, p;
    scanf("%d%d%d",&n,&k,&p);
    for(int i=1;i<=n;i++){
        for(int j=1;j<=k;j++){
            scanf("%d",&a[i][j]);
            sum[i][j]=sum[i][j-1]+a[i][j];
        }
    }
    memset(dp, 0, sizeof(dp));
    for(int i=1;i<=n;i++){
        for(int j=1;j<=k;j++){
            for(int q=j;q<=p;q++){
                dp[i][q]=max(dp[i][q],max(dp[i-1][q],dp[i-1][q-j]+sum[i][j]));
            }
        }
    }
    printf("Case #%d: ",l);
    printf("%d\n", dp[n][p]);

}



}
