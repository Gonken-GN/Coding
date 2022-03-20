import json

nama = input("Masukkan Nama: ")
nim = int(input("Masukkan NIM: "))

mhs_dict = {}
mhs_dict["Nama"] = nama
mhs_dict["NIM"] = nim

mhs_json = json.dumps(mhs_dict)

with open('mhs.txt', 'wt') as json_file:
	json_file.write(mhs_json)

with open('mhs.txt', 'rt') as json_file:
	mhs_dict = json.load(json_file)

print(mhs_dict["NIM"])
print(mhs_dict["Nama"])





