#include <iostream>
#include <vector>

using namespace std;

// 深さ優先探索
bool dfs(int i, vector<int> a, int k, int sum)
{
	if (i == a.size())
	{
		return sum == k
	}

	// a[i]を使わない場合
	if (dfs(i + 1, a, k, sum))
	{
		return true;
	}

	if (dfs(i + 1, a, k, sum + a[i]))
	{
		return true;
	}

	return false;
}

int main(int argc, char const *argv[])
{
	int n, k;
	cin >> n;
	vector<int> a(n);
	for (size_t i = 0; i < a.size(); i++)
	{
		cin >> a[i];
	}
	cin >> k;

	if (dfs(0, a, k, 0))
	{
		std::cout << "Yes" << endl;
		return 0;
	}
	std::cout << "No" << endl;

	return 0;
}
