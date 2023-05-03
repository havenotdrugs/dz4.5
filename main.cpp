#include <iostream>
using namespace std;

double min(double one, double two, double three);

int main() {
	double one, two, three;
	cin >> one >> two >> three;
	cout << min(one, two, three);
}

double min(double one, double two, double three) {
	return min(min(one, two), three);
}
