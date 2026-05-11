#include<iostream>
using namespace std;
int Binary_Search(int nums[],int n,int target){
    int left = 0;
    int right = n-1;
    while(left<=right)
    {
        int mid = left + (right-left)/2;
        if(nums[mid]==target)
        return mid;
        else if(nums[mid]<target)
        left = mid -1;
    }
return -1;
}
int main(){
    int arr[5] ={1,2,3,4,5};
    int target = 23;

    int result = Binary_Search(arr,target);
    if(result != -1){
        cout<<"Element found at index :"<<result<<endl;
    }else{

    cout<<"elements not found:"<<endl;
    }
    return 0;
    }
