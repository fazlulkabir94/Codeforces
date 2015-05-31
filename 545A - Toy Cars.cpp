# include <iostream>
# include <cstdio>
# include <vector>
# include <cstring>
using namespace std;
# define rep(i,n)for(int (i)=1;i<=(n);i++)
# define si(x) scanf("%d",&(x))
int a[105];
int main()
{
	//freopen("in","r",stdin);
	memset(a,0,sizeof(a));
	vector<int>v;
	int n,x;
	si(n);
	rep(i,n)
	rep(j,n)
	{
		si(x);
		if(i==j)continue;
		if(x==1)a[i]=1;
		if(x==2)a[j]=1;
		if(x==3)a[i]=1,a[j]=1;
	}
	rep(i,n)
		if(a[i]==0)
			v.push_back(i);
	cout<<v.size()<<endl;
	for(int i=0;i<(int)v.size();i++)
	{
		if(i>0)cout<<" ";
		cout<<v[i];
	}
	cout<<endl;
	return 0;
}
