import json

str_json = '{"nama": "Budi Martani", "Alamat": "Ujung Berung", "Hobi": ["membaca", "berlari"], "anak": [{"nama": "Ahmad", "tgl_lahir": "01-01-2010"}, {"nama": "Wati", "tgl_lahir": "04-07-2014"}]}'

pegawai_dict = json.loads(str_json)
print (pegawai_dict)
print (pegawai_dict["nama"])
print (pegawai_dict["Alamat"])
anak_list = pegawai_dict["anak"]
for anak in anak_list:
	print (anak)