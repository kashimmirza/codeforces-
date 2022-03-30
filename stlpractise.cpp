#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n;
    cin>>n;
    vector<int>a;
    for(int i=0;i<n; i++){
        int x;
        cin>>x;
        a.push_back(x);

    }
    int q;
    cin>>q;
    int index=-1;
    while(q--){
        int x;
        cin>>x;
        fflush(stdin);
        int index=-1;


            vector<int>::iterator low =lower_bound(a.begin(), a.end(),x);

        if(a[low -a.begin()]==x){

            index=low-a.begin()+1;
            cout<< "Yes " << (low-a.begin()+1) <<endl;
        }

    else if(index==-1){



        low=lower_bound(a.begin(),a.end(),x);
        cout<<"NO "<<low-a.begin()<<endl;
    }



    }
    return 0;
}
