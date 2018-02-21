a=[1,2,3,4,5]
n=len(a)
for i in range(0,n):
	if(a[0]<a[i]):
		a[0]=a[i]
print a[0]	
