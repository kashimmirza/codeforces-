#include <iostream>
#include <string>
using namespace std;
long long N;
int main(){

    cin >> N;
    long long i;
    for(i = 1; ; i++) if(stoll(to_string(i) + to_string(i)) > N){
        cout << i - 1 << endl;
        return 0;
    }
}
