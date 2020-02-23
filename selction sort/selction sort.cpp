#include <iostream>
using namespace std;

void selectionSort(int array[], int size)
{
    int minimumIndex, counter, temp, inCounter;
    for (counter = 0; counter < size-1; counter++)
    {
        minimumIndex = counter;
        for (inCounter = counter+1 ; inCounter < size; inCounter++)
        {
            if (array[inCounter] < array[minimumIndex])
            {
                minimumIndex = inCounter;
            }
        }
        temp = array[counter];
        array[counter] = array[minimumIndex];
        array[minimumIndex] = temp;
    }
}

void printArray(int array[], int size)
{
    cout << "[ ";
    for (int counter = 0; counter < size; counter++)
    {
        cout << array[counter] << " ";
    }
    cout << "]" << endl;
}

int main()
{
    int arr[8] = { 5,10,12,7,1,6,4,3 };
    int size = sizeof(arr) / sizeof(arr[0]);
    selectionSort(arr, size);
    printArray(arr, size);
    return 0;
}

