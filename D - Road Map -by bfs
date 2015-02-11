# include <iostream>
# include <cstdio>
# include <vector>
# include <cstring>
# include <queue>
# define MAXEN 50010
using namespace std;
vector<int>edge[MAXEN];
int ans[MAXEN];
bool visited[MAXEN];
void dfs(int n)
{
    queue<int>q;
    q.push(n);
    visited[n]=true;
    while(!q.empty())
    {
        int u=q.front();q.pop();
        for(int i=0;i<edge[u].size();i++)
        {
            int v=edge[u][i];
            if(!visited[v])
            {
                ans[v]=u;
                visited[v]=true;
                q.push(v);
            }
        }
    }
}
int main()
{
    freopen("in.text","r",stdin);
    memset(visited,false,sizeof visited);
    int n,r1,r2;
    cin>>n>>r1>>r2;
    for(int i=1;i<=n;i++)
    {
        if(i==r1)continue;
        int a;
        cin>>a;
        edge[i].push_back(a);
        edge[a].push_back(i);
    }
    dfs(r2);
    for(int i=1;i<=n;i++)
    {
        if(i==r2)continue;
        cout<<ans[i]<<" ";
    }
    return 0;
}
