#!/bin/bash

echo "Mematikan semua server PHP..."
pkill -f "php -S" && echo "Server dimatikan." || echo "Tidak ada server yang sedang berjalan."