a=[10,2,3,4,5,1,6,7,8,9]
n=len(a)
for i in range(0,n):
	if(a[0]<a[i]):
		a[0]=a[i]
print a[0]	
