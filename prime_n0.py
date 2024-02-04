def prime_sort(data):
    data[0] = 0
    n = len(data)
    for i in range(2, n):
        if data[i] != 0:
            for j in range(i * 2, n, i):
                data[j] = 0
    return [x for x in data if x != 0]

# Example usage:
data = [1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20]
sorted_data = prime_sort(data)
print(sorted_data)
