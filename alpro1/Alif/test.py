x = int(input("Jumlah list: "))
list = [x]

print("Masukkan Nama: ")
j = 1
for i in range (x):
	nama = input("{}. ".format(j))
	j = j + 1
	list.insert(i, nama)

a = input("Masukkan Nama Yang Dicari: ")

if a in list:
	print("{} ada".format(a))
else:
	print("Tidak Ada")

for i in range (x):
	b = len(list[i])

	print("jumlah huruf tiap nama: {}".format(b))