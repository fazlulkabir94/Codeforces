# include <iostream>
# include <cstdio>
# include <vector>
using namespace std;
# define rep(i,n)for(int (i)=1;i<=(n);i++)
# define si(x) scanf("%d",&(x))
int main()
{
	//freopen("in","r",stdin);
	int n,x,car[1000];
	si(n);
	vector<int>v;
	rep(i,n)
	rep(j,n)
	{
		si(x);
		if(x==1 || x==3)car[i]=1;
		if(x==2 || x==3)car[j]=1;
	}
	rep(i,n)
	{
		if(!car[i])
			v.push_back(i);
	}
	cout<<v.size()<<endl;
	for(int i=0;i<(int)v.size();i++)
	{
		if(i>0)cout<<" ";
		cout<<v[i];
	}
	cout<<endl;
	return 0;
}
