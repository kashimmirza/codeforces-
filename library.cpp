#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
while(t--){
float A,B,C;
cin>>A>>B>>C;



ios_base::fmtflags flags = cout.flags();
cout << setw(0) << "0x" << hex << uppercase << left << (long long)A << endl;
cout.flags(flags);
cout << fixed << setw(15) << setprecision(2) << setfill('_') << right << showpos << B << endl;
cout.flags(flags);
cout << scientific << uppercase <<  noshowbase <<setprecision(9)  << C << endl;

cout.flags(flags);
}
}
