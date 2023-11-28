#include<iostream>
#include<math.h>
#include<algorithm>
using namespace std;

class heap{

    int arr[100];
    int size;

    public:

    heap(){
        arr[0] = -1;
        size=0;
    }

    void insert(int value){
        size += 1;

        int index = size;
        arr[index] = value;

        while(index > 1){
            int parent = index/2;
            if(arr[parent] < arr[index]){
                swap(arr[parent] , arr[index]);
                index = parent;
            }else{
                return ;
            }
        }
    }

    void print(){
        for(int i =1;i<size+1;i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }

    void deletion(){
        if(size == 0){
            cout<<"There is nothing to delete"<<endl;
            return ;
        }
        arr[1] = arr[size];
        size--;

        int i = 1;
        while(i<size){
            int left = i*2 ;
            int right = i*2 + 1;

            int maxi;
            int maxi_index ;
            if(arr[left] >= arr[right]){
                maxi_index = left;
                maxi = arr[left];
            }else{
                maxi_index = right;
                maxi = arr[right];
            }

            if(maxi_index < size && maxi > arr[i]){
                swap(arr[i],arr[maxi_index]);
                i = maxi_index;
            }else{
                return ;
            }
            
        }

    }

};

void heapify(int arr[] , int n , int index ){
    int largest = index;
    int left = index*2;
    int right = index*2 + 1 ;

    if(left <= n && arr[largest] < arr[left]){
        largest = left;
    }
    if(right <= n && arr[largest] < arr[right]){
        largest = right;
    }

    if(largest != index){
        swap(arr[largest] , arr[index]);
        heapify(arr, n , largest);
    }

}

void heapsort(int arr[] , int n){
    int size = n;

    while(size > 0){
        swap(arr[1],arr[size]);
        size--;

        heapify(arr,size,1);
    }
}

int main(){

    heap max_heap;

    // max_heap.insert(60);
    // max_heap.insert(50);
    // max_heap.insert(40);
    // max_heap.insert(30);
    // max_heap.insert(20);
    // max_heap.insert(55);

    // max_heap.print();

    // max_heap.insert(70);

    // max_heap.print();

    // max_heap.deletion();

    // max_heap.print();

    int arr[6] = {-1,54,53,55,52,50};
    int n = 5;

    for(int i =n/2;i>0;i--){
        heapify(arr,n,i);
    }

    for(int i =1;i<=n;i++){
        cout<<arr[i]<<" ";
    }

    cout<<endl;

    heapsort(arr,n);

    for(int i =1;i<=n;i++){
        cout<<arr[i]<<" ";
    }



    
    return 0;
}