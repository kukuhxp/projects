# NEURAL NETWORK (NN)

Neural Network (NN) / Jaringan Saraf atau Artificial Neural Network (ANN) / Jaringan Saraf Tiruan adalah model komputasi yang meniru cara kerja otak manusia untuk memproses informasi, mengenali pola, dan membuat keputusan.

ANN merupakan fondasi utama dari Deep Learning dan salah satu teknik paling penting dalam Machine Learning. ANN terinspirasi dari neuron biologis di otak manusia. Setiap neuron buatan menerima input, memprosesnya, lalu mengirimkan output ke neuron lain.

Lapisan:

1. Input layer sebagai tempat data mentah masuk.
2. Hidden layer(s) sebagai tempat perhitungan dilakukan.
3. Output layer untuk menghasilkan hasil akhir.

Latihan:

1. Feedforward, proses data mengalir dari input ke output untuk menghasilkan prediksi.
2. Loss, proses membandingkan hasil dengan label sebenarnya.
3. Backpropagation, proses ANN memperbarui bobot untuk mengurangi error.
4. Repeat sampai error sekecil mungkin.

## Deep Neural Network (DNN)

Deep Neural Network (DNN) merupakan perkembangan dari Artificial Neural Network (ANN), namun dengan lebih banyak lapisan di dalamnya, itulah sebabnya disebut deep.

## Feedforward Neural Network (FNN)

Feedforward Neural Network (FNN) adalah jenis jaringan saraf paling dasar, di mana aliran data hanya bergerak satu arah dari input ke output, tanpa ada umpan balik.

Lapisan:

1. Input layer untuk menerima data masukan.
2. Hidden layer(s) untuk memproses data melalui bobot dan fungsi aktivasi.
3. Output layer untuk menghasilkan prediksi atau hasil akhir.

Latihan:

1. Input data dimasukkan ke dalam neuron pada lapisan input.
2. Setiap neuron mengalikan input dengan bobot dan menambahkan bias.
3. Hasilnya dilewatkan ke fungsi aktivasi seperti ReLU, Sigmoid, atau Tanh.
4. Output dari neuron di satu lapisan menjadi input bagi lapisan berikutnya.
5. Pada lapisan terakhir, jaringan menghasilkan output akhir.
6. Selama training, FNN menggunakan backpropagation untuk memperbarui bobot berdasarkan kesalahan.

Contoh:

1. Pengenalan gambar sederhana.
2. Klasifikasi data numerik.
3. Prediksi harga.
4. Deteksi pola data non-sekuensial

## Convolutional Neural Network (CNN)

Convolutional Neural Network (CNN) adalah jenis jaringan saraf yang dirancang khusus untuk memproses data berbentuk grid seperti gambar 2D atau video 3D. CNN sangat populer di bidang Computer Vision, seperti pengenalan wajah, deteksi objek, dan klasifikasi gambar.

Lapisan:

1. Input layer untuk memasukkan data gambar masuk.
2. Convolutional layer untuk menerapkan filter kecil yang bergerak di seluruh gambar. Setiap filter belajar mendeteksi fitur tertentu, seperti tepi horizontal atau warna tertentu.
3. Activation layer untuk mengubah nilai negatif jadi 0 untuk menambah non-linearitas:
4. Pooling layer untuk engurangi ukuran data (downsampling) agar komputasi lebih efisien.
5. Fully connected layer untuk klasifikasi akhir.
6. Output layer untuk menghasilkan hasil akhir, misalnya kategori gambar.

Contoh:

Model sedang mengenali gambar kucing, maka prosesnya:

1. Layer awal (Conv1) belajar mengenali tepi dan garis.
2. Layer tengah (Conv2) mengenali bentuk telinga, mata, bulu.
3. Layer akhir (FC) mengenali bahwa kombinasi fitur itu adalah kucing.

## Recurrent Neural Network (RNN)

Recurrent Neural Network (RNN) adalah jenis jaringan saraf tiruan yang dirancang khusus untuk memproses data berurutan atau data yang memiliki hubungan antar waktu.

Tahapan:

1. RNN menerima input pertama (x₁) dan menyimpannya dalam memori (h₁).
2. Ketika input berikutnya (x₂) datang, RNN mempertimbangkan x₂ dan juga h₁ dari langkah sebelumnya.
3. Proses ini berulang untuk seluruh urutan data.

Kelebihan:

1. Dapat memahami konteks urutan, misalnya hubungan antar kata dalam kalimat.
2. Cocok untuk time-series prediction, speech recognition, machine translation, dan text generation.

Kelemahan:

1. Sulit dilatih untuk urutan panjang karena masalah vanishing atau exploding gradient.
2. Kesulitan mengingat konteks jangka panjang.

## Long Short-term Memory (LSTM)

Long Short-Term Memory (LSTM) adalah jenis khusus dari Recurrent Neural Network (RNN) yang dirancang untuk mengatasi kelemahan RNN standar, terutama masalah vanishing gradient atau hilangnya kemampuan mengingat konteks jangka panjang.

Dengan kata lain, LSTM dapat mengingat informasi penting dalam jangka waktu yang panjang, sekaligus melupakan informasi yang tidak relevan.

Struktur:

Setiap unit (cell) LSTM memiliki tiga gerbang utama yang mengatur aliran informasi:

1. Forget Gate
Menentukan informasi apa yang harus dilupakan dari memori lama.
2. Input Gate
Menentukan informasi baru apa yang perlu disimpan ke memori.
3. Output Gate
Menentukan apa yang akan dikeluarkan ke langkah berikutnya.

Tahapan:

1. LSTM menerima input (xₜ) dan memori dari langkah sebelumnya (Cₜ₋₁, hₜ₋₁).

2. Tiga gerbang menentukan mana informasi yang disimpan, diperbarui, dan dikeluarkan.

3. LSTM meneruskan hasil (hₜ) ke langkah waktu berikutnya.

Kelebihan:

1. Dapat mengingat konteks jangka panjang dengan stabil.
2. Mengatasi vanishing/exploding gradient.

Kelemahan:

1. Lebih kompleks dan lambat dilatih dibanding RNN biasa.
2. Membutuhkan lebih banyak parameter.

## Gated Recurrent Unit (GRU)

Gated Recurrent Unit (GRU) adalah salah satu jenis Recurrent Neural Network (RNN) yang dikembangkan untuk mengatasi masalah vanishing gradient masalah umum yang membuat RNN sulit mempelajari hubungan jangka panjang dalam data urutan.

GRU diperkenalkan oleh Kyunghyun Cho dkk. pada tahun 2014 sebagai versi yang lebih sederhana dari LSTM (Long Short-Term Memory).

Komponen:

1. Update Gate (zₜ)
Menentukan seberapa banyak informasi dari masa lalu (hidden state sebelumnya) yang akan dibawa ke waktu sekarang.

Rumus:

zₜ = σ(W_z · [hₜ₋₁, xₜ])
(σ = fungsi sigmoid)

2. Reset Gate (rₜ)
Menentukan seberapa banyak informasi lama yang akan dilupakan saat menghitung kandidat state baru.

Rumus:

rₜ = σ(W_r · [hₜ₋₁, xₜ])

3. Candidate Hidden State (h̃ₜ)
State baru yang diusulkan, tergantung pada reset gate.

Rumus:

h̃ₜ = tanh(W · [rₜ * hₜ₋₁, xₜ])

4. Final Hidden State (hₜ)
Gabungan antara state lama dan kandidat state baru, dikontrol oleh update gate.

Rumus:

hₜ = (1 - zₜ) * hₜ₋₁ + zₜ * h̃ₜ

## Radial Basis Function Network (RBFN)

Radial Basis Function Network (RBFN) adalah salah satu jenis Artificial Neural Network (ANN) yang menggunakan fungsi radial, sebagai fungsi aktivasi pada lapisan tersembunyinya. Model ini sangat populer untuk klasifikasi, regresi, dan interpolasi data.

Struktur:

1. Input Layer
Menerima data masukan. Hanya meneruskan input ke lapisan tersembunyi tanpa perhitungan.

2. Hidden Layer
Di sini terdapat neuron-neuron dengan fungsi aktivasi berbentuk radial. Setiap neuron memiliki Center (μ) untuk titik pusat dari fungsi radial, dan Spread (σ) untuk menentukan lebar fungsi radial.

3. Output Layer
Menggabungkan hasil dari lapisan tersembunyi secara linear untuk menghasilkan output akhir.

Tahapan:

1. Input data masuk ke jaringan.
2. Hitung jarak antara input dan setiap pusat fungsi radial di hidden layer.
3. Aktivasi neuron dihitung menggunakan fungsi radial.
4. Lapisan output menggabungkan hasil aktivasi dengan bobot untuk memproduksi output akhir.

Keunggulan:

1. Pelatihan lebih cepat dibanding jaringan multilayer perceptron (MLP).
2. Mampu memodelkan fungsi non-linear dengan baik.
3. Cocok untuk aproksimasi fungsi dan pengklasifikasian pola.

Kelemahan:

1. Sensitif terhadap pemilihan parameter.
2. Bisa boros memori jika jumlah neuron terlalu banyak.
3. Tidak seefisien model modern seperti CNN atau Transformer untuk data besar.

Contoh:

1. Pengenalan pola.
2. Prediksi deret waktu.
3. Klasifikasi data non-linear.
4. Sistem kontrol adaptif.