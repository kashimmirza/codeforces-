#include<bits/stdc++.h>
using namespace std;



int countDistinct(string s)
{

    map<char, int> m;

    for (int i = 0; i < s.length(); i++) {
        m[s[i]]++;
    }

    return m.size();
}

int main(){


string s;
cin>>s;
int n= countDistinct(s);
if(n==3)
cout<<3*2<<endl;
else if(n==2)
cout<<2*2<<endl;
else
cout<<1<<endl;





}
