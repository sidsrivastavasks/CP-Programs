#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
	ll t;
	cin >> t;
	while (t--)
	{
		ll n;
		cin >> n;
		string k;
		cin >> k; ll p = 1;
		vector<ll> v(n + 1);
		int cnt = 0;
		for (int i = 1; i <= n; i++) {
			v[i] = k[i - 1] - '0';
			cnt++;
		}
		for (int i = 1; i <= n; i++)
		{
			if (cnt == 1) {
				break;
			}
			if (i % 2 != 0)
			{
				int flag = 0;
				for (int j = 1; j <= n; j++)
				{
					if (j % 2 != 0 && v[j] % 2 == 0 && v[j] != -1)
					{
						v[j] = -1;
						flag = 1;
						break;
					}
				}
				if (flag == 0)
				{
					for (int j = 1; j <= n; j++)
					{
						if (j % 2 != 0 && v[j] != -1)
						{
							v[j] = -1;
							break;

						}
					}
				}
			}

			else
			{
				int flag = 0;
				for (int j = 1; j <= n; j++)
				{
					if (j % 2 == 0 && v[j] % 2 != 0 && v[j] != -1)
					{
						v[j] = -1;
						flag = 1;
						break;
					}
				}
				if (flag == 0)
				{
					for (int j = 1; j <= n; j++)
					{
						if (j % 2 == 0 && v[j] != -1)
						{
							v[j] = -1;
							break;

						}
					}
				}
			}
			cnt--;
		}
		for (int i = 1; i <= n; i++)
		{
			if (v[i] != -1)
			{
				if (v[i] % 2 == 0)
				{
					cout << "2" << endl;
				}
				else
				{
					cout << "1" << endl;
				}
				break;
			}
		}
	}
	return 0;
}