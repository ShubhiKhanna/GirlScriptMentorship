// https://leetcode.com/problems/largest-rectangle-in-histogram/

class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        if(heights.size() == 0)
            return 0;
        if(heights.size() == 1)
            return heights[0];


        stack<int> s;
        int max_area = 0;
        int area_with_top = 0;

        int n = heights.size();
        int i = 0;

        while(i < n)
        {
            int curr = heights[i];
            if(s.empty() || curr >= heights[s.top()])
                s.push(i++);
            else{
               int temp = s.top();
                s.pop();  // pop the top

               area_with_top = heights[temp] * (s.empty()? i : i - s.top() - 1);
               if (max_area < area_with_top)
                max_area = area_with_top;
            }
        }

        // Now pop the remaining bars from stack and calculate
    // area with every popped bar as the smallest bar

        while (s.empty() == false)
    {
        int temp = s.top();
        s.pop();
        area_with_top = heights[temp] * (s.empty() ? i :
                                i - s.top() - 1);

        if (max_area < area_with_top)
            max_area = area_with_top;
    }


        return max_area;
    }
};
