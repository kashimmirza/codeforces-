#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
    int   a, b,c;
    cin>>a>>b>>c;
    int a1=a, b1=b,c1=c;


    if (a==b&&a==c){

        a=a-a+1;
        b=b-b+1;
        c=c-c+1;
    }
    else if(a>b&&a>c){

        a=a-a;
        b=a1-b+1;
        c=a1-c+1;
    }

    else if(b>a&&b>c){
        b=b-b;
        a=b1-a+1;
        c=b1-c+1;
    }
    else if(c>a&&c>b){

        c=c-c;
        a=c1-a+1;
        b=c1-b+1;
    }
    else if(a==b&&c<a){
        a=a-a+1;
        b=b-b+1;
        c=a1-c+1;
    }
    else if(a==c&&b<a){

        a=a-a+1;
        c=c-c+1;
        b=a1-b+1;

    }
    else if(b==c&&a<b){

        b=b-b+1;
        c=c-c+1;
        a=b1-a+1;
    }
    /*else if(a==max_a&&b==max_a&&c<max_a){
            a=max_a-a+1;
            b=max_a-b+1;
            c=max_a-c+1;


    }
    else if(a==max_a&&c==max_a&&b<max_a){
            a=max_a-a+1;
            b=max_a-b+1;
            c=max_a-c+1;


    }
    if(a==max_a&&(a>b&&a>c)){
       a=max_a-max_a;
       b=max_a-b+1;
       c=max_a-c+1;


    }
    else if(b==max_a&&(b>a&&b>c)){

        b=max_a-max_a;
        a=max_a-a+1;
        c=max_a-c+1;
    }
    else if(c==max_a&&(c>a&&c>b)){

        c=max_a-max_a;
        a=max_a-a+1;
        b=max_a-b+1;
    }
    else {

    a=(max_a-a)+1;
    b= (max_a-b)+1;
    c=(max_a-c)+1;
    }*/
    cout<<a<<" "<<b<<"  "<<c<<endl;


    }








}



