# include <iostream>
# include <cstdio>
using namespace std;
int main()
{
    //freopen("in","r",stdin);
	string s;
	int k;
	cin>>s;
	cin>>k;
	if(s.length()%k!=0 or k>s.length())
    {
        printf("NO\n");
        return 0;
    }
    int n=s.length()/k;
    bool flag=true;
    for(int i=0;i<s.length();i+=n)
    	for(int j=0;j<=n/2;++j)
    		if(s[i+j]!=s[i+n-j-1])
    			flag=false;
    if(flag)
    	printf("YES\n");
    else
    	printf("NO\n");
    return 0;
}
