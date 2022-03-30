#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
while(t--){
    string a,b;
    cin>>a;
    cin>>b;
    //int p=(a-b)&1;
    //cout<<p<<endl;
    //char news[100001];

    int len1= a.size();
    int len2= b.size();
    //int p=(len1-len2)&1;
    //
    //cout<<p<<endl;
    if(len2>len1){
        cout<<"NO"<<endl;
        continue;
    }
    int k= (len1-len2)&1;
    int q=0;
    int p=0;
    for(int i=k;i<=len1;i++){
            if(p==1){
                p=0;
                continue;
            }

       else  if(a[i]==b[i]){
            q++;



        }
        else
            p++;
    }
    cout<<q<<endl;

    if(q==len2){

        cout<<"YES"<<endl;
    }
    else
        cout<<"NO"<<endl;
    //cout<<p<<endl;
    //news[p]='\0';
    //cout<<news<<endl;
    //int x=b.compare(news);

    //if(x==0){
        //c//out<<"YES"<<endl;
    //}
    //else{

        //cout<<"NO"<<endl;
    }




}








