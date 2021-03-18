#include <iostream>
using namespace std;

void merge_temp(int data[], int start, int mid, int end, int temp[])
{
    int i = start;
    int j = mid + 1;
    int m = start;
    while (i <= mid && j <= end)
    {
        if (data[i] <= data[j])
        {
            temp[m++] = data[i++];
        }
        else
        {
            temp[m++] = data[j++];
        }
    }
    while (i <= mid)
    {
        temp[m++] = data[i++];
    }

    while (j <= end)
    {
        temp[m++] = data[j++];
    }
    for (int i = start; i <= end; i++)
    {
        data[i] = temp[i];
    }
    return;
}
void merge_sort(int data[], int start, int end, int temp[])
{
    if (start >= end)
    {
        return;
    }
    int mid = (end + start) / 2;
    merge_sort(data, start, mid, temp);
    merge_sort(data, mid + 1, end, temp);
    merge_temp(data, start, mid, end, temp);
}
int main()
{
    int data[] = {4, 7, 9, 1, 3, 2, 8};
    int temp[7];
    merge_sort(data, 0, 6, temp);
    for (int i = 0; i < 7; i++)
    {
        cout << data[i] << endl;
    }
    return 0;
}