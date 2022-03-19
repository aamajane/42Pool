cat /etc/passwd | grep -v '^#' | sed -n "n ; p" | sed -n "$FT_LINE1 , $FT_LINE2 p" | cut -d ':' -f 1 | rev | sort -r | tr '\n' ' ' | sed 's/ /, /g;s/, $/./' | tr -d '\n'
