class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int k=1;
        int i;
        if (nums.empty()) {
    return 0;
}
        for(i=1;i<nums.size();i++){
                if(nums[i-1]!=nums[i]){
                    nums[k]=nums[i];
                    k++;
                }
            }  
            return k;
}
    
};