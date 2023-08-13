// Given a Roman numeral, the task is to find its corresponding decimal value.

#include <bits/stdc++.h>
using namespace std;

int romanToDecimal(string s)
{
	
	int ans = 0, i;
	for (i = 0; i < s.size() - 1; i++) {
		if (s[i] == 'I' && s[i + 1] == 'V') {
			ans += 4;
			i++;
			continue;
		}
		else if (s[i] == 'I' && s[i + 1] == 'X') {
			ans += 9;
			i++;
			continue;
		}
		else if (s[i] == 'X' && s[i + 1] == 'L') {
			ans += 40;
			i++;
			continue;
		}
		else if (s[i] == 'X' && s[i + 1] == 'C') {
			ans += 90;
			i++;
			continue;
		}
		else if (s[i] == 'C' && s[i + 1] == 'D') {
			ans += 400;
			i++;
			continue;
		}
		else if (s[i] == 'C' && s[i + 1] == 'M') {
			ans += 900;
			i++;
			continue;
		}
		
		else if (s[i] == 'I')
			ans += 1;
		else if (s[i] == 'V')
			ans += 5;
		else if (s[i] == 'X')
			ans += 10;
		else if (s[i] == 'L')
			ans += 50;
		else if (s[i] == 'C')
			ans += 100;
		else if (s[i] == 'D')
			ans += 500;
		else if (s[i] == 'M')
			ans += 1000;
	}
	
	if (s.size() > i) {
		if (s[i] == 'I')
			ans += 1;
		else if (s[i] == 'V')
			ans += 5;
		else if (s[i] == 'X')
			ans += 10;
		else if (s[i] == 'L')
			ans += 50;
		else if (s[i] == 'C')
			ans += 100;
		else if (s[i] == 'D')
			ans += 500;
		else if (s[i] == 'M')
			ans += 1000;
	}

	return ans;
}

int main()
{

	string str = "LXXX";
	cout << "Integer form of Roman Numeral is "
		<< romanToDecimal(str) << endl;

	return 0;
}
