def pattern(n):
	i=1
	while(i<=n):
		j=1
		while(j<=n):
			print(i,end="\t")
			j=j+1
		print()
		i=i+1
	'''
	print(n)
	print(type(n))
	'''
	
def pattern2(n):
	i=1
	while(i<=n):
		j=1
		while(j<=n):
			print(j,end="\t")
			j=j+1
		print()
		i=i+1
		
def pattern3(n):
	i=1
	while(i<=n):
		j=1
		while(j<=n):
			print((n-j)+1,end="\t")
			j=j+1
		print()
		i=i+1

def pattern4(n):
	count=1
	i=1
	while(i<=n):
		j=1
		while(j<=n):
			print(count,end="\t")
			count=count+1
			j=j+1
		print()
		i=i+1
		
def triangle(n):
	i=1
	while(i<=n):
		j=1
		while(j<=i):
			print('*',end=" ")
			j=j+1
		print()
		i=i+1
		
def triangle2(n):
	i=1
	while(i<=n):
		j=1
		while(j<=i):
			print(i,end=" ")
			j=j+1
		print()
		i=i+1

def triangle3(n):
	i=1
	count=1
	while(i<=n):
		j=1
		while(j<=i):
			print(count,end="\t")
			j=j+1
			count+=1
		print()
		i=i+1
		
def triangle4(n):
	i=1
	while(i<=n):
		j=1
		value=i
		while(j<=i):
			print(value,end=" ")
			j=j+1
			value+=1
		print()
		i=i+1
		
def triangle5(n):
	i=1
	while(i<=n):
		j=1
		while(j<=i):
			print((i-j)+1,end=" ")
			j=j+1
		print()
		i=i+1
		
def alphaPattern(n):
	row=1
	alpha='A'
	while(row<=n):
		col=1
		while(col<=n):
			print(alpha,end=" ")
			col+=1
		alpha = chr(ord(alpha) + 1)
		row+=1
		print()
		
def alphaPattern2(n):
	row=1
	while(row<=n):
		col=1
		alpha='A'
		while(col<=n):
			print(alpha,end=" ")
			col+=1
			alpha = chr(ord(alpha) + 1)
		row+=1
		print()
		
def alphaPattern3(n):
	row=1
	while(row<=n):
		col=1
		value=65
		while(col<=n):
			print(chr(row+col+value-2),end=" ")
			col+=1
		row+=1
		print()
		
def alphaTriangle(n):
	row=1
	while(row<=n):
		col=1
		while(col<=row):
			print(chr(65+row-1),end=" ")
			col+=1
		row+=1
		print()
#formulaA+4-1
def alphaTriangleR(n):
	row=1
	while(row<=n):
		col=1
		alpha=chr(65+n-row)
		while(col<=row):
			print(alpha,end=" ")
			col+=1
			alpha=chr(ord (alpha)+1);
		row+=1
		print()	

def squareSpace(n):
	row=1
	while(row<=n):
		#pehele space print karlo
		space=n-row;
		while(space):
			print(" ",end="")
			space-=1
		#abhi * print karlo
		col=1;
		while(col<=row):
			print("*",end="")
			col+=1
		print()
		row+=1
		
n=int(input("Enter value of n:"))
squareSpace(n)
 	
