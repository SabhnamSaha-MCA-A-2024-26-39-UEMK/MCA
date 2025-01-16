import array as arr
a=arr.array('i',[1,2,3])
print(a[0])
a.append(5)
print(a)

arr1=[1,2,3,4,5,6]
for i in range (0,len(arr)):
    print(arr[i])

arr2=[[1,2,3],[4,5,6]]
for i in range (0,len(arr2)):
    print(arr2[i])

arr3= [1,2,3,4,5]
print(arr3[2:4])

arr4= [1,2,2,2,3,4,4,5,5,5,5,5,5,5,5,5]
print(arr4.count(5))

arr5=[1,2,3,4,5]
print(arr5[::-1])

arr6=[1,9,2,8,3,7,4,6,5]
search=7
if search in arr6:
    print("Element found")
else:
    print("Element not found")
