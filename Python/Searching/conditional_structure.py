eng,Islam,Maths=-5,-6,-8
TotalMarks=300
percent= (eng+Islam+Maths)/TotalMarks*100
if percent<100 and percent>80:
    print("Grade A+")
elif percent<80 and percent>70:
    print("Grade A")
elif percent<70 and percent>60:
    print("Grade B")
elif percent<60 and percent>50:
    print("Grade C")
elif percent<50 and percent>40:
    print("Grade D")
elif percent<40 and percent>30:
    print("Grade E")
elif percent>0 and percent<30:
    print(" Fail" )
elif percent>100:
    print("Percentage can't be greater than 100!")
elif percent<0:
    print("Percentage can't be negative!")
else:
    print("Something wrong!")