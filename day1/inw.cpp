#include <iostream>
#include <queue>
#include <string>
#include <algorithm>
#include <vector>
#include <cmath>
#include <iomanip>
#include <map>
#include <cstring>
#include <set>
#include <stack>
#include <bitset>
#define ll long long
#define INF (1e9)
#define MAX (int) (2e6 + 5)
#define MOD 1000000007
#define par pair<int, int>
#define all(v) v.begin(), v.end()
#define sz(x) (int) ((x).size())
#define esq(x) (x<<1)
#define dir(x) ((x<<1)|1)
#define lsb(x) (x & -x)
#define W(x) cout << #x << ": " << x << endl
#define Wii(x) cout << x.first << ' ' << x.second << endl
#define _ ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

using namespace std;

ll n, arr[MAX], k, resp, dp[MAX][2];

int main()
{_
	cin >> n;
	for (int i = 0; i < n; i++) cin >> arr[i];

	for (int i = n-1; i >= 0; i--)
	{
		dp[i][0] = max(dp[i+1][0], dp[i+1][1]);
		dp[i][1] = dp[i+1][0] + arr[i];
	}

	cout << max(dp[0][0], dp[0][1]) << endl;
}