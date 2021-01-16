//calculate (a * b) mod c
//O(log2(n))
#include <iostream>

long long mul(long long a, long long b, long long c) {
	long long ans = 0;
	for (; b; b >>= 1) {
		if (b & 1) ans = (ans + a) % c;
		a = a * 2 % c; //(A+B) mod b=(A mod b+B mod b) mod b
	}
	return ans;
}

int main() {
	int a,b,c,result;
	std::cin >> a >> b >> c;
	result = mul(a,b,c);
	std::cout << a << "*" << b <<" "<<"mod" <<" "<<c<<" "<<"="<< " " <<result;
	return 0;
}