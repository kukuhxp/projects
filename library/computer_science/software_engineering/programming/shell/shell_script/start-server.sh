#!/bin/bash

# Default values
PORT=${1:-8000}
FOLDER=${2:-$(pwd)}
LOGFILE="php-server.log"

echo "Menjalankan PHP server di direktori: $FOLDER"
echo "Port: $PORT"
echo "Log disimpan di: $LOGFILE"

cd "$FOLDER" || { echo "Folder tidak ditemukan!"; exit 1; }

# Jalankan server dan simpan log
php -S localhost:$PORT > "$LOGFILE" 2>&1 &
echo "Server berjalan di http://localhost:$PORT"