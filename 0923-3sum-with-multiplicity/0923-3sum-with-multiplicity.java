class Solution {
    public int threeSumMulti(int[] arr, int target) {
        int n = arr.length;
        long count = 0;
        int mod = 1000000007;

        Arrays.sort(arr);

        for (int i = 0; i < n - 2; i++) {
            int left = i + 1, right = n - 1;

            while (left < right) {
                int sum = arr[i] + arr[left] + arr[right];

                if (sum == target) {
                    if (arr[left] == arr[right]) {
                        int m = right - left + 1;
                        count += (long) m * (m - 1) / 2;
                        break;
                    } else {
                        int leftCount = 1;
                        int rightCount = 1;

                        while (left + 1 < right &&
                               arr[left] == arr[left + 1]) {
                            leftCount++;
                            left++;
                        }

                        while (right - 1 > left &&
                               arr[right] == arr[right - 1]) {
                            rightCount++;
                            right--;
                        }

                        count += (long) leftCount * rightCount;

                        left++;
                        right--;
                    }
                } else if (sum < target) {
                    left++;
                } else {
                    right--;
                }
            }
        }

        return (int)(count % mod);
    }
}