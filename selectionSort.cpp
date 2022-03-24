#include <iostream>
using namespace std;

void swap(int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}

void selectionSort(int arr[], int n)
{
    int i, j, minIndex;
    for (int i = 0; i < n - 1; i++)
    {
        int minIndex = i;
        for (int j = 0; j < n; j++)
        {
            if (arr[j] < arr[minIndex])
            {
                minIndex = j;

                swap(arr[minIndex], arr[i]);
            }
        }
    }
}
int main()
{

    return 0;
}