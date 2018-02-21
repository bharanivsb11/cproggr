ch="bharani.123"
n=len(ch)
a=0
b=0
for i in range(0,n):
	if(ch[i]>='0' and ch[i]<='9'):
		b=b+1
	if(ch[i]>='a' and ch[i]<='z'):
		a=a+1
if((a and b)>0):
	print "yes"
else:
	print "no"
