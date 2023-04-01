#include <iostream>
using namespace std;
void merge(int *arr,int s,int mid,int e){
    int i=s;
    int j=mid+1;
    int k =s;
    int *narr = new int[e+1];
    while(i<=mid && j<=e){
        if(arr[i]<arr[j]){
            narr[k]=arr[i];
            i++;
        }
        else{
            narr[k]=arr[j];
            j++;
        }
        k++;
    }

    if(i>mid){
        while (j<=e)
        {
            narr[k]=arr[j];
            j++;
            k++;  
        }
        
    }
    else{
        while (i<=mid)
        {
            narr[k]=arr[i];
            i++;
            k++;
           
        }
        
    }

    for(int i =s;i<=e;i++){
        arr[i]=narr[i];
    }
    


}
void mergesort(int *arr,int s ,int e){

if(s<e){
    int mid = s+(e-s)/2;
    mergesort(arr,s,mid);
    mergesort(arr,mid+1,e);
    merge(arr,s,mid,e);
}

}

int printbbl(int arr[], int size)
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

    mergesort(arr,0,size-1 );
    printbbl(arr, size);

    return 0;
}