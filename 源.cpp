#include <iostream>
#define ture 1
#define false 0
void BinInsertSort(int A[], int n)
{
	int i, j, low, high, mid;
	int tmp;
	for (i = 0; i < n; i++)
	{
		if (A[i] < A[i - 1])
		{
			tmp = A[i];
			low = 0; high = i - 1;
			while (low <= high)
			{
				mid = (low + high) / 2;
				if (tmp < A[mid])
					high = mid - 1;
				else
					low = mid + 1;
			}
			for (j = i - 1; j >= high + 1; j--)
				A[j + 1] = A[j];
			A[high + 1] = tmp;
		}
	}
}
int main()
{
	int A[] = { 5, 6, 8, 4, 3, 8, 0, 8, 12, 555 };
	BinInsertSort(A, 10);
	for(int i=0;i<10;i++)
	printf("%d ", A[i]);

}
