n = int(input("Enter Size of array : "))

arr = list(map(int, input("Array Elements : ").split()))

frequency = {}

for num in arr:
    frequency[num] = frequency.get(num, 0) + 1

for key, value in frequency.items():
    print(f"{key} ---> {value}")
