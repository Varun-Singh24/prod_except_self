# Product of Array Except Self (Brute Force Approach)

This repository contains a C++ solution for the **Product of Array Except Self** problem using an intuitive nested-loop strategy.

---

## 📋 Problem Statement

**Task:** Given an array of integers `arr`, return an array `prod` such that `prod[i]` is equal to the product of all the elements of `arr` except `arr[i]`.

**Constraints:**
* The solution should ideally handle arrays of varying sizes without using the division operator `/`.

**Examples:**
* **Input:** `arr = [1, 2, 3, 4]`
* **Output:** `[24, 12, 8, 6]`  
  *Explanation:* - `prod[0] = 2 * 3 * 4 = 24`
  - `prod[1] = 1 * 3 * 4 = 12`
  - `prod[2] = 1 * 2 * 4 = 8`
  - `prod[3] = 1 * 2 * 3 = 6`

---

## 🚀 How the Algorithm Works

The solution uses an **exhaustive search method** with nested loops to calculate the products:

1.  **Initialize:** Create an output vector `prod` of the same size $n$ as `arr`, filled completely with `1`.
2.  **Outer Loop (`i`):** Iterates through each index of the target output array.
3.  **Inner Loop (`j`):** Iterates through all elements of the input array.
4.  **Condition Check:** If `i != j`, the element `arr[j]` is multiplied into `prod[i]`. If `i == j`, it skips the multiplication, ensuring the element at the current index is excluded.

## 📊 Complexity Analysis

| Metric | Complexity | Description |
| :--- | :--- | :--- |
| **Time Complexity** | $O(n^2)$ | We use two nested loops, each iterating $n$ times. For an array of size $n$, this requires roughly $n \times n$ operations. |
| **Space Complexity** | $O(1)$ | No extra auxiliary storage is utilized. The space used by the `prod` vector is required for returning the final answer. |

---

## 💻 Code Overview

```cpp
class Solution {
  public:
    vector<int> productExceptSelf(vector<int>& arr) {
        int n = arr.size();
        vector<int> prod(n, 1);
        
        for(int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                if(i != j)
                    prod[i] *= arr[j];
            }
        }
        return prod; 
    }
};

```

