#include<iostream>
#include<vector>
using namespace std;
void optimisedBubbleSort(vector<int>&arr){
    int size = arr.size();
    for(int i = 0; i<size-1; i++){
        bool swapped = false;
        for(int j = 0; j<size-i-1; j++){
            if(arr[j] > arr[j+1]){
                swap(arr[j],arr[j+1]);
                swapped = true;
            }
        }
        if(!swapped) break;
    }
}
int main(){
    vector<int>arr = {44,33,22,11};
    optimisedBubbleSort(arr);
    for(auto i: arr){
        cout<<i <<" ";
    }
    cout<<endl;
    return 0;
}