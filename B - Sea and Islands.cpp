# include <iostream>
# include <cstdio>
# include <cstring>
using namespace std;
# define si(x) scanf("%d",&(x));
string s[100];
int main()
{
	//freopen("in","r",stdin);
	//freopen("out","w",stdout);
	int n,k;
	si(n);si(k);
	for(int i=0;i<n;i++)
	{
		string st="";
		for(int j=0;j<n;j++)
		{
			st+='S';
		}
		s[i]=st;
	}
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n && k>0;j++)
		{
			if((i+j)%2!=0)continue;
			s[i][j]='L';
			k--;
		}
	}
	if(k>0)
	{
		cout<<"NO"<<endl;
		return 0;
	}
	cout<<"YES"<<endl;
	for(int i=0;i<n;i++)
	{
		cout<<s[i]<<endl;
	}
	return 0;

}
