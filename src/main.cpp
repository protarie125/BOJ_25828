#include <iostream>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	int g, p, t;
	cin >> g >> p >> t;

	const auto& indi = g * p;
	const auto& meth = g + t * p;

	if (indi < meth) {
		cout << 1;
	}
	else if (meth < indi) {
		cout << 2;
	}
	else {
		cout << 0;
	}

	return 0;
}