[![Open Source Love](https://badges.frapsoft.com/os/v1/open-source.svg?style=flat)](https://github.com/ellerbrock/open-source-badges/)
[![License: MIT](https://img.shields.io/badge/License-MIT-blue.svg?logo=github&color=%23F7DF1E)](https://opensource.org/licenses/MIT)
![GitHub last commit](https://img.shields.io/github/last-commit/devancakra/Automatic-Items-Counter-on-STM8-based-Conveyor)
![Project](https://img.shields.io/badge/Project-STM8-light.svg?style=flat&logo=arduino&logoColor=white&color=%23F7DF1E)

# Automatic-Items-Counter-on-STM8-based-Conveyor
<strong>Proyek Tunggal: Penghitung Barang Otomatis pada Konveyor berbasis STM8</strong><br><br>
Barang-barang diangkut oleh konveyor melewati sinar laser. Pada saat yang sama, sistem akan menghitung jumlah barang. Cahaya konstan yang dipancarkan oleh laser ini digunakan sebagai pemicu dalam pembacaan sensor. Sensor akan mengukur tinggi-rendahnya intensitas cahaya yang masuk. Dalam keadaan normal, intensitas cahaya yang diterima itu tinggi. Jika intensitas cahaya yang diterima itu rendah, maka bisa dipastikan ada objek yang sedang melintas. Adapun hasil perhitungannya akan ditampilkan pada layar OLED. Karya ini mungkin akan berguna bagi para pelaku bisnis karena dapat meningkatkan efisiensi dalam produksi.

<br><br>

## Kebutuhan Proyek
| Bagian | Deskripsi |
| --- | --- |
| Papan Pengembangan | STM8S103F3P6 |
| Editor Kode | Arduino IDE |
| Alat Pemrogram | ST-Link/V2 |
| Alat Komunikasi Serial | FTDI FT232RL |
| Driver | ST-Link |
| Protokol Komunikasi | Inter Integrated Circuit (I2C) |
| Bahasa Pemrograman | C/C++ |
| Pustaka Arduino | ? |
| Sensor | • LDR: Resistor Cahaya (x1)<br>• KY-008: Modul Pemancar Laser 5V (x1) |
| Layar | OLED I2C (x1) |
| Komponen Lainnya | • Kabel Mikro USB - USB tipe A (x1)<br>• Kabel Mini USB - USB tipe A (x1)<br>• Kabel jumper (1 set)<br>• Adaptor DC 5V (x1)<br>• Breadboard (x1)<br>• Resistor (1 set) |

<br><br>

## Unduh & Instal
1. Arduino IDE

   <table><tr><td width="810">

   ```
   https://www.arduino.cc/en/software
   ```

   </td></tr></table><br>

2. ST-Link Driver

   <table><tr><td width="810">
   
   ```
   https://bit.ly/STLink_Driver
   ```

   </td></tr></table>
   
<br><br>

## Rancangan Proyek
<table>
<tr>
<th width="420">Diagram Blok</th>
<th width="420">Diagram Ilustrasi</th>
</tr>
<tr>
<td><img src="https://github.com/devancakra/Automatic-Items-Counter-on-STM8-based-Conveyor/assets/54527592/b7624237-778d-44be-ab74-e561b94d51a1" alt="Block-Diagram"></td>
<td><img src="https://github.com/devancakra/Automatic-Items-Counter-on-STM8-based-Conveyor/assets/54527592/0e428d27-71ab-4b51-9342-3b99c144187d" alt="Pictorial-Diagram"></td>
</tr>
</table>
<table>
<tr>
<th width="840">Pengkabelan</th>
</tr>
<tr>
<td><img width="840" src="https://github.com/devancakra/Automatic-Items-Counter-on-STM8-based-Conveyor/assets/54527592/415bce1e-be75-4d95-bb26-5361f34402bf" alt="Wiring"></td>
</tr>
</table>

<br><br>

## Pengaturan Arduino IDE
1. Buka ``` Arduino IDE ``` terlebih dahulu, kemudian buka proyek ini dengan cara klik ``` File ``` -> ``` Open ``` :

   <table><tr><td width="810">
   
      ``` auto_counter.ino ```

   </td></tr></table><br>
   
2. Isi ``` Url Pengelola Papan Tambahan ``` di Arduino IDE

   <table><tr><td width="810">
      
   Klik ``` File ``` -> ``` Preferences ``` -> masukkan ``` Boards Manager Url ``` dengan menyalin tautan berikut :
   
   ```
   https://github.com/tenbaht/sduino/raw/master/package_sduino_stm8_index.json
   ```

   </td></tr></table><br>
   
3. ``` Pengaturan Board ``` di Arduino IDE

   <table>
      <tr><th width="810">
            
      Cara mengatur board ``` STM8S103F3P6 ```
   
      </th></tr>
      <tr><td>

      • Klik ``` Tools ``` -> ``` Board ``` -> ``` Boards Manager ``` -> Instal ``` Sduino STM8 plain C core (non-C++) ```.

      • Kemudian pilih Board dengan mengklik: ``` Tools ``` -> ``` Board ``` -> ``` STM8S Boards ``` -> ``` STM8S103F3 Breakout Board ```.
              
      </td></tr>
   </table><br>
   
4. ``` Ubah Pemrogram ``` di Arduino IDE

   <table><tr><td width="810">
      
   Klik ``` Tools ``` -> ``` Programmer ``` -> ``` ST-Link/V2 ```

   </td></tr></table><br>
   
5. Sebelum mengunggah program, silakan klik: ``` Verify ```.<br><br>

6. Jika tidak ada kesalahan dalam kode program, silakan klik: ``` Upload ```.<br><br>

7. Jika masih ada masalah saat unggah program, maka coba periksa pada bagian ``` driver ``` / ``` port ``` / ``` yang lainnya ```.

<br><br>

## Pengaturan Alat Pemrogram: ST-Link/V2
<img width="840" src="https://github.com/devancakra/Automatic-Items-Counter-on-STM8-based-Conveyor/assets/54527592/989711ed-6397-4819-aa6a-0fee6da782e8"><br><br>

<strong>Catatan :</strong>

   <table><tr><td width="840">

   • Modul antarmuka kabel tunggal atau ``` SWIM ``` pada dasarnya digunakan untuk berkomunikasi dengan board ``` STM8 ```.
   
   • Pemasangan kabel antara ``` ST-Link/V2 ``` dengan board ``` STM8 ``` dapat anda lihat selengkapnya pada gambar di atas.

   • Berdasarkan pengalaman pribadi, ``` STM8 ``` hanya dapat diprogram dengan ``` ST-Link ```.

   </td></tr></table><br>

<br><br>

## Pengaturan Alat Komunikasi Serial: FTDI FT232RL
<img width="840" src=""><br><br>

<strong>Catatan :</strong>

   <table><tr><td width="840">

   • Komunikasi serial pada board ``` STM8 ``` ini sangat dimungkinkan terjadi, terutama untuk keperluan ``` Serial Monitor ``` dan ``` Serial Plotter ```. Penggunaan ``` FTDI FT232RL ``` dan ``` PL2303 ``` sangat direkomendasikan.
   
   • Pemasangan kabel antara ``` FTDI FT232RL ``` dengan board ``` STM8 ``` dapat anda lihat detailnya pada gambar di atas.

   </td></tr></table><br>

<br><br>

## Menghilangkan proteksi penulisan pada STM8
Proteksi penulisan pada ``` STM8 ``` dapat dihilangkan melalui beberapa tahapan, antara lain :<br><br>
1. Membuka ``` CMD (Command Prompt) ```.<br><br>

2. Masuk ke dalam direktori :

   <table><tr><td width="810">

   ``` C:\Users\[Computer Name]\AppData\Local\Arduino15\packages\sduino\tools\STM8Tools\2019.02.05\win ```

   </td></tr></table><br>

3. Masukan perintah :

   <table><tr><td width="810">
   
   ```
   stm8flash -cstlinkv2 -pstm8s103?3 -u
   ```

   </td></tr></table><br>
   
4. Tekan ``` Enter ```, lalu hasilnya dapat anda lihat seperti gambar di bawah ini.
   
   <img width="810" height="500" src="https://github.com/devancakra/Automatic-Items-Counter-on-STM8-based-Conveyor/assets/54527592/6a0e5380-5999-4ea5-bdec-aa2167e08915">

<br><br>

## Memulai
1. Unduh dan ekstrak repositori ini.<br><br>
   
2. Pastikan anda memiliki komponen elektronik yang diperlukan.<br><br>
   
3. Pastikan komponen anda telah dirancang sesuai dengan diagram.<br><br>
    
4. Konfigurasikan perangkat anda menurut pengaturan di atas.<br><br>

5. Selamat menikmati [Selesai].

<br><br>

## Sorotan
<img width="840" src="" alt="auto_items_counter">

<br><br>

## Penafian
Aplikasi ini dibuat dengan menyertakan sumber-sumber dari pihak ketiga. Pihak ketiga di sini adalah penyedia layanan, yang layanannya berupa pustaka, kerangka kerja, dan lain-lain. Saya ucapkan terima kasih banyak atas layanannya. Telah terbukti sangat membantu dan dapat diimplementasikan.

<br><br>

## LISENSI
LISENSI MIT - Hak Cipta © 2024 - Devan C. M. Wijaya, S.Kom

Dengan ini diberikan izin tanpa biaya kepada siapa pun yang mendapatkan salinan perangkat lunak ini dan file dokumentasi terkait perangkat lunak untuk menggunakannya tanpa batasan, termasuk namun tidak terbatas pada hak untuk menggunakan, menyalin, memodifikasi, menggabungkan, mempublikasikan, mendistribusikan, mensublisensikan, dan/atau menjual salinan Perangkat Lunak ini, dan mengizinkan orang yang menerima Perangkat Lunak ini untuk dilengkapi dengan persyaratan berikut:

Pemberitahuan hak cipta di atas dan pemberitahuan izin ini harus menyertai semua salinan atau bagian penting dari Perangkat Lunak.

DALAM HAL APAPUN, PENULIS ATAU PEMEGANG HAK CIPTA DI SINI TETAP MEMILIKI HAK KEPEMILIKAN PENUH. PERANGKAT LUNAK INI DISEDIAKAN SEBAGAIMANA ADANYA, TANPA JAMINAN APAPUN, BAIK TERSURAT MAUPUN TERSIRAT, OLEH KARENA ITU JIKA TERJADI KERUSAKAN, KEHILANGAN, ATAU LAINNYA YANG TIMBUL DARI PENGGUNAAN ATAU URUSAN LAIN DALAM PERANGKAT LUNAK INI, PENULIS ATAU PEMEGANG HAK CIPTA TIDAK BERTANGGUNG JAWAB, KARENA PENGGUNAAN PERANGKAT LUNAK INI TIDAK DIPAKSAKAN SAMA SEKALI, SEHINGGA RISIKO ADALAH MILIK ANDA SENDIRI.
