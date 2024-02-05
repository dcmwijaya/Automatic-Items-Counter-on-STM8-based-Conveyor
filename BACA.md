[![Open Source Love](https://badges.frapsoft.com/os/v1/open-source.svg?style=flat)](https://github.com/ellerbrock/open-source-badges/)
[![License: MIT](https://img.shields.io/badge/License-MIT-blue.svg?logo=github&color=%23F7DF1E)](https://opensource.org/licenses/MIT)
![GitHub last commit](https://img.shields.io/github/last-commit/devancakra/Automatic-Items-Counter-on-STM8-based-Conveyor)
![Project](https://img.shields.io/badge/Project-STM8-light.svg?style=flat&logo=arduino&logoColor=white&color=%23F7DF1E)

# Automatic-Items-Counter-on-STM8-based-Conveyor
<strong>Proyek Tunggal: Penghitung Barang Otomatis pada Konveyor berbasis STM8</strong><br><br>
Alat ini dapat menghitung setiap objek yang diangkut oleh konveyor melalui sinar laser. STM8 digunakan oleh penulis dalam proyek ini karena memiliki kecepatan berpikir yang tinggi dan unggul dalam hal kinerja.

<br><br>

## Kebutuhan Proyek
| Bagian | Deskripsi |
| --- | --- |
| Papan Pengembangan | STM8S103F3P6 |
| Editor Kode | Arduino IDE |
| Alat Pemrogram | ST-Link/V2 |
| Driver | ST-Link |
| Bahasa Pemrograman | C/C++ |
| Sensor | KY-008 Laser Head 5V 650NM (x1) |
| Komponen Lainnya | Kabel Mikro USB - USB tipe A (x1), Kabel jumper (1 set), Adaptor DC 5V (x1), Breadboard (x1), dan Sekrup (1 set) |

<br><br>

## Unduh & Instal
1. Arduino IDE

   ```
   https://www.arduino.cc/en/software
   ```
<br>

2. ST-Link Driver

   ```
   https://bit.ly/STLink_Driver
   ```
   
<br><br>

## Rancangan Proyek
<table>
<tr>
<th width="420">Diagram Blok</th>
<th width="420">Diagram Ilustrasi</th>
</tr>
<tr>
<td><img src="" alt="Block-Diagram"></td>
<td><img src="" alt="Pictorial-Diagram"></td>
</tr>
</table>
<table>
<tr>
<th width="840">Pengkabelan</th>
</tr>
<tr>
<td><img src="" alt="Wiring"></td>
</tr>
</table>

<br><br>

## Pengaturan Arduino IDE
1. Buka ``` Arduino IDE ``` terlebih dahulu, kemudian buka proyek ini dengan cara klik: ``` File ``` -> ``` Open ``` -> ``` auto_counter.ino ```.<br><br>
   
2. Isi ``` Url Pengelola Papan Tambahan ``` di Arduino IDE<br><br>
   • Cara: klik ``` File ``` -> ``` Preferences ``` -> masukkan ``` Boards Manager Url ``` dengan menyalin tautan berikut:
   
   ```
   https://github.com/tenbaht/sduino/raw/master/package_sduino_stm8_index.json
   ```
   
3. ``` Pengaturan Board ``` di Arduino IDE<br><br>
   • Cara: klik ``` Tools ``` -> ``` Board ``` -> ``` Boards Manager ``` -> Instal ``` Sduino STM8 plain C core (non-C++) ```. Kemudian pilih Board dengan mengklik: ``` Tools ``` -> ``` Board ``` -> ``` STM8S Boards ``` -> ``` STM8S103F3 Breakout Board ```.<br><br>
   
4. ``` Ubah Pemrogram ``` di Arduino IDE<br><br>
   • Cara: klik ``` Tools ``` -> ``` Programmer ``` -> ``` ST-Link/V2 ```.<br><br>
   
5. ``` Pengaturan Port ``` di Arduino IDE<br><br>
   • Cara: klik ``` Port ``` -> Pilih sesuai dengan port perangkat Anda ``` (Anda dapat melihatnya di Device Manager) ```.<br><br>

6. Silakan klik: ``` Upload ```.

<br><br>

## Pengaturan Alat Pemrogram: ST-Link/V2
<img src=""><br><br>

<strong>Catatan :</strong>

   • Modul antarmuka kabel tunggal atau ``` SWIM ``` pada dasarnya digunakan untuk berkomunikasi dengan board ``` STM8 ```.
   
   • Pemasangan kabel antara ``` ST-Link/V2 ``` dengan board ``` STM8 ``` dapat anda lihat selengkapnya pada gambar di atas.

<br><br>

## Memulai
1. Unduh dan ekstrak repositori ini.<br><br>
   
2. Pastikan anda memiliki komponen elektronik yang diperlukan.<br><br>
   
3. Pastikan komponen anda telah dirancang sesuai dengan diagram.<br><br>
    
4. Konfigurasikan perangkat anda menurut pengaturan di atas.<br><br>

5. Selamat menikmati [Selesai].

<br><br>

## Sorotan
<img src="" alt="auto_items_counter">

<br><br>

## LISENSI
LISENSI MIT - Hak Cipta © 2024 - Devan C. M. Wijaya, S.Kom

Dengan ini diberikan izin tanpa biaya kepada siapa pun yang mendapatkan salinan perangkat lunak ini dan file dokumentasi terkait perangkat lunak untuk menggunakannya tanpa batasan, termasuk namun tidak terbatas pada hak untuk menggunakan, menyalin, memodifikasi, menggabungkan, mempublikasikan, mendistribusikan, mensublisensikan, dan/atau menjual salinan Perangkat Lunak ini, dan mengizinkan orang yang menerima Perangkat Lunak ini untuk dilengkapi dengan persyaratan berikut:

Pemberitahuan hak cipta di atas dan pemberitahuan izin ini harus menyertai semua salinan atau bagian penting dari Perangkat Lunak.

DALAM HAL APAPUN, PENULIS ATAU PEMEGANG HAK CIPTA DI SINI TETAP MEMILIKI HAK KEPEMILIKAN PENUH. PERANGKAT LUNAK INI DISEDIAKAN SEBAGAIMANA ADANYA, TANPA JAMINAN APAPUN, BAIK TERSURAT MAUPUN TERSIRAT, OLEH KARENA ITU JIKA TERJADI KERUSAKAN, KEHILANGAN, ATAU LAINNYA YANG TIMBUL DARI PENGGUNAAN ATAU URUSAN LAIN DALAM PERANGKAT LUNAK INI, PENULIS ATAU PEMEGANG HAK CIPTA TIDAK BERTANGGUNG JAWAB, KARENA PENGGUNAAN PERANGKAT LUNAK INI TIDAK DIPAKSAKAN SAMA SEKALI, SEHINGGA RISIKO ADALAH MILIK ANDA SENDIRI.