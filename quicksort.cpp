#include <iostream>
using namespace std;
int partition(int *arr,int s,int e){
    int i =s;
    int j =e;
    int piv = arr[s];
    while(i<j){
        while(arr[i]<=piv)i++;
        while(arr[j]>piv)j--;
        if(i<j)
            swap(arr[i],arr[j]);
    }
   swap(arr[j],arr[s]);
return j;
}
void quicksort(int *arr,int s ,int e){

if(s<e){
    
    int pi = partition(arr,s,e);
    quicksort(arr,s,pi-1);
    quicksort(arr,pi+1,e);
}

}

int printqui(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{
    int size;
    cout << "Enter the size of array" << endl;
    cin >> size;
    int arr[10];
    cout << "Enter the array elements" << endl;
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    quicksort(arr,0,size-1 );
    printqui(arr, size);

    return 0;
}