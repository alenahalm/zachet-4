#include <iostream>
#include <sstream>
#include <limits.h>

using namespace std;

int main()
{
	string str = "";
	int k;
	cout << "Enter k" << endl;
	cin >> k;
	while (!(INT_MAX / k >= k && INT_MAX / pow(k, 2) >= k)) {
		cout << "Number is too big. Enter another." << endl;
		cin >> k;
	}
	int len = 0;
	for (int i = 1; len <= k; i++) {
		str += to_string(i * i * i);
		len += (int)log10(i * i * i) + 1;
		if (str.length() > 30) {
			str.erase(0, 5);
		}
	}
	cout << "Digit = " << str[str.length() - 1 - (len - k)] << endl;
}