def quick_sort(list1):
    if len(list1) <= 1:
        return list1
    else:
        pivot = list1[0]
        lesser = [x for x in list1[1:] if x <= pivot]
        greater = [x for x in list1[1:] if x > pivot]
        return quick_sort(lesser) + [pivot] + quick_sort(greater)

# Example usage:
data = [23, 43, 32, 43, 12, 34, 24, 53, 41, 12, 16, 13]
sorted_data = quick_sort(data)
print(sorted_data)
