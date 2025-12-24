n = int(input("Enter Size of the Array : "))

arr = []
flag = 0

print("Enter Array Elements :")
for i in range(n):
    arr.append(int(input()))

key = int(input("Enter The Element You Would like to Search in this Array : "))

for i in range(n):
    if arr[i] == key:
        print("Element Found at index", i)
        flag = 1
        break

if flag == 0:
    print("Element Not Found!")
