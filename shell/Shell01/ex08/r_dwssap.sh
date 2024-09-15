#!/bin/bash
cat /etc/passwd | awk 'NR % 2 == 0 {print}' | rev | sed -r 's|.*(:([a-z\_-]+$))|\2|' | sort -r | sed -n "${FT_LINE1},${FT_LINE2}p"| tr "\n" ", "| sed 's|,|, |g' | sed 's|, $|.|'
