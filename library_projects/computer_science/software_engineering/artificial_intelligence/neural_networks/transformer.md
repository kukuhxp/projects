# TRANSFORMER

Transformer adalah arsitektur model neural network yang diperkenalkan oleh Google pada tahun 2017 dalam paper terkenal yaitu Attention Is All You Need”.

Tujuannya adalah membuat mesin yang memahami urutan kata tanpa harus membaca dari awal ke akhir seperti RNN atau LSTM. Sebelum ada Transformer, model bahasa menggunakan RNN dan LSTM.

Masalahnya adalah proses berurutan atau tidak bisa paralel, kehilangan konteks ketika teks panjang, sulit dilatih, dan lambat.

Transformer memperkenalkan konsep utama, yaitu Self-attention. Di mana model memperhatikan setiap kata dalam konteks semua kata lain di kalimat.

Contoh:

“Kucing itu duduk di atas tikar.”. Ketika model membaca kata “itu”, ia akan memberi perhatian pada “Kucing” untuk memahami apa yang dimaksud “itu”.

Jenis:

1. Encoder-only Transformer

Encoder-only Transformer adalah salah satu varian arsitektur Transformer, yang hanya menggunakan bagian encoder dari struktur asli Transformer.

2. Decoder-only Transformer

Decoder-only Transformer adalah varian Transformer yang hanya menggunakan bagian decoder dari arsitektur asli, dan biasanya dipakai untuk generasi teks. Berbeda dengan encoder-only yang fokus understanding, decoder-only fokus generation.

## Token

Token adalah potongan kecil dari teks, bisa berupa kata, bagian dari kata, atau tanda baca yang digunakan sebagai satuan input dan output model. Token berfungsi sebagai unit dasar yang dipahami model. Model AI mengubah setiap token menjadi angka atau vektor agar bisa diproses oleh jaringan saraf.

AI tidak membaca teks seperti manusia kata demi kata, tapi memecah teks menjadi potongan-potongan kecil yang disebut token.

Contoh:

Kalimat "Saya makan nasi goreng.", diubah menjadi token, yakni ["Saya", " makan", " nasi", " goreng", "."]

## Token ID

Token ID atau vector adalah nomor unik yang diberikan pada setiap token setelah proses tokenization.

Contoh:

Kalimat “Saya suka apel”, dipecah menjadi token, menjadi ["Saya", "suka", "apel"], lalu diubah menjadi token ID, menjadi [1052, 207, 892]

## Tokenizer

Tokenizer adalah komponen yang memecah teks menjadi potongan-potongan kecil yang disebut token, agar bisa diproses oleh model bahasa seperti GPT, BERT, atau Llama.

Fungsi:

1. Menerjemahkan Teks menjadi Angka
Karena model AI hanya mengerti angka, setiap token akan diubah menjadi ID numerik:

2. Memecah teks panjang jadi unit yang bisa diproses model
Model punya batas jumlah token. Tokenizer membantu menghitungnya.

3. Membantu memahami struktur bahasa
Tokenizer subword membantu model mengenali kata baru yang belum pernah dilihat.

## Tokenization

Tokenization adalah proses memecah teks menjadi potongan-potongan kecil yang disebut token agar bisa dipahami oleh AI. Token bisa berupa kata, sub-kata, atau bahkan huruf, tergantung modelnya. Tujuannya adalah supaya komputer bisa memproses bahasa manusia dalam bentuk angka (vektor).

Contoh:

Kalimat “Saya suka apel merah.”, diubah menjadi token, menjadi ["Saya", "suka", "apel", "merah", "."]

## Tiktoken

Tiktoken adalah tokenizer resmi buatan OpenAI, digunakan untuk mengubah teks menjadi token (angka) agar bisa diproses oleh model GPT seperti GPT-3.5 atau GPT-4.


## Vector

Vector atau embedding adalah daftar angka yang digunakan untuk mewakili data dalam bentuk yang bisa dipahami komputer. Komputer tidak bisa langsung mengerti teks atau gambar. Jadi, AI mengubah setiap data menjadi vektor angka agar bisa dihitung oleh jaringan saraf.

Contoh:

Kata "AI" diubah ke vector menjadi [0.12, -0.45, 0.87, 0.33, ...]

## Attention

Attention adalah mekanisme yang membuat model fokus pada bagian penting dari data saat memproses informasi. Setiap data yang dimasukkan akan diubah menjadi 3 vektor, yaitu Query (Q), Key (K) dan Value (V).

Contoh:

Dalam kalimat “Dia makan karena lapar”, model tahu kata “lapar” berkaitan dengan “dia”, bukan “makan”. Jadi, attention membantu AI memahami konteks dan hubungan antar kata agar hasilnya lebih akurat.

## Multi-head Attention

Multi-head Attention adalah mekanisme inti dalam arsitektur Transformer. Fungsinya adalah agar model bisa memperhatikan (attend) bagian-bagian berbeda dari input secara paralel, sehingga bisa memahami beragam konteks sekaligus.

Multi-head attention berasal dari Self-Attention, yaitu mekanisme yang menentukan bagian mana dari input yang penting untuk setiap posisi dalam urutan. Setiap kata/token diubah menjadi tiga vektor, yaitu Q (Query), K (Key), V (Value).

Alih-alih hanya satu set Q, K, V, transformer membuat banyak "
head. Masing-masing head punya parameter berbeda, jadi tiap head bisa menangkap pola hubungan yang berbeda.

Contoh:

Head 1 bisa fokus ke kata berikutnya.
Head 2 bisa fokus ke kata sebelumnya.
Head 3 bisa fokus ke hubungan antar subjek dan objek.
Hasil dari semua head kemudian digabung dan diproyeksikan kembali menjadi satu representasi.

## Vector Database

Vector database adalah jenis basis data khusus yang dirancang untuk menyimpan dan mencari data dalam bentuk vektor.

## Backpropagation

Backpropagation adalah algoritma inti dalam pelatihan neural network. Backpropagation digunakan untuk menghitung dan memperbaiki kesalahan dengan mengubah bobot pada setiap neuron agar model menjadi lebih akurat.

## Byte Pair Encoding (BPE)

Byte Pair Encoding (BPE) adalah algoritma kompresi yang diadaptasi untuk tokenisasi teks dalam model bahasa besar seperti GPT Tujuannya adalah memecah kata menjadi potongan yang efisien dan tetap bermakna, meskipun model belum pernah melihat kata itu sebelumnya.

## Stochastic

Stochastic dalam konteks AI adalah algoritma yang mengandung elemen acak untuk membuat keputusan, mempelajari pola, atau mengeksplorasi solusi.

## Deterministic

Deterministic adalah algoritma yang selalu memberikan hasil yang sama jika diberikan input yang sama, tanpa unsur acak.

## Temperature

Temperature dadalah parameter yang mengatur tingkat kreativitas atau keacakan dalam output model.

## Generalized Knowledge Rollover (GKR)

Generalized Knowledge Rollover (GKR) berarti kemampuan sistem untuk membawa pengetahuan umum yang telah dipelajari sebelumnya ke situasi baru, tanpa harus mempelajari semuanya dari awal.
Konsep ini dekat dengan transfer learning, generalization, atau knowledge reuse dalam bidang AI dan cognitive science.

## Inference

inference berarti menggunakan model yang sudah dilatih untuk membuat prediksi atau keputusan baru berdasarkan data input baru. Jadi, training adalah proses belajar model, sedangkan inference adalah proses menggunakan hasil belajar itu.

Contoh:

Model AI sudah dilatih untuk mengenali gambar kucing dan anjing. Saat kamu masukkan gambar baru, proses menentukan apakah itu kucing atau anjing disebut inference.

## Parameter Model

Parameter model adalah nilai-nilai internal di dalam sebuah model yang menentukan bagaimana model tersebut berperilaku dan membuat prediksi. Dengan kata lain, parameter adalah isi otak model yang dipelajari selama proses training. Saat model belajar dari data, ia berusaha menemukan parameter terbaik agar hasil prediksinya paling akurat.

Mereka diubah-ubah selama training sampai hasil prediksi mendekati data sebenarnya. Dalam Model AI seperti ChatGPT, CNN, dll. Model seperti ChatGPT atau GPT-5 memiliki miliaran parameter.
Parameter-parameter ini menyimpan pengetahuan dan pola bahasa yang dipelajari dari data teks selama training.

Semakin banyak parameter, semakin besar kapasitas model bisa memahami konteks dan pola yang lebih kompleks.

Contoh:

1. GPT-2 memiliki 1,5 miliar parameter.
2. GPT-3 memiliki 175 miliar parameter.
3. GPT-4 memiliki >1 triliun parameter.
4. GPT-5 lebih besar lagi.

Jenis:

1. Weights
Mengatur seberapa kuat pengaruh tiap fitur input terhadap output.
2. Biases
Nilai tambahan agar model bisa menggeser hasil tanpa mengubah input.
3. Embedding Weights
Digunakan untuk merepresentasikan kata atau simbol ke dalam bentuk vektor angka.

## Context Window

Context window atau jendela konteks adalah jumlah token yang bisa diingat dan diproses oleh model dalam satu waktu percakapan. Context window mencakup pesan dari pengguna, jawaban model sebelumnya, sistem prompt, informasi tambahan.

Contoh:

Misal sebuah model punya context window 8.000 token, berarti model hanya bisa melihat dan memahami 8.000 token terakhir dari percakapan atau teks yang kamu kirim. Jika percakapan melewati batas itu, bagian paling awal akan tergeser keluar dari jendela konteks.

## Model Context Protocol (MCP)

Model Context Protocol (MCP) adalah protokol terbuka yang dikembangkan oleh Anthropic untuk menyederhanakan integrasi antara model bahasa besar (LLM) dan berbagai sumber data serta alat eksternal. MCP memungkinkan AI untuk mengakses, memahami, dan berinteraksi dengan data secara real-time, sehingga meningkatkan kemampuan AI dalam menjalankan tugas-tugas kompleks