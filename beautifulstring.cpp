#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
string a;
while(t--){
    cin>>a;
    fflush(stdin);
    int f=0;
    for(int i=0,j=i+1;i<a.size(); ){

        if(a[i]=='a'&&a[j]=='a'){
            f=1;
            break;

        }
        else if(a[i]=='b'&&a[j]=='b'){

            f=1;
            break;
        }
        else if(a[i]=='c'&&a[j]=='c'){

            f=1;
            break;
        }
        else{


            i=j;
            j=i+1;
        }


    }
    if(f==1){
        cout<<"-1"<<endl;
    }
    else{
        for(int i=1, j=i-1,k=i+1;i<a.size(); ){
            if(a[j]=='a'&&a[i]=='?'&&a[k]!='a'){

                a[i]='a';
                i=k;
                j=i-1;
                k=i+1;

            }
            else if(a[j]=='b'&&a[i]=='?'&&a[k]!='b'){
                a[i]='b';
                i=k;
                j=i-1;
                k=i+1;
            }
            else if(a[j]=='c'&&a[i]=='?'&&a[k]!='c'){

                a[i]='c';
            }
            else{


                i=k;
                j=i-1;
                k=i+1;
            }




        }
        cout<<a<<endl;



    }





}











}
