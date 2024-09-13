find -name *.sh -type f -print | sed 's|^\./||; s|\.sh$||' | cat -e
find -name *.sh -type f -print | sed -r 's|^\./(.*)\.sh$|\1|'
# thos are both good version to modify the text files
