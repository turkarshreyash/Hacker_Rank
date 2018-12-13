#include <iostream>
#include<vector>

using namespace std;
// Complete the jumpingOnClouds function below.
int jumpingOnClouds(vector<int> c) {
	int count = -1;
	int n = c.size();
	for (int i = 0; i < n;count++) {
		if (((i + 2) < n)&&c[i + 2] == 0) {
			i = i + 2;
		}
		else {
			i = i + 1;
		}
	}

	return count;
}

int main()
{
	int n,tm;
	cin >> n;
	vector<int>arr;
	for (int i = 0; i < n; i++) {
		cin >> tm;
		arr.push_back(tm);
	}
	cout << jumpingOnClouds(arr);
	system("pause");
}