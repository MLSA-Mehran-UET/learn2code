import random
#CREATING_RANDOM_LIST
random_list=[]
for i in range(100):
    random_list.append(random.randint(1,100))
print(random_list)
#MINIMUM_NUMBER
minimum_no=[]
minimum_no.append(min(random_list))
print("Minimum value in the list is : " , minimum_no)
#MAXIMUM_NUMBER
maximum_no=[]
maximum_no.append(max(random_list))
print("Maximum value in the list is : " , maximum_no)
#INDEX
print("Index of minimum value in list is : " , random_list.index(min(random_list)))
print("Index of maximum value in list is : " , random_list.index(max(random_list)))
#MEAN_OF_VALUES
mean_of_randomlist=sum(random_list)/len(random_list)
print("Mean of values of list : " , mean_of_randomlist)

