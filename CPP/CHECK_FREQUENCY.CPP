#include <iostream>
#include <unordered_map>
using namespace std;

int main() {
    int n;
    cout << "Enter Size of array : ";
    cin >> n;

    int arr[n];
    cout << "Array Elements : ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    unordered_map<int, int> frequency;

    for (int i = 0; i < n; i++) {
        frequency[arr[i]]++;
    }

    for (auto d : frequency) {
        cout << d.first << " ---> " << d.second << endl;
    }

    return 0;
}

/*
NOTES:

1) map:
   - Time Complexity: O(n log n)
   - Output: Sorted order
   - Implemented using Red-Black Tree

2) unordered_map:
   - Time Complexity: O(n) (average case)
   - Output: Not sorted
   - Implemented using Hash Table

3) Interview Answer:
   "map uses a balanced BST, so insertion takes O(log n).
    unordered_map uses hashing, so average insertion is O(1),
    making the total O(n)."

4) Usage:
   | Requirement             | Use             |
   | ----------------------- | --------------- |
   | Sorted output needed    | map             |
   | Fastest frequency count | unordered_map   |
   | Java                    | HashMap         |
   | Python                  | dict            |
*/
