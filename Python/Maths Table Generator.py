# Take input from
number=int(input("Enter Number for Multiplication Table:"))

# i is iterator that starts from 1 and ends at 10
for i in range(1,11):
    # f'' syntex in python is of formatted strings
    # you can add variables in these using { } notation
    print(f"{number} X {i} = {number*i}")
