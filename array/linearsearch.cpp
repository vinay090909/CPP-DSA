#include<iostream>
using namespace std;
bool linearsearch(int arr[],int size,int key){
    for(int i=0;i<size;i++){
        if(arr[i]==key){
            cout<<key<<" ";
            return true;
        }
    }
     return false;
}
int main(){
    int arr[]={1,3,5,79,9,7};
    int size =6;
    int key =7;
   if(linearsearch(arr, size, key)) {
        cout << "Element found in array ." << endl;
    } else {
        cout << "Element not found" << endl;
    }
}