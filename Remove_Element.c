#include <stdio.h>
int removeElement(int* nums, int numsSize, int val) {
    int k = 0;
    for (int i = 0; i < numsSize; i++) {
        if (nums[i] != val) {
            nums[k] = nums[i];
            k++;
        }
    }
    return k;
}

int main() {
  int size;
  printf("Enter size of array: ");
  scanf("%d", &size);
  int nums[size];
  printf("Enter %d elements:\n", size);
  for (int i = 0; i < size; i++) {
    scanf("%d", &nums[i]);
    }

  int val;
  printf("Enter value to remove: ");
  scanf("%d", &val);

  int k = removeElement(nums, size, val);

  printf("Number of elements not equal to %d: %d\n", val, k);

  printf("Array after removal: ");
  for (int i = 0; i < k; i++) {
      printf("%d ", nums[i]);
    }

  return 0;
}