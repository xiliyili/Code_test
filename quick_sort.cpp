#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
	//辅助交换函数
	void Swap(int &a, int &b)
	{
		int temp = a;
		a = b;
		b = temp;
	}

	int partition1(int a[], int p, int r)
	{
		int flag = a[r];
		int i = p - 1;
		
		for (int j = p; j < r; j++)
		{
			if (a[j] <= flag)
			{
				i = i + 1;
				Swap(a[i], a[j]);
			}
		}
		
		Swap(a[i + 1], a[r]);
		return (i + 1);
	}


	void quick_sort1(int a[], int p, int r)
	{
		int q;
		
		if (p < r)
		{
			q = partition1(a, p, r);
			quick_sort(a, p, q - 1);
			quick_sort(a, q, r);
		}
	}

	int partition2(int a[], int p, int r)
	{
		int key = a[p];

		while (p < r)
		{
			while (p < r && a[r] > key)
			{
				r--;
			}

			if (p < r)
			{
				a[p] = a[r];
			}

			while (p < r && a[p] < key)
			{
				p++;
			}

			if (p < r)
			{
				a[r] = a[p];
			}
		}

		a[r] = key;
		return r;
	}
	void quick_sort2(int a[], int p, int r)
	{
		int middle;

		if (p < r)
		{
			middle = partition2(a, p, r);
			quick_sort2(a, p, middle - 1);
			quick_sort2(a, middle + 1, r);
		}
	}
};

int main()
{
	Solution s;
	s.cplus_solution();
	return 0;
}
