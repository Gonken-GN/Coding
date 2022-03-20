#Sistem mengelola data mahasiswa

n = int(input("Jumlah Mahasiswa: "))
namaMahasiswa = []
nimMahasiswa = []
quiz1 = []
quiz2 = []
uts = []
uas = []
j = 1

print("Masukkan Nama dan NIM Mahasiswa :")
i = 0
for i in range (n):
	nama = input("{}. ".format(j))
	nim = int(input("   NIM : "))
	q1 = int(input("   Nilai Quiz 1: "))
	q2 = int(input("   Nilai Quiz 2: "))
	uts1 = int(input("   Nilai UTS: "))
	uas1 = int(input("   Nilai UAS: "))

	namaMahasiswa.insert(i, nama)
	nimMahasiswa.insert(i, nim)
	quiz1.insert(i, q1)
	quiz2.insert(i, q2)
	uts.insert(i, uts1)
	uas.insert(i, uas1)
	j = j + 1

j = 1
for i in range (n):
	print("{}. {} ({})".format(j, namaMahasiswa[i], nimMahasiswa[i]))
	print("   Nilai Quiz 1: {}".format(quiz1[i]))
	print("   Nilai Quiz 2: {}".format(quiz2[i]))
	print("   UTS: {}".format(uts[i]))
	print("   UAS: {}".format(uas[i]))
	j = j + 1

masukan = 0

while(masukan != "y"):
	print("==========================================")
	print("Data Mahasiswa")
	print("==========================================")
	print("1. Lihat Data")
	print("2. Tambah Data")
	print("3. Cari Data")
	print("4. Hapus Data")
	print("5. Rata-rata nilai masing masing Mahasiswa")
	print("6. Rata-rata Kelas")
	print("==========================================")
	masukan = int(input("Pilih Menu: "))

	if masukan == 1:
		j = 1
		for i in range (n):
			print("{}. {} ({})".format(j, namaMahasiswa[i], nimMahasiswa[i]))
			print("   Nilai Quiz 1: {}".format(quiz1[i]))
			print("   Nilai Quiz 2: {}".format(quiz2[i]))
			print("   UTS: {}".format(uts[i]))
			print("   UAS: {}".format(uas[i]))
			j = j + 1

		masukan = input("Apakah ingin berhenti (y/n): ")

	if masukan == 2:
		a = int(input("Berapa Jumlah Mahasiswa yang ingin ditambah? "))
		i = 0
		n = n + a
		for i in range (a):
			tambahMahasiswa = input("Nama: ")
			namaMahasiswa.append(tambahMahasiswa)
			tambahNim = int(input("Nim: "))
			nimMahasiswa.append(tambahNim)
			tambahNilaiQuiz1 = int(input("Nilai Quiz 1: "))
			quiz1.append(tambahNilaiQuiz1)
			tambahNilaiQuiz2 = int(input("Nilai Quiz 2: "))
			quiz2.append(tambahNilaiQuiz2)
			tambahNilaiUTS = int(input("Nilai UTS: "))
			uts.append(tambahNilaiUTS)
			tambahNilaiUAS = int(input("Nilai UAS: "))
			uas.append(tambahNilaiUAS)		

		j = 1
		for i in range (n):
			print("{}. {} ({})".format(j, namaMahasiswa[i], nimMahasiswa[i]))
			print("   Nilai Quiz 1: {}".format(quiz1[i]))
			print("   Nilai Quiz 2: {}".format(quiz2[i]))
			print("   UTS: {}".format(uts[i]))
			print("   UAS: {}".format(uas[i]))
			j = j + 1
		masukan = input("Apakah ingin berhenti (y/n): ")

	if masukan == 3:
		print("Masukan Nim mahasiswa yang ingin dicari: ")
		nim = int(input("Nim: "))
		i = 0
		while i<n:
			if nim == nimMahasiswa[i]:
				print(namaMahasiswa[i])
			elif nim != nimMahasiswa[i] and i == n:
				print("Nama tidak ditemukan")
			i = i + 1

		masukan = input("Apakah ingin berhenti (y/n): ")

	if masukan == 4:
		print("Masukan Nama mahasiswa yang ingin dihapus:")
		hapus = input("Nama: ")
		i = 0
		while i<n:
			if hapus == namaMahasiswa[i]:
				namaMahasiswa.remove(hapus)
				nimMahasiswa.remove(nimMahasiswa[i])
				quiz1.remove(quiz1[i])
				quiz2.remove(quiz2[i])
				uts.remove(uts[i])
				uas.remove(uas[i])

				n = n - 1
				j = 1

			elif hapus != namaMahasiswa[i] and i == n - 1:
				print("Nama yang ingin dihapus tidak ditemukan")
			i = i + 1

			j = 1
		for i in range (n):
			print("{}. {} ({})".format(j, namaMahasiswa[i], nimMahasiswa[i]))
			print("   Nilai Quiz 1: {}".format(quiz1[i]))
			print("   Nilai Quiz 2: {}".format(quiz2[i]))
			print("   UTS: {}".format(uts[i]))
			print("   UAS: {}".format(uas[i]))
			j = j + 1

		masukan = input("Apakah ingin berhenti (y/n): ")

	if masukan == 5:
		j = 1
		for i in range (n):
			print("{}. {} : {}".format(j, namaMahasiswa[i], ((quiz1[i] + quiz2[i] + uts[i] + uas[i])/4)))
			j = j + 1
		masukan = input("Apakah ingin berhenti (y/n): ")

	if masukan == 6:
		totalQuiz1 = 0
		totalQuiz2 = 0
		totalUTS = 0
		totalUAS = 0
		for i in range (n):
			totalQuiz1 = totalQuiz1 + quiz1[i]
			totalQuiz2 = totalQuiz2 + quiz2[i]
			totalUTS = totalUTS + uts[i]
			totalUAS = totalUAS + uas[i]

		ratarataQuiz1 = totalQuiz1/n
		ratarataQuiz2 = totalQuiz2/n
		ratarataUTS = totalUTS/n
		ratarataUAS = totalUAS/n
		rataratamahasiswa = (ratarataQuiz1 + ratarataQuiz2 + ratarataUTS + ratarataUAS)/4

		print("Rata-rata Quiz 1 : {}".format(ratarataQuiz1))
		print("Rata-rata Quiz 2 : {}".format(ratarataQuiz2))
		print("Rata-rata UTS : {}".format(ratarataUTS))
		print("Rata-rata UAS : {}".format(ratarataUAS))
		print("Rata-rata total kelas : {}".format(rataratamahasiswa))

		masukan = input("Apakah ingin berhenti (y/n): ")

