class Solution {
public:
    int partition(vector<int>& nums , int si , int ei){
        int n=nums.size();
        int pivotEle=nums[si];
        int count=0;
        for(int i=si+1;i<=ei;i++){
            if(nums[i]<=pivotEle) count++;
        }

        int pi=count + si;
        swap(nums[si] , nums[pi]);

        int i=si;
        int j=ei;
        while(i<pi && j >pi){
            if(nums[i]<=nums[pi]) i++;
            else if (nums[j]>nums[pi]) j--;
            else {
                swap(nums[i] , nums[j]);
                i++;
                j--;
            }
        }
        return pi;


    }
    void quickSort(vector<int>& nums , int si , int ei){
        if(si>=ei) return;
        int pivot=partition(nums , si , ei);

        quickSort(nums , si , pivot-1);
        quickSort(nums , pivot+1 , ei);


    }
    vector<int> sortArray(vector<int>& nums) {
        int n=nums.size();
        quickSort(nums , 0 , n-1);
        return nums;
        
    }
};