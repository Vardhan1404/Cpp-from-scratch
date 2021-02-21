// C++ program to find given two array
// are equal or not
#include <bits/stdc++.h>
using namespace std;
bool equal(int arr1[], int arr2[], int n, int m)
{
	if (n != m)
		return false;

	sort(arr1, arr1 + n);
	sort(arr2, arr2 + m);

	for (int i = 0; i < n; i++)
		if (arr1[i] != arr2[i])
			return false;

	return true;
}

int main()
{
	int arr1[] = { 6, 3, 9, 0, 3 };
	int arr2[] = { 9, 3, 3, 8, 0 };
	int n = sizeof(arr1) / sizeof(int);
	int m = sizeof(arr2) / sizeof(int);

	if (equal(arr1, arr2, n, m))
		cout << "Yes";
	else
		cout << "No";
	return 0;
}
