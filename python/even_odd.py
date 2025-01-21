#WAP to input a 4-digit number in python and print the even and odd digit and the total even and odd digits

num = int(input("Enter a 4-digit number: "))
even_digits = []
odd_digits = []
for digi in str(num):
    if int(digi) % 2 == 0:
        even_digits.append(digi)
    else:
        odd_digits.append(digi)
print("Even digits:", even_digits) #prnts_as_list
print("Odd digits:", " ".join(odd_digits)) #prints sepatrate with comma
print("Total even digits:", len(even_digits))
print("Total odd digits:", len(odd_digits))
