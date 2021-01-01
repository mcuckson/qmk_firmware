https://geekhack.org/index.php?topic=8110.0


qmk compile -kb cuckson -km default
sudo teensy-loader-cli --mcu=atmega32u4 -w ./.build/cuckson_default.hex  -v
