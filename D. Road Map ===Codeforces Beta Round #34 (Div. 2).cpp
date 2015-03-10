# include <iostream>
# include <cstdio>
# include <vector>
# include <cstring>
# define MAXEN 50010
using namespace std;
vector<int>edge[MAXEN];
int ans[MAXEN];
bool visited[MAXEN];
void dfs(int n)
{
    visited[n]=true;
    for(int i=0;i<edge[n].size();i++)
    {
        int v=edge[n][i];
        if(!visited[v])
        {
            visited[v]=true;
            ans[v]=n;
            dfs(v);
        }
    }
}
int main()
{
    //freopen("in.text","r",stdin);
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
