#include<bits/stdc++.h>
#include<cstdio>
using namespace std;


#define FOI(i, A, B) for(i=A; i<=B; i++)
#define FOD(i, A, B) for(i=A; i>=B; i--)

int N;
char adjMat[205][205];
bool visit[205][205];
char output;
 char s[105][105];

void dfs(char s[105][105], int X, int Y, int r, int c){

	if( X<0||X>=r||Y<0||Y>=c||s[X][Y]!='1')
        return ;

    s[X][Y]='2';



	int dx[] = {0, 0, 1, 1, -1, -1, 1, -1};
	int dy[] = {1,-1,1,-1,1,-1,0,0};
	int j;
	FOI(j, 0, 7)
		dfs(s, X + dx[j], Y + dy[j],r, c);
}

int numisland(char s[105][105]){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int rows =N;

  if(rows==0){
    return 0;
  }
  int cols = N;
  int no_of_islands=0;
  for(int i=0;i<rows; i++){
    for(int j=0;j<cols;j++){
        if(s[i][j]=='1'){
            dfs(s, i, j, rows, cols);
            no_of_islands  = no_of_islands + 1;
        }
    }
  }
  return no_of_islands;


}




int main(){
    cin>>N;

    int kase=0;
    while(scanf("%d", &N)==1)
    {


        for(int i=0; i<N; i++)
        {
            scanf("%s",s[i]);

        }


    }
cout<< numisland(s)<<endl;








	}


