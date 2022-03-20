#Sistem mengelola data mahasiswa

n = int(input("Jumlah Mahasiswa: "))
namaMahasiswa = []
nimMahasiswa = []
j = 1

print("Masukkan Nama dan NIM Mahasiswa Sesuai Abjad :")

for i in range (n):
	nama = input("{}. ".format(j))
	nim = input("NIM : ")
	namaMahasiswa.insert(i, nama)
	nimMahasiswa.insert(i, nim)
	j = j + 1


for i in range (n):
	print("{} {}".format(namaMahasiswa[i], nimMahasiswa[i]))

print("Data Mahasiswa")
print("1. Lihat Data")
print("2. Tambah Data")
print("3. Cari Data")
print("4. Hapus Data")
print("5. Update Data")

masukan = 0

while(masukan != "berhenti"):
	masukan = int(input("Pilih Menu: "))

	if masukan == 1:
		for i in range (n):
			print("{} {}".format(namaMahasiswa[i], nimMahasiswa[i]))
		masukan = input("Apakah ingin berhenti: ")

	if masukan == 2:
		a = int(input("Berapa Jumalah Mahasiswa yang ingin ditambah? "))
		i = 0
		n = n + a
		for i in range (a):
			tambahMahasiswa = input("Nama: ")
			namaMahasiswa.append(tambahMahasiswa)
			tambahNim = int(input("Nim: "))
			nimMahasiswa.append(tambahNim)

		for i in range (n):
			print("{} {}".format(namaMahasiswa[i], nimMahasiswa[i]))
		masukan = input("Apakah ingin berhenti: ")

	if masukan == 3:
		print("Masukan Nim mahasiswa yang ingin dicari: ")
		nim = input("Nim: ")
		i = 0
		while i<n:
			if nim == nimMahasiswa[i]:
				print(namaMahasiswa[i])
			i = i + 1
		masukan = input("Apakah ingin berhenti: ")

	if masukan == 4:
		print("Masukan Nama mahasiswa yang ingin dihapus:")
		hapus = input("Nama: ")
		i = 0
		while i<n:
			if hapus == namaMahasiswa[i]:
				namaMahasiswa.remove(hapus)
				nimMahasiswa.remove(nimMahasiswa[i])
				n = n - 1
			i = i + 1
		masukan = input("Apakah ingin berhenti: ")




