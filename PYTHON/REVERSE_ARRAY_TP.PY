n = int(input("Enter The size of the Array : "))

arr = list(map(int, input("Enter Array Elements : ").split()))

start = 0
end = n - 1

while start < end:
    arr[start], arr[end] = arr[end], arr[start]
    start += 1
    end -= 1

print("Reversed Array : ", end="")
for num in arr:
    print(num, end=" ")
