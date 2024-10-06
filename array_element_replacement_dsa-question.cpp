#include <iostream>
#include <vector>

std::vector<int> replaceElements(std::vector<int>& arr) {
    int n = arr.size();
    int maxRight = -1;
    
    // Traverse the array from right to left
    for (int i = n - 1; i >= 0; --i) {
        int current = arr[i];
        arr[i] = maxRight;
        if (current > maxRight) {
            maxRight = current;
        }
    }
    
    return arr;
}

int main() {
    std::vector<int> arr = {17, 18, 5, 4, 6, 1};
    std::vector<int> result = replaceElements(arr);
    
    for (int i : result) {
        std::cout << i << " ";
    }
    
    return 0;
}
