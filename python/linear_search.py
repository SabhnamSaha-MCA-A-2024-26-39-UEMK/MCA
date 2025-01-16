"""Linear Search"""
arr=[1,9,8,7,3,5,4,2]
searchv=7
found=False
for i in range(len(arr)):
    if arr[i]==searchv:
        found=True
        print(f"Element found at {i+1}th place")
        break
if not found:
    print("Element not found")
