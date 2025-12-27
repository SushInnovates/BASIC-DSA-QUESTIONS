n = int(input("ENTER SIZE OF THE ARRAY : "))

arr = list(map(int, input("ENTER ARRAY ELEMENTS : ").split()))

MAX = arr[0]
for i in range(n):
    if arr[i] > MAX:
        MAX = arr[i]

print("MAXIMUM ELEMENT :", MAX)
