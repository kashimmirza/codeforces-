
#include<bits/stdc++.h>
using namespace std;
int main(){







char s[]="abcd";

int l=strlen(s);
for(int i=1;i<=l;i++){
    for(int j=0;j<=l;j++){

        int m=i+j-1;
        for(int q=j;q<=m;q++){
            cout<<s[q];
        }
        cout<<endl;


    }


}





}
