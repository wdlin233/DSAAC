//calculate (a ^ b) mod c
//O(log2(n))
#include <iostream>

int power(int a, int b, int c) {
	int ans = 1 % c;
	for (; b; b >>= 1 ) {
		if (b & 1) ans = (long long)ans * a % c; //遍历每一位
		a = (long long)a * a % c; //(A×B) mod b=((A mod b)×(B mod b)) mod b
	}
	return ans;
}

int main() {
	int a,b,c,result;
	std::cin >> a >> b >> c;
	result = power(a,b,c);
	std::cout << a << "^" << b <<" "<<"mod" <<" "<<c<<" "<<"="<< " " <<result;
	return 0;
}