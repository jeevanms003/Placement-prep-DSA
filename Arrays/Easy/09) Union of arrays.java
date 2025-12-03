class Solution {
    public int[] union(int[] nums1, int[] nums2) {
        int i = 0, j = 0;
        ArrayList<Integer> result = new ArrayList<>();

        while (i < nums1.length && j < nums2.length) {
            // Skip duplicates in nums1
            if (i > 0 && nums1[i] == nums1[i - 1]) {
                i++;
                continue;
            }
            // Skip duplicates in nums2
            if (j > 0 && nums2[j] == nums2[j - 1]) {
                j++;
                continue;
            }

            if (nums1[i] < nums2[j]) {
                result.add(nums1[i]);
                i++;
            } else if (nums1[i] > nums2[j]) {
                result.add(nums2[j]);
                j++;
            } else {
                result.add(nums1[i]); // common element once
                i++;
                j++;
            }
        }

        // Add remaining elements from nums1
        while (i < nums1.length) {
            if (i == 0 || nums1[i] != nums1[i - 1]) {
                result.add(nums1[i]);
            }
            i++;
        }

        // Add remaining elements from nums2
        while (j < nums2.length) {
            if (j == 0 || nums2[j] != nums2[j - 1]) {
                result.add(nums2[j]);
            }
            j++;
        }

        // Convert to array
        int[] ans = new int[result.size()];
        for (int k = 0; k < result.size(); k++) {
            ans[k] = result.get(k);
        }
        return ans;
    }
}
