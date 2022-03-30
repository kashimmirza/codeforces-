#include<bits/stdc++.h>
using namespace std;



int visited[100];
vector < vector<int> >L(100);
int m,n;
stack<int>stk;
char A[22],B[22],*a,*b;
int al[30][30], link[30],TS[30];
bool use[30];

int amm;

void INITIAL()
{
     for (int i=0;i<26;i++)
     {
         al[i][0]=0;
         link[i]=0;
         use[i]=0;
     }
}
void LINK(char x,char y)
{
     use[y-'A']=true;
     use[x-'A']=true;
     link[y-'A']++;
     al[x-'A'][++al[x-'A'][0]]=y-'A';
}
void SCAN()
{
     scanf("%s",A);
     use[A[0]-'A']=true;
     a=A;b=B;
     while (scanf("%s",b)!=EOF)
     {
           if (b[0]=='#')break;
           int la=strlen(a),lb=strlen(b);
           for (int i=0;i<min(la,lb);i++)
           {
               if (a[i]==b[i])continue;
               LINK(a[i],b[i]);

               break;
           }
           swap(a,b);
     }
}


void topologicalUtil(int k)
{
    visited[k]=1;
    for(int i=0;i<L[k].size();i++)
    {
        if(visited[L[k][i]]==0)
        {
            topologicalUtil(L[k][i]);
        }
    }
    stk.push(k);
}

void TOPOLOGICAL_SORT()
{

    for(int i=0;i<100;i++) visited[i]=0;
    for(int i=1;i<=n;i++)
    {
        if(visited[i]==0)
        {
            topologicalUtil(i);
        }
    }
    while(stk.empty()==false)
    {
        cout<<stk.top()<<" ";
        stk.pop();
    }
    cout<<endl;

}
int main()
{
    INITIAL();
    SCAN();
    TOPOLOGICAL_SORT();
    for (int i=0;i<amm;i++)
    {
        printf("%c",TS[i]+'A');
    }
    puts("");
    //system ("pause");
    return 0;
}
