def quick_sort(mydata):
    if len(mydata) <= 1:
        return mydata
    pivot = mydata[0]
    less = [x for x in mydata[1:] if x <= pivot]
    greater = [x for x in mydata[1:] if x > pivot]
    return quick_sort(less) + [pivot] + quick_sort(greater)

mydata = [7, 15, 39, 1, 8, 70]
sorted_data = quick_sort(mydata)
print(sorted_data)
