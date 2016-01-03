#!/bin/bash
./key_generate <pq.txt
echo -e "\n-----plain text-----"
cat plain.txt
./en.sh
echo -e "\n-----encrypt number------"
cat encript.txt
./de.sh
echo -e "\n\n-----decode text-----"
cat decode.txt
diff plain.txt decode.txt
