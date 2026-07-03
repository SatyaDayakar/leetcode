class NumArray {
public:
  vector<int> pf ;
    NumArray(vector<int>& nums) {

        pf.push_back(nums[0]);
        for(int i = 1 ; i<nums.size() ; i++)
        {
            pf.push_back(pf.back() + nums[i]);
        }
        
    }
    
    int sumRange(int left, int right) {

        if(left == 0)
        return pf[right];
        else
        return pf[right]-pf[left-1];
        
    }
};

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray* obj = new NumArray(nums);
 * int param_1 = obj->sumRange(left,right);
 */