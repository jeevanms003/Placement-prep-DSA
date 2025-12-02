class Solution {

    public int secondLargest(int[] arr) {
        int largest = Integer.MIN_VALUE;
        int second  = Integer.MIN_VALUE;

        for (int num : arr) {
            if (num > largest) {
                second = largest;
                largest = num;
            }
            else if (num > second && num != largest) {
                second = num;
            }
        }

        return second; // assumes at least 2 distinct values
    }
}

class Solution {

    public int secondSmallest(int[] arr) {
        int smallest = Integer.MAX_VALUE;
        int second   = Integer.MAX_VALUE;

        for (int num : arr) {
            if (num < smallest) {
                second = smallest;
                smallest = num;
            }
            else if (num < second && num != smallest) {
                second = num;
            }
        }

        return second;  // assumes at least 2 distinct values
    }
}

