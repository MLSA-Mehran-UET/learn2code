#Generating Marksheet of a Student

#Taking input of name and roll number
Name=input("Enter your name:")
#Enter your name:Javeria
Roll_no=input("Enter your roll no")
#Enter your roll no01

#Total marks 
Total_marks=425

#Taking input of all subjects one by one
English=int(input("Enter you English marks out of 75:"))
#Enter you English marks out of 75:60
Pak_Studies=int(input("Enter you Pakistan Studies marks out of 75:"))
#Enter you Pakistan Studies marks out of 75:70
Computer=int(input("Enter you Computer marks out of 100:"))
#Enter you Computer marks out of 100:100
Chemistry=int(input("Enter you Chemistry marks out of 100:"))
#Enter you Chemistry marks out of 100:90
Sindhi=int(input("Enter you Sindhi marks out of 75:"))
#Enter you Sindhi marks out of 75:65

#Total obtained marks is calculated by adding all subject marks
Total_obtained_marks=(English+Pak_Studies+Computer+Chemistry+Sindhi)

#Calculating percentage by using percentage formula
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

"""
*********************************************************** 

	 	  " MARKSHEET SSC PART 1 "  

Name        : Javeria
Roll number :  01
Subjects          Total Obtained 
English Marks       75   60
Pak Studies Marks   75   70
Computer Marks      100  100
Chemistry Marks     100  90
Sindhi Marks        75   65
------------------------------------
                   425   385
"""

#Printing the Percentage and calculating the grades
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

"""
	" Your percentage is 90.58823529411765 and you got A+ Grade "

 ************************************************************
 """
