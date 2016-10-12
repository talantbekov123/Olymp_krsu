#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n = 0;
	cin>>n;
	vector<long long> v(n+10,1);
	vector<bool> check(n+10,false);

	check[1] = true;
	long long sum = v[1];
	int res = 1;
	std::vector<int> result;
	result.push_back(1);
	for(int i=2;i<=n + 1;i++)
	{
		v[i]++;
		if(v[i] > sum)
		{
			res = i;
			result.push_back(i);
			check[i] = true;
			sum = v[i]; 
		}
		for(int j=1;;j++)
		{
			if(i + (j * i) > n)
				break;
			v[i + j * i]++;
		}
	}


	if(check[n] == true)
	{
		cout<<n<<" is a highly composite number"<<endl;
	}
	else
	{
		cout<<n<<" is not a highly composite number: the least counterexample is "<<res<<endl;
	}
}
