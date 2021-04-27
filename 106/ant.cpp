#include <iostream>
#include <vector>

using namespace std;

int main(int argc, char const *argv[])
{
	int L, n;
	std::cin >> L >> n;

	std::vector<int> x(n);
	for (size_t i = 0; i < n; i++)
	{
		std::cin >> x[i];
	}

	// 端につくまでの最小の時間
	int min_second = 0;
	// 端につくまでの最大の時間
	int max_second = 0;
	for (size_t i = 0; i < x.size(); i++)
	{
		min_second = max(min_second, min(x[i], L - x[i]));
		max_second = max(max_second, max(x[i], L - x[i]));
	}

	std::cout << min_second << " " << max_second << endl;

	return 0;
}
