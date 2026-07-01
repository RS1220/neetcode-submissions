class Solution {
public:
 
    void partition( vector<int> & v1,vector<int> & v2 ,vector<int>& nums){
       
        int i=0;
        int j=0;
        int k=0;
        while(i<v1.size() && j<v2.size()){
            if(v1[i]<v2[j]) nums[k++]=v1[i++];
            else nums[k++]=v2[j++];
        }

        if(i==v1.size()){
            while(j<v2.size()) nums[k++]=v2[j++];
        }

        if(j==v2.size()){
            while(i<v1.size()) nums[k++]=v1[i++];
        }



    }

    void mergesort(vector<int>& nums){
         int n=nums.size();
         if(n==1) return ;
         int n1=n/2;
         int n2=n-(n/2);
         vector<int>v1(n1);
         vector<int>v2(n2);

         for(int i=0;i<n1;i++){
            v1[i]=nums[i];
         }
          for(int i=0;i<n2;i++){
            v2[i]=nums[n1+i];
         }

        

         mergesort(v1);
         mergesort(v2);
         partition(v1 , v2 , nums);
        
        

    }
    vector<int> sortArray(vector<int>& nums) {
       
        mergesort(nums);
        return nums;

        
    }
};