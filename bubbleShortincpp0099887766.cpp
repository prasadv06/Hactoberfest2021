#include <iostream>
using namespace std;

void Bubblesort(int arr[], int n)
{ // for no of passes
    int temp;
    int isSorted =0;
    
    for (int i = 0; i < n - 1; i++)
    {
        printf("no of passes %d\n", i + 1);
        isSorted=1;
        for (int j = 0; j < n - 1 - i; j++) // for no of comparision
        {
            if (arr[j] > arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                isSorted=0;
            }
        }
        if(isSorted){
            return;
        }
    }
}

int main()
{

    int n;
    cout << "Enter the no of array you want:- " << endl;
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cout << "Enter the element of  array :- " << endl;
        cin >> arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << endl; // printing the array before sorting
    }

    Bubblesort(arr, n);
    cout<<"after shorted"<< endl;

    for (int i = 0; i < n; i++)
    {

        // cout<< "element of array is :-"<< endl;
        cout << arr[i] << endl; // printing the array before sorting
    }
    return 0;
}