#include <iostream>
using namespace std;
class gcd {
private:
	int x, y;
	int Remainder;
	int value;
public:
	gcd(int a, int b);
	int Euclid();
};
gcd::gcd(int a, int b) {
	if (a >= b) { x = a; y = b; }
	else if (a < b) { x = b; y = a; }
}
int gcd::Euclid() {
	do {
		Remainder = x % y;
		value = x / y;
		x = y;
		y = Remainder;
	} while (Remainder != 0);
	return x;
}
class lcm {
private:
	int x, y;
	int G_value;
public:
	lcm(int a, int b, int gcd);
	int lcm_result();
};
lcm::lcm(int a,int b, int gcd):x(a), y(b),G_value(gcd){
	lcm_result();
}
int lcm::lcm_result() {
	cout <<	 (x * y) / G_value;
	return (x * y) / G_value;
}
int main() {
	int x, y;
	cin >> x >> y;
	gcd gcd(x, y);
	int gcd_value = gcd.Euclid();
	cout << gcd_value <<endl;
	lcm lcm(x, y, gcd_value);
}