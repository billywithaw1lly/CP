#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n,m,h;
	cin>>n>>m>>h;
	int a[m+1],b[n+1],c[n+1][m+1],d[n+1][m+1];
	for(int i=1;i<=m;i++)
		cin>>a[i];
	for(int i=1;i<=n;i++)
		cin>>b[i];
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=m;j++)
			cin>>c[i][j];
	}
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=m;j++)
		{
			if(c[i][j]==0)
				d[i][j]=0;
			else
			{
				int u=min(b[i],a[j]);
				d[i][j]=u;
			}
		}
	}
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=m;j++)
			cout<<d[i][j]<<" ";
		cout<<endl;
	}
}	