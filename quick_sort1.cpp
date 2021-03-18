#include <iostream>
using namespace std;

void swap(int & a, int & b)
{
    int temp = 0;
    temp = a;
    a = b;
    b = temp;
    return;
}

int partition(int data[], int start, int end)
{
    int small = start - 1;
    for (int i = start; i < end; i++)
    {
        if (data[i] < data[end])
        {
            small++;
            swap(data[small], data[i]);
        }
    }
    small++;
    swap(data[small], data[end]);
    return small;
}

void quick_sort(int data[], int start, int end)
{
    if (start < end)
    {
    int mid = partition(data, start, end);
    quick_sort(data, start, mid - 1);
    quick_sort(data, mid + 1, end);
    }
    return;
}

int main()
{
    int data_test[] = {4, 5, 8, 9, 3, 10, 7, 6};
    quick_sort(data_test, 0, 7);
    for (int i = 0; i < 8; i++)
    {
        cout << data_test[i] << endl;
    }
    return 0;
}