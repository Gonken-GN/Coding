a = int(input("Input penghasilan: "))
if a < 1000000:
	print("tidak kena pajak")
elif a >= 1000000 and a <= 2000000:
	print("pajaknya 5%")
elif a >= 2000000 and a <= 5000000:
	print("pajaknya 10%")
elif a > 5000000:
	print("pajaknya 20%")