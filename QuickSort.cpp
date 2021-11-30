#include <iostream>
#include <vector>
using namespace std;

int partition(vector<int>& nums,int l,int r);

void QuickSort(vector<int>& nums,int l,int r);

int main(){
    vector<int> nums;
    nums = { 4, 8, 3, 2, 5, 1 };
    QuickSort(nums,0,nums.size()-1);
    for(int i=0;i<nums.size();i++){
        cout<<nums[i]<<endl;

    }
    cout<<endl;
}

int partition(vector<int>& nums,int l,int r){
    int i,j;
    i=l,j=r;
    while(i<j){
        while(nums[j]>=nums[l]&&i<j){
            j--;
        }
        while (nums[i]<=nums[l]&&i<j)
        {
            i++;
        }
        swap(nums[i],nums[j]);
    }
    swap(nums[l],nums[i]);
    return i;
}

void QuickSort(vector<int>& nums,int l,int r){
    if(l>=r){
        return ;
    }
    int p;
    p = partition(nums,l,r);
    QuickSort(nums,l,p-1);
    QuickSort(nums,p+1,r);
}