#include <iostream>
using namespace std;
int Selesort(int arr[],int size){
    for (int i=0;i<size-1;i++){
        int minindex=i;
        for(int j=i+1;j<size;j++){
            if(arr[j]<arr[minindex])
                minindex=j;    
        }
        swap(arr[minindex],arr[i]);

    }
    
for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";

}
}

    
int main() {
    int size;
    cout<<"Enter the size of array"<<endl;
    cin>>size;
   int arr[10];
   cout<<"Enter the array elements"<<endl;
   for(int i =0;i<size;i++){
    cin>>arr[i];
   }
  
   Selesort(arr,size);
    

    return 0;
}