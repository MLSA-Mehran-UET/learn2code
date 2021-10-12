Name=input("Enter your name:")
Roll_no=input("Enter your roll no")
Total_marks=425
English=int(input("Enter you English marks out of 75:"))
Pak_Studies=int(input("Enter you Pakistan Studies marks out of 75:"))
Computer=int(input("Enter you Computer marks out of 100:"))
Chemistry=int(input("Enter you Chemistry marks out of 100:"))
Sindhi=int(input("Enter you Sindhi marks out of 75:"))
Total_obtained_marks=(English+Pak_Studies+Computer+Chemistry+Sindhi)
Percentage=((Total_obtained_marks/Total_marks)*100)
print("*********************************************************** \n")
print("\t \t  \" MARKSHEET SSC PART 1 \"  \n")
print("Name        :",Name)
print("Roll number : ",Roll_no)
print("Subjects          Total Obtained ")
print("English Marks     "," 75  ",English)
print("Pak Studies Marks "," 75  ",Pak_Studies)
print("Computer Marks    "," 100 ",Computer)
print("Chemistry Marks   "," 100 ",Chemistry)
print("Sindhi Marks      "," 75  ",Sindhi)
print("------------------------------------")
print("                  ",Total_marks," ",Total_obtained_marks)
print("\n")
if Percentage <= 100 and Percentage >= 80 :
    print("\t\" Your percentage is",Percentage,"and you got A+ Grade \"")
elif Percentage < 80 and Percentage >= 70 :
    print("\t\" Your percentage is",Percentage,"and you got A Grade \"")
elif Percentage < 70 and Percentage >= 60 : 
    print("\t\" Your percentage is",Percentage,"and you got B Grade \"")
elif Percentage < 60 and Percentage >= 50 : 
    print("\t\" Your percentage is",Percentage,"and you got C Grade \"")
elif Percentage < 50 and Percentage >= 40 : 
    print("\t\" Your percentage is",Percentage,"and you got D Grade \"")
else:
    print("\t\" You are fail \"")

print("\n ************************************************************")