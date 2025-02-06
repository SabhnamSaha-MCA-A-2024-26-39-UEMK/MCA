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

# Bubble Sort Implementation
def bubble_sort(mydata):
    for i in range(len(mydata)):
        for j in range(0, len(mydata) - i - 1):
            if mydata[j] > mydata[j + 1]:
                mydata[j], mydata[j + 1] = mydata[j + 1], mydata[j]

# Generate a random list of 1000 numbers for testing
data = [random.randint(1, 10000) for _ in range(1000)]

# Timing Quick Sort
start_time = time.time()
quick_sort(data.copy())  # Sort a copy of the data using Quick Sort
quick_sort_time = time.time() - start_time

# Timing Bubble Sort
start_time = time.time()
bubble_sort(data.copy())  # Sort a copy of the data using Bubble Sort
bubble_sort_time = time.time() - start_time

# Display results
print(f"Quick Sort Time: {quick_sort_time:.6f} seconds")
print(f"Bubble Sort Time: {bubble_sort_time:.6f} seconds")
