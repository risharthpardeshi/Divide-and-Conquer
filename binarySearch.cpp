/*
1.Begin with an interval covering the whole array.
2.If the value of the search key is less than the item in the middle of the interval, narrow the interval to the lower half.
3.Otherwise, narrow it to the upper half.
4.Repeatedly check until the value is found or the interval is empty.
*/

#include <iostream>
using namespace std;

int binarySearch(int arr[], int size, int key)
{
    int start = 0;
    int end = size - 1;

    int mid = start + (end - start) / 2;
    while (start <= end)
    {
        if (arr[mid] == key)
        {
            return mid;
        }

        // Right part traverse
        if (key > arr[mid])
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
        mid = start + (end - start) / 2;
    }
    return -1;
}
int main()
{
    int even[6] = {2, 4, 6, 8, 12, 18};
    int odd[5] = {3, 5, 8, 11, 14};

    int evenIndex = binarySearch(even, 6, 8);
    cout << "Index of 8 is " << evenIndex << endl;

    int oddIndex = binarySearch(odd, 5, 11);
    cout << "Index of 11 is " << oddIndex << endl;

    return 0;
}