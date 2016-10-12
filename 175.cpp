#include <bits/stdc++.h>
using namespace std;
int f(int l,vector<int> &v)
{
	int sum = 0;
	for(int i=0;i<v.size();i++)
	{
		sum+=v[i]/l;
	}
	return sum;
}
int main()
{
	int n,k,m;
	int MIN,MAX = -1;
	cin>>n>>k>>m;
	vector<int> v(n);
	for(int i=0;i<n;i++)
	{
		cin>>v[i];
		if(MAX < v[i])
			MAX = v[i];
	}
	MIN = m;
	for(;;)
	{
		if(MIN + 1 == MAX)
		{
			break;
		}
		int res = MIN + (MAX - MIN)/2;
		int sum = f(res,v);
		if(sum < k)
			MAX = res;
		else
			MIN = res;
		
	}
	int res1 = f(MIN,v);
	int res2 = f(MAX,v);
	
	if(res2 == k and MAX >= m)
	{
		cout<<MAX<<endl;
	}
	else if(res1 == k and MIN >= m)
	{
		cout<<MIN<<endl;
	}
	else cout<<0<<endl;

	return 0;
}