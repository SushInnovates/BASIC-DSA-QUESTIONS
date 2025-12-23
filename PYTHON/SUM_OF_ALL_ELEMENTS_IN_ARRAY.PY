n = int(input("Enter Size of the Array : "))

arr = []
sum = 0

print("Enter Array Elements :")
for i in range(n):
    arr.append(int(input()))

for num in arr:
    sum += num

print("The Sum of All the Array Elements is", sum)
