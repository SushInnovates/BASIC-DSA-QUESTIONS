s = input("Enter The String : ")

start = 0
end = len(s) - 1
is_palindrome = True

while start < end:
    if s[start] != s[end]:
        is_palindrome = False
        break
    start += 1
    end -= 1

if is_palindrome:
    print("String is Palindrome")
else:
    print("String is Not Palindrome")
