#include <iostream>
using namespace std;
int Selesort(int arr[],int size){
   
    for( int i=1;i<size;i++){
            int temp=arr[i];
            int j;
        for( j = i-1;j>=0;j--){
            if(arr[j]>temp){
                arr[j+1]=arr[j];
            }
            else{
                break;
            }

        }
        arr[j+1]=temp;
    }
}
int printbbl(int arr[],int size){
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
   printbbl(arr,size);
    
  
    return 0;
}