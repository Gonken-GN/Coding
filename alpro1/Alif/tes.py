uangbulanan = int(input("Masukkan pemasukan sebulan: "))
pengeluaranperH = int(input("Masukkan pengeluaran perhari: "))
pengeluaranperB = pengeluaranperH * 30
sisaUang = uangbulanan - pengeluaranperB

print("Sisa Uang: {}".format(sisaUang))