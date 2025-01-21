#WAPto input a 10-digit number and print the alternate digits
num = input("Enter a 10-digit number: ")
if len(num) == 10 and num.isdigit():
    alternate_digits = num[::2]
    print("Alternate digits:", alternate_digits)
else:
    print("Please enter a valid 10-digit number.")
