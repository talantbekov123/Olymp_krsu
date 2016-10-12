#include <bits/stdc++.h>
using namespace std;
int main()
{
	long long a[10] = {};
	int n = 9;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	vector<int> res;
	for(int i = 0;i < 3; i++)
	{
		for(int j = 3; j < 6; j++)
		{
			for(int k = 7; k < 9; k++)
			{
				if(a[i] == a[j] and (a[i] == a[k] or a[6] == a[i] * a[i]))
					res.push_back(a[i]);
			}
		}
	}

	sort(res.begin(),res.end());

	if(res.size() == 0)
	{
		cout<<0<<endl;
	}
	else
	{
		for (int i = 0; i < res.size() - 1; ++i)
		{
			cout<<res[i]<<" ";
		}
		cout<<res[res.size() - 1]<<endl;
	}
}