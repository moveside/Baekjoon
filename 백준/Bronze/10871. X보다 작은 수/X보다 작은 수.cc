#include<bits/stdc++.h>
using namespace std;




int main()
{
	int a[10000];
	int n, x;
	cin >> n >> x;
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
		if (a[i] < x) cout << a[i] << " ";
	}
	return 0;
}