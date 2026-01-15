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


```

3. sedangkan dalam pointer saat kita mengizinkan ada data kosong yg nanti akan di isi dengan Nullptr oleh system default

# DAY 5 & 6 |
-------------


1. saya membuat logika menghitung range, swing high,swing low market,

2. saya juga belaja penting nya memastikan agar program tetap hidup dam terhindar dari crash

## insight :

1. program yg mengalami crash lebih berbahaya dari pada Error sytax dan Error yg terkendali

2. enginer berfikir agar program bisa tetap hidup saat erro terjadi,bukan agar program terhindar dari error

3. maka dari itu enginer penting memahami guard clause

# DAY 7 |
---------

## insight :

### kasus parsing data csv dengan getline()

[] Masalah header CSV dan data isi CSV yg mesti dipisahkan

    dalam kasus pemisahan header,sebelumnya saya paham bahwa untuk parsing csv di c++ kita memerlukan looping namun masalahnya jika data itu berupa integer atau bilangan decimal tentu bagi saya sebagai pemula kebingungan dalam menanhani header yg berupa string dan dapat mengakibatkan crash pada progaram,maka dari itu saya perlu memanggil getline() di luar looping untuk khusus menyimpan header file csv:
``` cpp
    void CSVRead(const std::string& file name){
        std::ifstream file(file name);
        std::string line;

        getline(file,line);//untuk header
        while(getline(line,file){
            //looping logika parsing
        }
```


[] Solusi Agar Program Mampu Bisa Menangani File yg Memiliki Header atau Tidak

Solusi agar program dapat menangani file data yg memiliki header atau tidak dengan menggunakan try di dalam looping
    jelasnya seperti perulangan ini:
```cpp
    while(getline(file,line)){
        std::stringstream ss(line)
        std::string temp;
        Data data;//untuk parsing csv ke struct
        try{

            if(!getline(ss,temp,',') continue;
            data.h1 = temp;
            //dan logika seterusnya
        }
        catch{
            // logika jika file rusak
            continue
        }
    }
    ```





