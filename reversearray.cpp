#include<iostream>
using namespace std;
void Reversearray(int arr[],int n){
     for (int i = 0; i < n / 2; i++) {
        swap(arr[i], arr[n - 1 - i]);
    }
}

void interchange(int arr[], int n) {
    // 'interchange' means to swap elements in a ajacent index
    for (int i = 0; i < n - 1; i += 2) {
        swap(arr[i], arr[i + 1]);
    }
}

void sum(int arr[],int size,int target){

    for(int i=0;i< size-1;i++){
        for(int j=size-1;j>i;j--){
            if(arr[i]+arr[j]== target){
                cout<<i<<" "<<j<<endl;
            }

        }
    }
}
    int duplicate(int arr[],int size){
        int result = 0;
        for( int i=0 ; i<size-1 ; i++ ){
            for( int j = i+1 ; j<size ; j++ ){
                if( arr[i] == arr[j] ){
                    cout << arr[i] << " ";
                    result++;
                }
            }
        }
        cout << endl;
        return result;
    }


int main(){
    int arr[]={1,2,23,23};
    int n =5;
    int target = 6;
   // Reversearray(arr,n);

   int size = sizeof(arr)/sizeof(arr[0]);
//sum(arr,size,target);

//  interchange(arr,n);
//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }
duplicate(arr,size);
}


// new thing