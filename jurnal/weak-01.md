#Day 1   |
----------
1. saya belajar pola fikir seorang enginer yg perlu berfikir jangka panjang dalam perancangan dan pemgembangan,belajar mengerti penting nya jurnal dalam belajar dan pemgembangan agar tidak mengulangi kesalahan yg mirip apalagi sama,saya belajar bagaimana menyusun kerangka kode yg di mulai dengan pemisahan folder kode,data,dan biner,
    saya memulai dasar penulisan kode cpp dan cmake


________________________________________________________
# insight:
 1. fungsi penting jurnal sebenarnya ada pada efek saat kita menulis meskipun kita sebenarnya kita berfikir bahwa kita tidak akan memmabacanya lagi

 2. letak perbedaan seorang enginer adalah bagaimana dia merancang struktur project karna dengan begitu seorang enginer berfikir dalam jangka panjang agar rancangan nya mudah di kembangkan,di uji,dan di pelihara
 sesuai dengan tugas enginer bukan hanya membangun tapi juga merawat yg dia bangun

 3. kode main.cpp harus ringkas dan tidak berbelit2 

______________________________________________________
```
# Error yg ditemui:
1.saya melakukan kesalah sytax dasar di cmake dan main.cpp
```




# DAY 2  |
---------


1. saya mempelajari materi soal loop,dan fungsi
dimana loop adalah soal waktu,sedangkan fungsi adalah otak,ini berarti fungsi tidak boleh mengerjakan print kecuali memang di rancang untuk melalakukan print tertentu di layar perangkat

# DAY 3 |
--------


1. saya belajar sebagian cara menggunakan vector dan sstream 
2. saya juga mempelajari definisi stream


## insight
1. stream adalah sebuah mekanisme abstraksi agar data bisa masuk dan keluar secara teratur tampa perlu di kendalikan oleh program seperti contoh cin yg memasukan data kedalam variable dengan mengambil data dari keyboard,dan getline()dimana untuk mengambil sumber dari arg 1 untuk di keluarkan dalam bentuk data yg disimpan di arg2
```cpp
getline(cin,data);
//ini untuk mengambil string dari cin
```


2.stream memiliki state internal(kursor) sehingga getline() akan membaca data lanjutan dari posisi terakhir di setiap pemanggilan nya

3.kita perlu method  push_back(<element vector>)untuk menambahkan data sebagai element baru vector


# DAY 4|
--------


1. saya mempelajari metode window,dimana window penting agar program bisa berjalan lebih efisien dan dan presisi

2.window adalah sebuah mekanisme mengambil beberapa element terahir untuk diambil oleh program



## **insight** :

1. salah satu kapan kita harus menggunakan dereference (&)dalam argument fungsi adalah untuk menghindari copy paste data yg sama,ini lebih efisien dalam memory dan menghindari program crash saat berjalan

```cpp
int funtion_read_data(const int& number){
//function running               
}
```
2. dan disarankan untuk menambahkan "const" agar data asli tidak ada perubahan yg tidak di inginkan dalam data,karna dereference sendiri untuk merubah data melaui fungsi

```cpp

  
int funtion_change_data(int& number){
    //function berjalan untuk merubah data langsung ke varible asli
}

```

3. sedangkan dalam pointer saat kita mengizinkan ada data kosong yg nanti akan di isi dengan Nullptr oleh system default

