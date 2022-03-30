#include<bits/stdc++.h>
using namespace std;
int main(){

int grid[105][105];
int t;
cin>>t;


for(int i=1;i<=t;i++){
        long long trace=0;

    int n;
    cin>>n;
    vector<set<int> >row(n+1),col(n+1);
    for(int j=0;j<n;j++){
        for(int k=0;k<n;k++){
            scanf("%d",&grid[j][k]);
            if(i==j){
                trace+=grid[i][j];
            }
            row[i].insert(grid[i][j]);
            col[j].insert(grid[i][j]);
        }
    }
    int r1=0,c1=0;
    for(int r=1;i<=n;r++){
        if((int)row[r].size()!=n){
            r1++;
        }
        if((int)col[r].size()!=n){
            c1++;
        }
    }
printf("%lld, %d, %d\n",trace, r1,r1);


}




}
