#include <iostream>
#include <string>
using namespace std;
// Complete the repeatedString function below.
long repeatedString(string s, long n) {
	long l = s.length();
	long full_a = 0;
	long rem_a = 0;
	long full = n / l;
	long rem = (n % l);
	for (long i = 0; i < l; i++) {
		if (i < rem && s[i]=='a') {
			rem_a++;
		}
		if (s[i] == 'a') {
			full_a++;
		}
	}
	return (full_a*full) + (rem_a);
}

int main()
{

	string s;
	cin >> s;

	long n;
	cin >> n;

	cout<<repeatedString(s, n);

	system("pause");
}
