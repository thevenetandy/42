ldapsearch -xLLL "uid=z*" cn | grep cn | cut -c 5- | tr '[:upper:]' '[:lower:]' | sort -r
