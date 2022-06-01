def main():
	n=int(input("Enter matrix size:"))
	i=1

	while(i<=n):
		j=1
		while(j<=n):
			print("*",end=" ")
			j=j+1
		print()
		i=i+1

if(__name__=="__main__"):
	main()
