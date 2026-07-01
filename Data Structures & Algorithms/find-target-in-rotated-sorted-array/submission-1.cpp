class Solution {
public:
    int BS(vector<int>&nums , int lo , int hi,int target){
        while(lo<=hi){
            int mid=lo+(hi-lo)/2;
            if(nums[mid]==target ) return mid;
            else if(nums[mid]>target) hi=mid-1;
            else lo=mid+1;

           
        }
         return -1;
    }
    int search(vector<int>& nums, int target) {

        int n=nums.size();
        if(n==1) return target==nums[0]?0:-1;

        if(n==2){
            if(target==nums[0]) return 0;
            if(target==nums[1]) return 1;
            return -1;
        }

        int lo=0;
        int hi=n-1;
        int pivot=-1;
        while(lo<=hi){

            int mid=lo+(hi-lo)/2;
            if(mid==0) {
                lo=mid+1;
                continue;
            }
            if(mid==n-1){
                hi=mid-1;
                continue;
            }

            if(nums[mid]>nums[mid-1] && nums[mid]>nums[mid+1]) {
                pivot=mid+1;
                break;
            }
            else if(nums[mid]<nums[mid-1] && nums[mid]<nums[mid+1]){
                pivot=mid;
                break;
            }
          else if(nums[mid]>nums[hi]) lo=mid+1;
          else hi=mid-1;
        }

        if(pivot==-1)//sorted normal BS can Apply
        {
            return BS(nums , 0 , n-1,target);
        }

        if(target>=nums[0] && target<=nums[pivot-1]){
            return BS(nums , 0 , pivot-1,target);
        }

        if(target>=nums[pivot] && target<=nums[n-1]){
             return BS(nums , pivot , n-1,target);
        }
        return -1;

       




        
        
    }
};
