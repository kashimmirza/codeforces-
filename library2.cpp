#include <iostream>
#include <iomanip>
using namespace std;

int main() {
	int T; cin >> T;
	cout << setiosflags(ios::uppercase);
	cout << setw(0xf) << internal;
	while(T--) {
		double A; cin >> A;
		double B; cin >> B;
		double C; cin >> C;






ios_base::fmtflags flags = cout.flags();
cout << setw(0) << "0x" << hex << uppercase << left << (long long)A << endl;
cout.flags(flags);
cout << fixed << setw(15) << setprecision(2) << setfill('_') <<" "<< right << showpos << B << endl;
cout.flags(flags);
cout << scientific << uppercase <<  noshowbase <<setprecision(9)  << C << endl;



	}
	return 0;

}
