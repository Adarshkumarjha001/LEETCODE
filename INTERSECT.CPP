class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        int n=nums1.size();
        int m=nums2.size();
        vector<int> res;
        unordered_map<int,int> map1;
        unordered_map<int,int> map2;
        for(int i=0;i<n;i++){
            map1[nums1[i]]++;
        }
        for(int j=0;j<m;j++){
            map2[nums2[j]]++;
        }
        for(auto& num : nums1){
            if(map2[num]-->0){
                res.push_back(num);
            } //If the count of num in map2 is greater than zero, it means num is present in both nums1 and nums2 at least once.
        } return res;
    }
};
