# BITCOIN LIGHTNING NETWORK

Bitcoin Lightning Network adalah sebuah saluran lapis 2 (layer 2) yang digunakan untuk mempercepat proses transaksi bitcoin dengan menggunakan smart contract.

Bukankah bitcoin blockchain tidak mendukung smart contract? Ya, memang bitcoin blockchain tidak mendukung smart contract yang kompleks seperti Turing-complete Smart Contract milik Ethereum, akan tetapi lightning network masih dapat mendukung skema smart contract sederhana yaitu Hased Timelock Contracts (HTLCs) dan Multi-signature Wallet.

## How It Works

1. Opening Channel: kedua belah pihak mengunci bitcoin mereka ke dalam multi-signature wallet dengan cara melakukan deposit ke multi-signature wallet masing-masing.

2. Off-chain Transaction: setelah saluran terbuka, kedua belah pihak melakukan transaksi secara off-chain.

3. Closing Channel: setelah seluruh aktivitas transaksi selesai, saluran harus ditutup agar dapat dimasukkan ke dalam blockchain.
