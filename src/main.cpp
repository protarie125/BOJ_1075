#include <iostream>
#include <iomanip>

using namespace std;

using ll = long long;

int main() {
	ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	ll n, f;
	cin >> n >> f;

	const auto& r = n % f;
	auto m = n % 100;

	while (f <= m + r) {
		m -= f;
	}

	auto ans = m + f - r;
	if (ans < 0) {
		ans += f;
	}

	while (f <= ans) {
		ans -= f;
	}

	cout << setfill('0') << setw(2) << ans;

	return 0;
}