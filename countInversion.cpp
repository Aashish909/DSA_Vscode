#include <iostream>

using namespace std;

long long merge(int arr[], int s, int mid, int e)
{
    long long inversions = 0;
    int leftSize = mid - s + 1;
    int rightSize = e - mid;

    int left[leftSize];
    int right[rightSize];

    for (int i = 0; i < leftSize; i++)
    {
        left[i] = arr[s + i];
    }

    for (int i = 0; i < rightSize; i++)
    {
        right[i] = arr[mid + 1 + i];
    }

    int i = 0, j = 0, k = s;

    while (i < leftSize && j < rightSize)
    {
        if (left[i] <= right[j])
        {
            arr[k++] = left[i++];
        }
        else
        {
            arr[k++] = right[j++];
            inversions += mid - s - i + 1;
        }
    }

    while (i < leftSize)
    {
        arr[k++] = left[i++];
    }

    while (j < rightSize)
    {
        arr[k++] = right[j++];
    }

    return inversions;
}

long long mergeSort(int arr[], int s, int e)
{
    long long inversions = 0;
    if (s < e)
    {
        int mid = s + (e - s) / 2;

        inversions += mergeSort(arr, s, mid);
        inversions += mergeSort(arr, mid + 1, e);
        inversions += merge(arr, s, mid, e);
    }
    return inversions;
}

long long getInversions(long long arr[], int n)
{
    return mergeSort(arr, 0, n - 1);
}
