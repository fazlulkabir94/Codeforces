# include <iostream>
# include <cstdio>
# include <cstring>
# include <vector>
# include <queue>
using namespace std;
# define si(x) scanf("%d",&(x))
# define MAX 5005
vector<int>edge[MAX];
int d[MAX][MAX];
void AddEdge(int a,int b)
{
	edge[a].push_back(b);
	edge[b].push_back(a);
}
int main()
{
    #ifndef ONLINE_JUDGE
    freopen("in","r",stdin);
    #endif // ONLINE_JUDGE
memset(d, -1, sizeof d);
  int n, m;
  si(n);si(m);
  for(int i=0;i<m;i++) {
    int a, b;
    si(a);si(b);
    a--, b--;
    AddEdge(a,b);
  }
	//input is end

  for(int i = 0; i < n; i++) {
    queue < int > q;
    q.push(i);
    d[i][i] = 0;
    while (!q.empty()) {
      int s = q.front();
      q.pop();
      for(int j=0;j<int(edge[s].size()); j++) {
        int to=edge[s][j];
        if (d[i][to]==-1) {
          d[i][to]=d[i][s]+1;
          q.push(to);
        }
      }
    }
  }

	//si,ti,li and si+1,ti+1,li+1

        int s[2], t[2], l[2];
  scanf("%d %d %d", &s[0], &t[0], &l[0]);
  scanf("%d %d %d", &s[1], &t[1], &l[1]);
  s[0]--, t[0]--, s[1]--, t[1]--;
         int ans = m + 1;
  for(int k=0;k<2;k++){
    swap(s[0], t[0]);
    for(int i = 0; i < n; i++) {
      for(int j = 0; j < n; j++) {
        int v[] = {d[s[0]][i] + d[i][j] + d[j][t[0]], d[s[1]][i] + d[i][j] + d[j][t[1]]};
        if (v[0] <= l[0] && v[1] <= l[1]) {
          ans = min(ans, v[0] + v[1] - d[i][j]);
        }
      }
    }
  }

  if (d[s[0]][t[0]] <= l[0] && d[s[1]][t[1]] <= l[1]) {
    ans = min(ans, d[s[0]][t[0]] + d[s[1]][t[1]]);
  }

  if (ans > m) {
    ans = -1;
  } else {
    ans = m - ans;
  }

  printf("%d\n", ans);
}
