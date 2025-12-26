# Reverse Array Program

n = int(input("Enter The size of the Array : "))
arr = []

print("Enter Array Elements : ")
for i in range(n):
    arr.append(int(input()))

print("Array Elements : ")
for i in range(n):
    print(arr[i], end=" ")

print("\nReversed Array : ")
for i in range(n - 1, -1, -1):
    print(arr[i], end=" ")
