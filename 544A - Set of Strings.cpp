# include <iostream>
# include <cstdio>
# include <cstring>
using namespace std;
bool chack[356],mark[101];
int c=0,done=0;
int main()
{
    #ifndef ONLINE_JUDGE
    freopen("in","r",stdin);
    #endif // ONLINE_JUDGE
    memset(chack,false,sizeof chack);
    memset(mark,false,sizeof mark);
    int n;
    string s;
    cin>>n>>s;
    for(int i=0;i<s.size();i++)
    {
        if(chack[s[i]]==false)
        {
            chack[s[i]]=true;
            mark[i]=true;
            c++;
        }
    }
    if(c<n)
    {
        cout<<"NO";
        return 0;
    }
    cout<<"YES";
    for(int i=0;i<s.size();i++)
    {
        if(mark[i]and done<n)
        {
            cout<<"\n";
            done++;
        }
        cout<<s[i];
    }
    return 0;
}
