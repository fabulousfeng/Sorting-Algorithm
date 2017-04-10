def quicksort(array):
    quicksort_helper(array, 0, len(array) - 1)

def quicksort_helper(array, start, end):
    if start < end :
        p = partition(array, start, end)
        quicksort_helper(array,start,p-1)
        quicksort_helper(array,p+1,end)

def partition(array, start, end):
    pivot = array[end]
    pindex = start
    for i in range(start, end):
        if array[i] <= pivot:
            array[i], array[pindex] = array[pindex], array[i]
            pindex = pindex + 1
    array[pindex], array[end] = array[end], array[pindex]
    return pindex

data = []
n = int(input('Enter how many elements you want: '))
for i in range(0, n):
    x = int(input('Enter the numbers into the array: '))
    data.append(x)
print('Original data is:', data)
quicksort(data)
print('Sorted data is:', data)
