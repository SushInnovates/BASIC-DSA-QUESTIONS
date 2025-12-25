n = int(input("Enter a Number : "))

if n < 0:
    print("Number is Not Palindrome")
else:
    temp = n
    rev = 0

    while n > 0:
        rem = n % 10
        rev = rev * 10 + rem
        n //= 10

    if temp == rev:
        print("Number is Palindrome")
    else:
        print("Number is Not Palindrome")
