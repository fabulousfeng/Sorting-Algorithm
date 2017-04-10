def heap_insert(x, l):
    l.append(x)
    n = len(l) - 1
    while n >= 1 and l[n] < l[int((n-1)/2)]:
        l[n], l[int((n-1)/2)] = l[int((n-1)/2)], l[n]
        n = int((n - 1)/2)
def heap_extract(l):
    # extract the root and put last to root
    l[0], l[len(l) - 1]  = l[len(l) - 1], l[0]
    res = l.pop(len(l) - 1)
    index, minindex, minval = 0, 0, 0
    while((2*index+1)<len(l)):
        if (2*index+2) == len(l):
            minval = l[2*index+1]
            minindex = 2*index+1
        elif l[2*index+1] < l[2*index+2]:
            minval = l[2*index+1]
            minindex = 2*index+1
        else :
            minval = l[2*index+2]
            minindex = 2*index+2
        if l[index] > minval:
            l[index], l[minindex] = l[minindex], l[index]
            index = minindex
        else:
            break
    return res
def heap_sort(l):
    r = list()
    for x in l:
        heap_insert(x, r)
    for i in range(len(l)):
        l[i] = heap_extract(r)

data = []
n = int(input('Enter how many elements you want: '))
for i in range(0, n):
    x = int(input('Enter the numbers into the array: '))
    data.append(x)
print('Original data is:', data)
heap_sort(data)
print('Sorted data is:', data)
