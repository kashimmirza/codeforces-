#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
while(t--){
    string s;
    string b;
    cin>>s;
    cin>>b;
    int i=0;
    int j=0;
    int k=0;
    int index[51];
    while(j!=(b.size())){
        if(b[j]==s[i]){


            index[k]=i+1;
            k++;
            j++;
            i=0;
        }
        else
            i++;



    }



int sum=0;
for(int i=0;i<k-1;i++){
        sum+=abs(index[i]-index[i+1]);

}
cout<<sum<<endl;
}





}
