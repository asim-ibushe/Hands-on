class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int s=0;
        int e=arr.size();
        int mid=(s+e)/2;
        while(s<e)
        {
            if(arr[mid]<arr[mid+1])
            {
                s=mid+1;
            }
            else
            {
                e=mid;
            }
            mid=(s+e)/2;
        }
        return s;
    }
};
