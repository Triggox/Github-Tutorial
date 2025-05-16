#include<bits/stdc++.h>
using namespace std;

int LinearSearch(const vector<int> &arr , int target){
    for(int i=0;i<arr.size();i++){
        if(arr[i]==target){
            return i;
        }
    }  
    return -1;
};

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
    int index=LinearSearch(arr,target);
    cout<<index;
}