num = input("Enter a 10-digit number: ")
if len(num) == 10 and num.isdigit():
    greatest_digit = max(num)
    print("The greatest digit is:", greatest_digit)
else:
    print("Please enter a valid 10-digit number.")
