# RASH

RASH adalah protokol komunikasi elektronik untuk order saham di NASDAQ, mirip dengan OUCH, tapi dengan fitur tambahan untuk routing dan special handling.

## How It Works

1. Trader mengirim order via RASH ke NASDAQ.

2. NASDAQ memeriksa apakah bisa dieksekusi. Jika bisa maka dieksekusi, dan dikirim konfirmasi. Jika tidak maka bisa diarahkan ke bursa lain otomatis atau routing.

3. Trader menerima update status order secara real-time.