import json  # module yang menangani json 

str_json = '{"nama": "Budi Martami", "bahasa": ["C++", "Python"]}'
pegawai_dict = json.loads(str_json)  # load json ke dalam dict
print(pegawai_dict)  # print semua
print(pegawai_dict["nama"])  # akses atribut nama
print(pegawai_dict["bahasa"])
bhs_list = pegawai_dict["bahasa"]  # array bahasa
# loop untuk setiap elemen
for bhs in bhs_list:
    print(bhs)
