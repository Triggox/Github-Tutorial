#include<iostream>
#include<vector>
using namespace std;

int BinarySearch(const vector<int>arr,int target){
    int left=0;
    int right=arr.size()-1;
    while(left<=right){
        int mid=left+right/2;
        if(arr[mid]==target){
            return mid;
        }
        if(arr[mid]<left){
            left=mid+1;
        }
        else{
            right=mid-1;
        }
    }
    return -1;
}

int main(){
    vector<int> arr;
    int n;
    int val;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>val;
        arr.push_back(val);
    }

    int target;
    cin>>target;
    cout<<BinarySearch(arr,target);
}