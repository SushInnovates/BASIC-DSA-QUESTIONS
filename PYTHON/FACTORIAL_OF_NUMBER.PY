n = int(input("Enter Number : "))

fact = 1

if n <= 0:
    print(f"Factorial of {n} is not possible")
else:
    for i in range(1, n + 1):
        fact *= i
    print(f"Factorial of {n} is {fact}")
