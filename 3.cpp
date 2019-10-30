#include<stdc++.h>
using namespace std;
int main()
{
	int n,d,m,sum,c=0;
	cin>>n>>d;
	int s[n],a[n];
	for(int i=0;i<n;i++)
	{
	cin>>s[i];
	a[i]=s[i];
	}
		for(int i=0;i<n;i++)
		{
		sum=0;
			for(int j=0;j<i;j++)
			{
			sum=s[j]+a[i];
			if(sum==d|| sum%d==0)
			c++;
		}
		}
		cout<<c;
	}
