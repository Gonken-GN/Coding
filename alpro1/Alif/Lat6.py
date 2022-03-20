n = int(input("masukkan jumlah list: "))
listt = []
for i in range (n):
	nilai = float(input("index {} : ".format(i)))
	listt.insert(i, nilai)

	jumlah = 0

for i in range (n):
	jumlah+=listt[i]

print("rata-rata: {}".format(jumlah/n))

maxx = listt[0]
for i in range (n):
	if maxx < listt[i]:
		maxx = listt[i]

print("max = {}".format(maxx))

minn = listt[0]
for i in range (n):
	if minn > listt[i]:
		minn = listt[i]

print("min = {}".format(minn))



	

