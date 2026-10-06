#include <iostream>
#include <vector>

using namespace std;

// Fix 1: Using 'long long' to prevent Integer Overflow for large products/sums
// Fix 2: Using std::vector eliminates pointer decay and manual size tracking
long long calculate_sum(const vector<int>& arr) {
    long long sum = 0;
    // Range-based for loop (safest way to traverse elements)
    for (int num : arr) {
        sum += num;
    }
    return sum;
}

long long calculate_product(const vector<int>& arr) {
    long long product = 1;
    for (int num : arr) {
        product *= num;
    }
    return product;
}

int main() {
    int n;
    cout << "Enter the number of elements: ";
    
    // Input validation for size
    if (!(cin >> n) || n <= 0) {
        cout << "Error: Please enter a valid positive size!" << endl;
        return 1;
    }

    // Fix 3: Dynamic Input (User can enter their own array elements)
    vector<int> arr(n);
    cout << "Enter " << n << " numbers separated by space: ";
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }

    // Output results
    cout << "The sum is: " << calculate_sum(arr) << endl;
    cout << "The product is: " << calculate_product(arr) << endl;

    return 0;
}