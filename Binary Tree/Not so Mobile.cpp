// UVa 839
#include <iostream>

bool solve(int& W) {
	int W1, D1, W2, D2;
	bool b1 = true, b2 = true;
	std::cin >> W1 >> D1 >> W2 >> D2;
	if (!W1) b1 = solve(W1);
	if (!W2) b2 = solve(W2);
	return b1 && b2 && (W1 * D1 == W2 * D2);
} 

int main(void) {
	int T,W;
	std::cin >> T;
	while (T--) {
		if(solve(W)) std::cout << "YES\n"; else std::cout << "NO\n";
		if (T) std::cout << "\n";
	}
	return 0;
}
