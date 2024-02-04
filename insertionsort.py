def insertion_sort(data):
    for i in range(1, len(data)):
        key = data[i]
        j = i - 1
        while j >= 0 and key < data[j]:
            data[j + 1] = data[j]
            j -= 1
        data[j + 1] = key
    return data

# Example usage:
data = [23, 43, 32, 43, 12, 34, 24, 53, 41, 12, 16, 13]
sorted_data = insertion_sort(data)
print(sorted_data)
