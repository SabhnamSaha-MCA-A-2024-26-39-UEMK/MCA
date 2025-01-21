#Input a 10-digit number and find the digit which is maximum occurences
num = input("Enter a 10-digit number: ")
if len(num) != 10 or not num.isdigit():
    print("Please enter a valid 10-digit number.")
else:
    digit_count = {}
    for digit in num:
        if digit in digit_count:
            digit_count[digit] += 1
        else:
            digit_count[digit] = 1
    max_digit = max(digit_count, key=digit_count.get)
    max_count = digit_count[max_digit]
    print(f"The digit that appears the most is: {max_digit} (appears {max_count} times)")

