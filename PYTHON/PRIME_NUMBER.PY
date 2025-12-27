n = int(input("Enter A Number : "))

if n <= 1:
    print("Not a Prime Number")
else:
    isPrime = True

    i = 2
    while i * i <= n:
        if n % i == 0:
            isPrime = False
            break
        i += 1

    if isPrime:
        print("Its a Prime Number")
    else:
        print("Its Not a Prime Number")
