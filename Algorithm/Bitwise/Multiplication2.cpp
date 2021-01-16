//calculate (a * b) mod p
//O(1)
//a * b mod p = a * b - [a*b/p] * p, []为下取整
#include <iostream>

typedef unsigned long long ull;
ull mul(ull a, ull b, ull p) {
	a %= p, b %= p; //a,b在 0~c 之间，此行不必要
	ull c = (long double)a * b / p; //保存整数部分精确值
	ull x = a * b, y = c * p;
	long long ans = (long long)(x % p) - (long long)(y % p);
	if (ans < 0) ans += p;
	return ans;
}

int main() {
	int a,b,c,result;
	std::cin >> a >> b >> c;
	result = mul(a,b,c);
	std::cout << a << "*" << b <<" "<<"mod" <<" "<<c<<" "<<"="<< " " <<result;
	return 0;
}