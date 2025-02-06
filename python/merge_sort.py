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

mydata = [7, 15, 39, 1, 8, 70]
sorted_data = merge_sort(mydata)
print(sorted_data)
