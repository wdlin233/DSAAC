//LuoGu P1080
#include <iostream>
#include <algorithm>

struct Minister {
	int left,right;
	bool operator < (const Minister &x) const {
		return std::max (x.right, left * right) < std:: (right, x.left * x.right)
	}
}node[1001];

int main() {
	int n;
	scanf("%d", &n);
	scanf("&d &d", &node[0].left, &node[0].right);
	for (int i = 1; i < n + 1; i++) {
		scanf("&d &d", &node[i].left, &node[i].right);
	}
	sort(node + 1,node + 1 + n);
	return 0;
}
