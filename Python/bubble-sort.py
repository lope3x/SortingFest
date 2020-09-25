def bubbleSort(array):
    for passnum in range(len(array)-1,0,-1):
        for i in range(passnum):
            if array[i] > array[i + 1]:
                aux = array[i]
                array[i] = array[i + 1]
                array[i + 1] = aux

array = []

flag = True
while flag == True:
    try:
        value = int(input("Insira um valor: "))
        array.append(value)
    except ValueError:
        flag = False

bubbleSort(array)
print(array)