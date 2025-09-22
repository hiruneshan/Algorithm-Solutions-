
def Bubble_Sort(my_list):
    n = len(my_list)

    for i in range(n - 1):
        for j in range(n - 1 -i):
            if my_list[j] > my_list[j + 1]:
                my_list[j], my_list[j + 1] = my_list[j+ 1], my_list[j]



#in case the list is sorted, if there are no swaps, the flag will remain false and will not enter the loop again
def BubbleSort(my_list):
    n = len(my_list)
    swapped = True

    i = 0

    while i < n - 1 and swapped:
        swapped = False

        for j in range (n - 1 - i):
            if my_list[j] > my_list[j + 1]:
                my_list[j], my_list[j + 1] = my_list[j + 1], my_list[j]

                swapped = True
        i + 1


def selection_sort(my_list):
    for i in range( my_list ):
        min_index = i

        for j in range( i + 1, n ):
            if my_list[j] < my_list[min_index]:
                min_index = j # gives the current index of j as the min index if so

        if min_index != i:
            my_list[min_index], my_list[i] = my_list[i], my_list[min_index]


def insertion_sort (my_list):
    for i in range(my_list):
        curr = my_list[i]

        j = i
        while j > 0 and my_list[j - 1] > curr:
            my_list[j] = my_list[j - 1]
            j -= 1 # goes to the prev value
        my_list[j] = curr # curr will go the one before since we deducted one

