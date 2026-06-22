class Solution {
    public double findMedianSortedArrays(int[] nums1, int[] nums2) {
        int i=0, i1=0, i2=0;
        double mid= 0;
        int n=nums1.length+ nums2.length;
        int[] arr= new int[n];
        while(i1<nums1.length && i2<nums2.length){
            if(nums1[i1]<nums2[i2]){
                arr[i]=nums1[i1];
                i1++;
            }
            else{
                arr[i]=nums2[i2];
                i2++;
            }
            i++;
        }
        while(i1<nums1.length){
            arr[i]=nums1[i1];
            i1++; i++;
        }
        while(i2<nums2.length){
            arr[i]=nums2[i2];
            i2++; i++;
        }

        if(n%2==1){
            mid= arr[n/2];
        }
        else{
            mid = (arr[n/2 - 1] + arr[n/2]) / 2.0;
        }
        return mid;
    }
}