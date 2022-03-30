// C++ program for the above approach

#include <bits/stdc++.h>
using namespace std;

#define ROW 10
#define COL 10

// Direction vectors
int dRow[] = { -1, 1, 0, 0,-1,1,1,-1};
int dCol[] = { 0, 0, 1, -1,1,1,-1,-1 };

// Function to check if a cell
// is be visited or not
bool isValid(bool vis[][COL],
			int row, int col)
{
	// If cell lies out of bounds
	if (row < 0 || col < 0
		|| row >= ROW || col >= COL)
		return false;

	// If cell is already visited
	if (vis[row][col])
		return false;

	// Otherwise
	return true;
}

// Function to perform the BFS traversal
void BFS(int grid[][COL], bool vis[][COL],
		int row, int col)
{
	// Stores indices of the matrix cells
	queue<pair<int, int> > q;

	// Mark the starting cell as visited
	// and push it into the queue
	q.push({ row, col });
	vis[row][col] = true;
	int i=0;
	grid[row][col]=i;

	// Iterate while the queue
	// is not empty
	while (!q.empty()) {
            i++;


		pair<int, int> cell = q.front();
		int x = cell.first;
		int y = cell.second;
		grid[x][y]=i;

		cout << grid[x][y] << " ";

		q.pop();

		// Go to the adjacent cells
		for (int i = 0; i < grid[i].size(); i++) {

			int adjx = x + dRow[i];
			int adjy = y + dCol[i];

			if (isValid(vis, adjx, adjy)) {
				q.push({ adjx, adjy });
				vis[adjx][adjy] = true;
			}
		}
	}
}

// Driver Code
int main()
{
	// Given input matrix
	vector<int>grid(ROW)

	// Declare the visited array
	bool vis[ROW][COL];
	memset(vis, false, sizeof vis);

	BFS(grid, vis, 5, 5);

	return 0;
}

