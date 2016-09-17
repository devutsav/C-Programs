#include<stdio.h>
void merge(int arr[], int low, int mid, int high)
{
	int i, j, k;
	int n1 = mid - low + 1;
	int n2 = high - mid;

	int L[n1], R[n2];
    //n1 is the no of elements in 1st half, n2 no of elem in 2nd half
	for (i = 0; i < n1; i++)
    {
		L[i] = arr[low + i];
    }
	for (j = 0; j < n2; j++)
    {
		R[j] = arr[mid+1 +j];
    }
	i = 0; // Initial index of first subarray
	j = 0; // Initial index of second subarray
	k = low; // Initial index of merged subarray arr[]
	while (i < n1 && j < n2)
	{
		if (L[i] <= R[j])
		{
			arr[k] = L[i];
			i++;
		}
		else
		{
			arr[k] = R[j];
			j++;
		}
		k++;
	}

	/* Copying the remaining elements of L[]*/
	while (i < n1)
	{
		arr[k] = L[i];
		i++;
		k++;
	}

	/* Copy the remaining elements of R[]*/
	while (j < n2)
	{
		arr[k] = R[j];
		j++;
		k++;
	}
}

void mergeSort(int arr[], int low, int high)
{
    if (low < high)
    {
		int mid = (low+high)/2;
        mergeSort(arr, low, mid);
        mergeSort(arr, mid+1, high);
        merge(arr, low, mid, high);
	}
}
int main()
{
    int i,arr[10],j;
    for(i=0;i<9;i++)
    {
        scanf("%d\n",&arr[i]);
    }
	int arr_size = sizeof(arr)/sizeof(arr[0]);
    printf("The array is\n");
    for(i=0;i<arr_size;i++)
    {
        printf("%d\n",arr[i]);
    }
	mergeSort(arr, 0, arr_size - 1);

	printf("\nSorted array is \n");
    for (j=0;j<arr_size;j++)
    {
		printf("%d ", arr[j]);
    }
	printf("\n");
	return 0;
}
