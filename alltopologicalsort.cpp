#include <cstdio>
#include <cstring>
#include <cctype>
#include <map>

using namespace std;

const int N = 220;
const int M = 30;

char buf[N];
bool vis[N];
int t, n;
int g[M][M];
map<char, int> chMap;
map<int, char> intMap;
char ans[M];
int p[N], r[N];

void input();
void toposort(int dep);
bool isCycle();
int find(int x);
bool Union(int u, int v);
void solve();

int main()
{
#ifndef ONLINE_JUDGE
    freopen("D:\\prcatisecontest\\uva.txt", "r", stdin);
#endif

    int cas;
    scanf("%d", &cas);
    gets(buf);

    while (cas--) {
        input();
        solve();
        if (cas) printf("\n");
    }
    return 0;
}

void input()
{
    gets(buf);
    gets(buf);
    chMap.clear();
    intMap.clear();

    for (int i = 0, len = strlen(buf); i < len; i++) {
        if (isalpha(buf[i])) {
            int size = chMap.size();
            chMap[buf[i]] = size;
            intMap[size] = buf[i];
        }
    }

    memset(g, 0x00, sizeof(g));
    gets(buf);
    for (int i = 0, len = strlen(buf); i < len; i += 4) {
        char tmp[4];
        sscanf(&buf[i], "%s", tmp);
        int u = chMap[tmp[0]], v = chMap[tmp[2]];
        g[u][v] = 1;
    }
    n = chMap.size();
}

int find(int x)
{
    int root = x;

    while (p[root] != root) {
        root = p[root];
    }

    while (p[x] != root) {
        int tmp = x;
        x = p[x];
        p[tmp] = root;
    }

    return root;
}

bool Union(int u, int v)
{
    int pu = find(u), pv = find(v);

    if (pu == pv) return false;

    if (r[pu] < r[pv]) p[pu] = pv;
    else {
        p[pv] = pu;
        if (r[pu] == r[pv]) r[pu]++;
    }

    return true;
}

bool isCycle()
{
    for (int i = 0; i < n; i++) {
        p[i] = i;
        r[i] = 0;
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (g[i][j]) {
                if (!Union(i, j)) return false;
            }
        }
    }

    return true;
}

void toposort(int dep)
{
    if (dep == n) {
        for (int i = 0; i < n; i++) {
            if (i) printf(" ");
            printf("%c", ans[i]);
        }
        printf("\n");
        return;
    }

    for (int i = 0; i < n; i++) {
        if (vis[i]) continue;

        int j;
        for (j = 0; j < n; j++) {
            if (j != i && !vis[j] && g[j][i]) break;
        }
        if (j >= n) {
            vis[i] = true;
            ans[dep] = intMap[i];
            toposort(dep + 1);
            vis[i] = false;
        }
    }
}

void solve()
{
    if (!isCycle()) {
        printf("NO\n");
        return;
    }

    memset(vis, false, sizeof(vis));
    toposort(0);
}
