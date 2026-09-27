class KthLargest {
private:
    priority_queue<int, vector<int>, greater<int>> minHeap;
    int maxCapacity;

public:
    KthLargest(int k, vector<int>& nums) {
        maxCapacity = k;
        for (int num : nums) {
            minHeap.push(num);
            if (minHeap.size() > maxCapacity) {
                minHeap.pop();
            }
        }
    }

    int add(int val) {
        minHeap.push(val);
        if (minHeap.size() > maxCapacity) {
            minHeap.pop();
        }
        return minHeap.top();
    }
};
