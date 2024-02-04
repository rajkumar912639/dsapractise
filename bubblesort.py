def bubble_sort(data):
    for r in range(1, len(data)):
        for i in range(len(data) - r):
            if data[i] > data[i + 1]:
                data[i], data[i + 1] = data[i + 1], data[i]
    return data


data = [23, 43, 32, 43, 12, 34, 24, 53, 41, 12, 16, 13]
sorted_data = bubble_sort(data)
print(sorted_data)
