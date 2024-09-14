#1.deleting lines from a particular file
#2.delete the last line 
#3.delete line from range x to y
#4. delete from nth to last line
#5.deleter line from matchin pattern
sed 2d file.txt
sed 1,2d file.txt
sed /l.+x/d
sed -r '/w[a-z]+h/d' file.txt
(cat pattern.sh | sed -r /unix/d | sed "s||\$d|")
