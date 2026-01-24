# AI MODELS

## Large Language Models (LLM)

Large Language Models (LLM) adalah jenis model AI yang dilatih untuk memahami dan menghasilkan teks dalam bahasa manusia dengan tingkat pemahaman yang sangat tinggi.

Contoh:

1. Generative Pre-trained Transformers (GPT).
2. Bidirectional Encoder Representation from Transformers (BERT).
3. Claude.
4. LLaMA.

## Generative Image Model

Generative Image Model adalah jenis model AI yang dirancang untuk menciptakan atau menghasilkan gambar baru berdasarkan data yang telah dipelajarinya. Model ini berbeda dengan model pengenal gambar karena tujuannya bukan hanya memahami atau mengklasifikasikan gambar, tapi membuat gambar dari nol atau dari deskripsi tertentu.

Tahapan:

1. Model dilatih menggunakan banyak contoh gambar.
2. Ia mempelajari pola, bentuk, warna, tekstur, dan hubungan antar objek dalam gambar tersebut.
3. Setelah dilatih, model dapat menghasilkan gambar baru yang menyerupai gaya atau konten dataset, bahkan bisa sesuai dengan instruksi teks (text-to-image).

Jenis:

1. Generative Adversarial Networks (GAN)

Terdiri dari dua jaringan, generator yang membuat gambar dan discriminator yang menilai apakah gambar realistis. Keduanya saling bersaing untuk meningkatkan kualitas gambar.

2. Diffusion Models

Mulai dari noise acak dan secara bertahap memperbaikinya menjadi gambar yang realistis. Contohnya adalah DALL·E, Midjourney, Stable Diffusion.

3. Variational Autoencoders (VAEs)

Mempelajari representasi tersembunyi dari gambar dan menggunakannya untuk menghasilkan gambar baru.

## Video Generation Model

Video Generation Model adalah jenis model AI generatif yang dirancang untuk membuat video baru secara otomatis, mirip dengan bagaimana generative image model membuat gambar. Bedanya, model ini tidak hanya menghasilkan satu frame (gambar), tapi rantai frame yang berurutan sehingga membentuk video yang konsisten secara visual dan temporal.

Tahapan:

1. Model dilatih dengan banyak video untuk mempelajari gerakan objek dari satu frame ke frame berikutnya, pola transisi visual dan temporal, struktur adegan dan interaksi objek.

2. Setelah dilatih, model dapat membuat video dari noise awal (unsupervised generation), membuat video dari deskripsi teks (text-to-video), memodifikasi video yang sudah ada.

Jenis:

1. GAN-based Video Models

Perluasan dari GAN untuk gambar, tetapi memperhatikan konsistensi antar-frame.

2. Diffusion-based Video Models

Menghasilkan video dari noise acak secara bertahap, mirip Diffusion Models untuk gambar. Contohnya adalah Sora, Veo, Runeay Gen-2, dan Pika Labs.

3. Autoregressive Models

Membuat video frame demi frame, masing-masing frame bergantung pada frame sebelumnya.

## Speech & Audio Model

Speech & Audio Model adalah jenis model AI yang dirancang untuk memproses, memahami, atau menghasilkan suara dan audio, termasuk suara manusia, musik, atau efek suara. Model ini tidak hanya mengenali suara, tapi juga bisa menghasilkan audio baru atau mentransformasikan audio.

Fungsi:

1. Automatic Speech Recognition (ASE)

Mengubah ucapan manusia menjadi teks. Contohnya adalah Google Assistant, Siri, dan Alexa.

2. Text-to-Speech (TTS)

Mengubah teks menjadi suara manusia yang terdengar alami. Contohnya adalah Amazon Polly, Google WaveNet.

3. Voice Conversion & Style Transfer

Mengubah suara satu orang menjadi suara orang lain atau mengubah intonasi/gaya bicara.

4. Audio Generation

Membuat musik baru atau efek suara secara otomatis. Contohnya adalah Jukebox, Whisper, DeepSpeech, VALL-E, Suno.ai, MusicLM, dan Riffusion.

5. Speech Enhancement / Noise Reduction

Membersihkan suara dari noise atau memperjelas ucapan.

Tahapan:

1. Model dilatih dengan banyak sampel audio dan kadang teks terkait.
2. Menggunakan representasi digital suara.
3. Dapat memprediksi urutan gelombang suara atau fitur spektral untuk menghasilkan audio baru.

## Multimodal Model

Multimodal model adalah jenis model AI yang dapat memproses dan memahami lebih dari satu jenis data sekaligus, misalnya teks, gambar, audio, dan video. Berbeda dengan model khusus, misal hanya teks atau hanya gambar, multimodal model bisa menggabungkan informasi dari berbagai sumber untuk membuat prediksi atau generasi yang lebih kompleks.

## Probabilistic Language Model

Probabilistic language model adalah model yang memprediksi kemungkinan atau probabilitas suatu urutan kata muncul dalam sebuah bahasa. Model ini mencoba menebak kata berikutnya berdasarkan seberapa besar peluang kata itu muncul setelah kata-kata sebelumnya.

Model seperti GPT masih berbasis probabilitas, tapi menggunakan Neural Probabilistic Language Model, di mana probabilitas ditentukan oleh jaringan saraf atau neural network. Kalimat yang dihasilkan model AI sebenarnya adalah hasil dari prediksi probabilistik berantai.

Contoh:

Kalimat “Saya makan nasi.”, model probabilistik akan memperkirakan P(“Saya”) atau P(“makan” | “Saya”) atau P(“nasi” | “Saya makan”)

Nilai:

Saya = 0.05
makan = 0.02
nasi = 0.03
Jadi total probabilitas kalimat = 0.05 × 0.02 × 0.03 = 0.00003

Jenis:

1. Unigram Model
Model menganggap tiap kata independen.

2. Bigram Model
Menganggap kata tergantung pada 1 kata sebelumnya.

3. Trigram Model
Menganggap kata tergantung pada 2 kata sebelumnya.

4. N-gram Model
Semakin besar n, semakin banyak konteks yang dipertimbangkan.
