import random
import time

# Quick Sort Implementation
def quick_sort(mydata):
    if len(mydata) <= 1:
        return mydata
    pivot = mydata[0]
    less = [x for x in mydata[1:] if x <= pivot]
    greater = [x for x in mydata[1:] if x > pivot]
    return quick_sort(less) + [pivot] + quick_sort(greater)

# Merge Sort Implementation
def merge_sort(mydata):
    if len(mydata) <= 1:
        return mydata
    mid = len(mydata) // 2
    left_half = merge_sort(mydata[:mid])
    right_half = merge_sort(mydata[mid:])
    return merge(left_half, right_half)

def merge(left, right):
    sorted_list = []
    i = j = 0
    while i < len(left) and j < len(right):
        if left[i] < right[j]:
            sorted_list.append(left[i])
            i += 1
        else:
            sorted_list.append(right[j])
            j += 1
    sorted_list.extend(left[i:])
    sorted_list.extend(right[j:])
    return sorted_list

# Generate a random list of 1000 numbers for testing
data = [random.randint(1, 10000) for _ in range(1000)]

# Timing Quick Sort
start_time = time.time()
quick_sort(data.copy())  # Sort a copy of the data using Quick Sort
quick_sort_time = time.time() - start_time

# Timing Merge Sort
start_time = time.time()
merge_sort(data.copy())  # Sort a copy of the data using Merge Sort
merge_sort_time = time.time() - start_time

# Display results
print(f"Quick Sort Time: {quick_sort_time:.6f} seconds")
print(f"Merge Sort Time: {merge_sort_time:.6f} seconds")
