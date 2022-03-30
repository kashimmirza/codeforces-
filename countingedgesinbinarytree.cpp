// C++ implementation of the approach
#include <bits/stdc++.h>
using namespace std;

// Function to return the count
// of edges in an n-level
// perfect binary tree
int cntEdges(int n)
{
	int edges = pow(2, n) - 2;
	return edges;
}

// Driver code
int main()
{
	int n;
	cin>>n;
	int a, b;
	for(int i =1;i<=n;i++){

        cin>>a>>b;


	cout << cntEdges(a);
	}

	return 0;
}
