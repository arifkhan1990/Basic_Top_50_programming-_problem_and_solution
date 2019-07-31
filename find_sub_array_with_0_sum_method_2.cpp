#include<bits/stdc++.h>
using namespace std;


void findSubArray(int ar[], int n)
{
	// create an empty multi-map to store ending index of all
	// sub-arrays having same sum
	unordered_multimap<int, int> mp;

	// insert (0, -1) pair into the map to handle the case when
	// sub-array with 0 sum starts from index 0
	mp.insert(pair<int, int>(0, -1));

	int sum = 0;
    cout << "Find Sub Array are : " << endl;
	for (int i = 0; i < n; i++)
	{
		// sum of elements so far
		sum += ar[i];
		// if sum is seen before, there exists at-least one
		// sub-array with 0 sum
		if (mp.find(sum) != mp.end())
		{
			auto it = mp.find(sum);
			// find all sub-arrays with same sum
			while (it != mp.end() && it->first == sum)
			{
				int b = 0;
				for(int j = it->second + 1;  j <= i; j++){
					cout << ar[j] << " ";
					b = 1;
				}
				it++;
				if(b) cout << endl;
			}
		}
		// insert (sum so far, current index) pair into multi-map
		mp.insert(pair<int, int>(sum, i));
	}
}
int main()
{
    int m;
    int arr[] = { 3, 4, -7, 3, 1, 3, 1, -4, -2, -2 };
	int n = sizeof(arr)/sizeof(arr[0]);

	findSubArray(arr, n);
    return 0;
}

