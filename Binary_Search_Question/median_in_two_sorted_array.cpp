#include<bits/stdc++.h>
using namespace std;
void input(vector<int>arr){
    for(int i=0; i<arr.size(); i++){
        cin>>arr[i];
    }
}
double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
    vector<int> arr;
    int i = 0;
    int j = 0;
    while(i<nums1.size() && j<nums2.size()){
        if(nums1[i] < nums2[j]){
            arr.push_back(nums1[i]);
            i++;
        }
        else{
            arr.push_back(nums2[j]);
            j++;
        }
    }
    while(i<nums1.size()){
        arr.push_back(nums1[i]);
        i++;
    }
    while(j<nums2.size()){
        arr.push_back(nums2[j]);
        j++;
    }
    int n = arr.size();
    if(n%2 == 0){
        return (arr[n/2] + arr[(n/2) - 1]) / 2.0;
    }
    else if(n%2 != 0){
        return arr[n/2];
    }
    else 
        return 0.0;
}
double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
    int n1 = nums1.size();
    int n2 = nums2.size();
    vector<int> nums3(n1+n2);
    int j=0;
    for(int i=0; i<n1; i++){
        nums3[j++] = nums1[i];
    }
    for(int i=0; i<n2; i++){
        nums3[j++] = nums2[i];
    }
    sort(nums3.begin(),nums3.end());
    int mid = (n1+n2)/2;
    if(nums3.size()%2 == 0){
        return (nums3[mid-1] + nums3[mid])/2.0;
    }
    else if(nums3.size()%2 != 0){
        return nums3[mid];
    }
    else
    return 0.0;
}
double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2){
    if(nums2.size() < nums1.size()) return findMedianSortedArrays(nums2, nums1);

        int n1 = nums1.size();
        int n2 = nums2.size();
        int low = 0, high = n1;

        while(low <= high){

            int cut1 = (low + high) >> 1;
            int cut2 = (n1 + n2 + 1)/2 - cut1;

            int left1 = cut1 == 0 ? INT_MIN : nums1[cut1 - 1];
            int left2 = cut2 == 0 ? INT_MIN : nums2[cut2 - 1];

            int right1 = cut1 == n1 ? INT_MAX : nums1[cut1];
            int right2 = cut2 == n2 ? INT_MAX : nums2[cut2];

            if(left1 <= right2 && left2 <= right1){
                if((n1 + n2)%2 == 0){
                    return (max(left1, left2) + min(right1, right2))/2.0;
                }
                else{
                    return max(left1, left2);
                }
            }
            else if(left1 > right2){
                high = cut1 - 1;
            }
            else{
                low = cut1 + 1;
            }
        }
        return 0.0;
} 

double find_Median(vector<int> &nums1, vector<int> &nums2){
    if(nums2.size() < nums1.size()) return find_Median(nums2, nums1);

    int n1 = nums1.size();
    int n2 = nums2.size();
    int low = 0, high = n1;
    while(low <= high){

        int cut1 = (low + high) >> 1;
        int cut2 = (n1 + n2 + 1)/2 - cut1;

        int left1 = cut1 == 0 ? INT_MIN : nums1[cut1 - 1];
        int left2 = cut2 == 0 ? INT_MIN : nums2[cut2 - 1];

        int right1 = cut2 == n1 ? INT_MAX : nums1[cut1];
        int right2 = cut2 == n2 ? INT_MAX : nums2[cut2];

        if(left1 <= right2 && left2 <= right1){
            if((n1 + n2)%2 == 0){
                return (max(left1, left2) + min(right1, right2))/2.0;
            }
            else{
                return max(left1, left2);
            }
        }
        else if(left1 > right2){
            high = cut1 - 1;
        }
        else{
            low = cut1 + 1;
        }
    }
    return 0.0;
}
int main(){
    int n1,n2;
    cin>>n1>>n2;
    vector<int> nums1(n1);
    vector<int> nums2(n2);
    input(nums1);
    input(nums2);
    cout<<find_Median(nums1,nums2)<<endl;
    cout<<findMedianSortedArrays(nums1,nums2);
return 0;
}