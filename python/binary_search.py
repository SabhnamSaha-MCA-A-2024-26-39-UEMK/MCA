arr = [1, 3, 5, 7, 9, 11, 13]
target = 7
low, high = 0, len(arr) - 1
found = False
while low <= high:
    mid = (low + high) // 2 
    if arr[mid] == target:
        found = True
        print(f"Element {target} found at index {mid}")
        break
    elif arr[mid] < target:
        low = mid + 1  
    else:
        high = mid - 1 
if not found:
    print(f"Element {target} not found in the array.")
