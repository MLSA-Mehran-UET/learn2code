# Bill Splitter for Restaurants

total = int(input("Enter Total Bill Amount:"))
friends = int(input("Enter number of Friends:"))

eachPays = total/friends

print("Each person pays",round(eachPays, 2),'/- Rupees')