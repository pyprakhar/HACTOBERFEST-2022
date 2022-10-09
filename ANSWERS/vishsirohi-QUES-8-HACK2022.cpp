#include <bits/stdc++.h>
using namespace std;

int getInvCount(int arr[], int N)
{
	int invcount = 0;
	for (int i = 0; i < N - 1; i++)
		for (int j = i + 1; j < N; j++)
			if (arr[i] > arr[j])
				invcount++;

	return invcount;
}
int main()
{
	int arr[] = { 2, 4, 1, 3, 5 };
	int N = 5;
	cout << getInvCount(arr, N);
	return 0;
}
