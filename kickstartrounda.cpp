#include <bits/stdc++.h>
using namespace std;
 int main()
{
    // Define an unordered_map
    int test;
    cin>>test;
    for(int q=1;q<=test;q++){
    string str, str1;
    cin>>str;
    cin>>str1;
    unordered_map<char, int> M;
    unordered_map<char,int>M1;


    // Traverse string str check if
    // current character is present
    // or not
    for (int i = 0; str[i]; i++)
    {
        // If the current characters
        // is not found then insert
        // current characters with
        // frequency 1
        if (M.find(str[i]) == M.end())
        {
            M.insert(make_pair(str[i], 1));
        }

        // Else update the frequency
        else
        {
            M[str[i]]++;
        }

    }
    for (int i = 0; str1[i]; i++)
    {
        // If the current characters
        // is not found then insert
        // current characters with
        // frequency 1
        if (M1.find(str[i]) == M1.end())
        {
            M1.insert(make_pair(str1[i], 1));
        }

        // Else update the frequency
        else
        {
            M1[str[i]]++;
        }

    }


    // Traverse the map to print the
    // frequency

    int ans=0;
    int flag=0;
    for(int i=0, j=0;i<M.size();i++, j++){
        if(M[i]==M1[j]){
                cout<<M[i]<<" "<<M1[i]<<endl;
            continue;


        }
        else if(M1[j]>M[i]){

            ans =  ans + (M1[j]-M[i]);
        }
        else if(M[i]>M1[j]){
            flag=1;
        }


    }
    if( flag ==1){
    cout<<"Case #"<<q<<": "<<"IMPOSSIBLE"<<endl;
}
else {
        cout<<"Case #"<<q<<": "<<ans<<endl;
}



}
}

