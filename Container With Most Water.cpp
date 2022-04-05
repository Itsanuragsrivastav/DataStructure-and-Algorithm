
class Solution {
public:
    int maxArea(vector<int>& height) {
        int left = 0; 
        int right = height.size() - 1;
        int ans = 0;
        
        ans = max(min(height[left], height[right]) * (right - left), ans);
        
        while(left < right){
            if(height[left] < height[right]){
                left++;
            }else{
                right--;
            }
            
            ans = max(min(height[left], height[right]) * (right - left), ans);
        }
        
        return ans;
    }
};

