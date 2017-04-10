def mergesort(array):
    if len(array) < 2:
        return
    mid = int(len(array)/2)
    left = array[0:mid]
    right = array[mid:]
    mergesort(left)
    mergesort(right)
    merge(left, right, array)

def merge (left, right, array):
    i, j ,k = 0, 0, 0
    while i < len(left) and j < len(right):
        if left[i] <= right[j]:
            array[k] = left[i]
            k = k + 1
            i = i + 1
        else:
            array[k] = right[j]
            k = k + 1
            j = j + 1
    while i < len(left):
            array[k] = left[i]
            k = k + 1
            i = i + 1
    while j < len(right):
            array[k] = right[j]
            k = k + 1
            j = j + 1

data = []
n = int(input('Enter how many elements you want: '))
for i in range(0, n):
    x = int(input('Enter the numbers into the array: '))
    data.append(x)
print('Original data is:', data)
mergesort(data)
print('Sorted data is:', data)
