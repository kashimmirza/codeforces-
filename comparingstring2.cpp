#include<bits/stdc++.h>
using namespace std;
int main(){


string str_inp1 = "Hello,World!";
string str_inp2;
cin>>str_inp2;



int res = str_inp1.compare(str_inp2);
if(res==0){
    cout<<"AC"<<endl;
}
else
    cout<<"WA"<<endl;

}
