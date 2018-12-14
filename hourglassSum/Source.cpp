#include <iostream>
#include<vector>
#include<fstream>
using namespace std;
int max(int a, int b) {
	if (a > b) {
		return a;
	}
	return b;
}
// Complete the hourglassSum function below.
int hourglassSum(vector<vector<int>> arr, long i = 0, long j = 0) {
	if (i == 4) {
		return -64;
	}
	int sum = -64;
	if (i + 2 <= 5 && j + 2 <= 5) {
		sum = arr[i][j] + arr[i][j + 1] + arr[i][j + 2]
			+ arr[i + 1][j + 1]
			+ arr[i + 2][j] + arr[i + 2][j + 1] + arr[i + 2][j + 2];
	}
	if (j == 5) {
		j = -1;
		i++;
	}
	int sum2 = hourglassSum(arr, i, j + 1);
	return max(sum, sum2);

}

int main()
{
	ofstream fout(getenv("OUTPUT_PATH"));

	vector<vector<int>> arr(6);
	for (int i = 0; i < 6; i++) {
		arr[i].resize(6);

		for (int j = 0; j < 6; j++) {
			cin >> arr[i][j];
		}

		cin.ignore(numeric_limits<streamsize>::max(), '\n');
	}

	int result = hourglassSum(arr);

	fout << result << "\n";

	fout.close();

	return 0;
}
