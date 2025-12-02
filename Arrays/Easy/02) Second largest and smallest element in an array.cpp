class Solution {
public:
    int secondLargest(int arr[], int n) {
        int largest = INT_MIN;
        int second  = INT_MIN;

        for (int i = 0; i < n; i++) {
            if (arr[i] > largest) {
                second = largest;
                largest = arr[i];
            }
            else if (arr[i] > second && arr[i] != largest) {
                second = arr[i];
            }
        }

        return second; // assumes at least 2 distinct values
    }
};

class Solution {
public:
    int secondSmallest(int arr[], int n) {
        int smallest = INT_MAX;
        int second   = INT_MAX;

        for (int i = 0; i < n; i++) {
            if (arr[i] < smallest) {
                second = smallest;
                smallest = arr[i];
            }
            else if (arr[i] < second && arr[i] != smallest) {
                second = arr[i];
            }
        }

        return second;  // assumes at least 2 distinct values
    }
};
