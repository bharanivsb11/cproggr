str1=raw_input("Enter first string:")
str2=raw_input("Enter second string:")
count1=0
count2=0
for i in str1:
      count1=count1+1
for j in str2:
      count2=count2+1
if(count1<count2):
      print("Larger string is:")
      print(str2)
elif(count1==count2):
      print("Both strings are equal.")
      print(str1)
else:
      print("Larger string is:")
      print(str1)
