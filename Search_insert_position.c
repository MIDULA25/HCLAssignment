int searchInsert(int* nums, int numsSize, int target) {
    int pos=0;
    int index,flag=0;
    for(int i=0;i<numsSize;i++){
        index=i;
        if(target>nums[i]){
            pos=i+1;
        }
        if(target==nums[i]){
            flag=1;
            return index;
        }
    }
    if(flag==0){
        return pos;
    }

    

int searchInsert(int* nums, int numsSize, int target) {
    
    int left = 0;
    int right = numsSize - 1;
    
    while (left <= right) {
        
        int mid = left + (right - left) / 2;
        
        if (nums[mid] == target) {
            return mid;              
        }
        else if (nums[mid] < target) {
            left = mid + 1;          
        }
        else {
            right = mid - 1;         
        }
    }
    
    return left;
}
