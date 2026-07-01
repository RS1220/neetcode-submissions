class Solution {
public:
    int trap(vector<int>& height) {
        int n=height.size();
        vector<int>arr(n);//prev greatest ele
        vector<int>brr(n);//next greatest ele
        vector<int>r(n);//min of arr and brr;
        
        arr[0]=-1;
        int maxVal=height[0];
        for(int i=1;i<n;i++){
            arr[i]=maxVal;
            if(height[i]>maxVal) {
                maxVal=height[i];
            }
            
        }

         brr[n-1]=-1;
         maxVal=height[n-1];
        for(int i=n-2;i>=0;i--){
            brr[i]=maxVal;
            if(height[i]>maxVal) {
                maxVal=height[i];
            }
        }

        for(int i=0;i<n;i++){
            r[i]=min(arr[i] , brr[i]);
        }

        int count=0;
        for(int i=0;i<n;i++){
            if(height[i]<r[i]) {
                count+=r[i]-height[i];
            }
        }

        return count;
    }
};
