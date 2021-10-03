# Documentation Link :- https://dev.mysql.com/downloads/connector/python/



import mysql.connector                   #importing mysql-connector library to connect python to mysql database
mydb = mysql.connector.connect(
	host = "localhost",
	user = "root",
	password = "password",
	database = "username_password"
	)                                # Adding the necessary credentials to the database to which the python program needs to connect   

mycursor = mydb.cursor()                 #Creating a cursor element to execute all the querrys

site_name = input("Enter the name of the site")   #Taking few inputs for inserting the values into the database
username = input("Enter the username of the site")  #Taking few inputs for inserting the values into the database
password = input("Enter the password of the site")  #Taking few inputs for inserting the values into the database

sql = "INSERT INTO user_details(site_name,username,password) VALUES(%s, %s, %s)"  #Creating a string of querry in my case insert into querry
values = (site_name, username, password)                                          #Creating the input tuple
mycursor.execute(sql,values)							  #Executing the querry using the 2 input strings provided

mydb.commit()									  #commiting the data to the database
