#WAP in python between 1000 and 3000 such that each digit of the number is even digit
for num in range(1000, 3001):
    num_str = str(num)
    if all(int(digit) % 2 == 0 for digit in num_str):
        print(num)
