#include<iostream>
using namespace std;

void pivotArray(int nums[], int n, int pivot) {
    int less[n], equal[n], greater[n];
    int l = 0, e = 0, g = 0;

    // Split elements into 3 groups
    for (int i = 0; i < n; i++) {
        if (nums[i] < pivot)
            less[l++] = nums[i];
        else if (nums[i] == pivot)
            equal[e++] = nums[i];
        else
            greater[g++] = nums[i];
    }

    // Merge all three back into original array
    int index = 0;

    for (int i = 0; i < l; i++)
        nums[index++] = less[i];
    for (int i = 0; i < e; i++)
        nums[index++] = equal[i];
    for (int i = 0; i < g; i++)
        nums[index++] = greater[i];
}

int main() {
    int nums[] = {9, 12, 5, 10, 14, 3, 10};
    int n = sizeof(nums) / sizeof(nums[0]);
    int pivot = 10;

    pivotArray(nums, n, pivot);

    cout << "Rearranged array: ";
    for (int i = 0; i < n; i++) {
        cout << nums[i] << " ";
    }
    cout << endl;

    return 0;
}
