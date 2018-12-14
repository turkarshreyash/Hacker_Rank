#include <iostream>
#include<vector>

using namespace std;



// Complete the rotLeft function below.
vector<int> rotLeft(vector<int> a, int d) {
	/*using std::rotate
	std::rotate(a.begin(),a.begin()+d,a.end());
	return a;
	*/

	//Without using it.
	vector<int> b;
	vector<int>::iterator itr;
	for (itr = a.begin() + d; itr != a.end(); itr++) {
		b.push_back(*itr);
	}
	for (itr = a.begin(); itr < a.begin() + d; itr++) {
		b.push_back(*itr);
	}
	return b;

}

int main()
{


	vector<int> a;
	int n,tmp;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> tmp;
		a.push_back(tmp);
	}
	int d;
	cin >> d;

	vector<int> result = rotLeft(a, d);

	for (int i = 0; i < n; i++) {
		cout << result[i]<<" ";
	}
	system("pause");
}

