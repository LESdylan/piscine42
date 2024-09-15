# Explaination

---
## First case 
1. `cat /etc/passwd` : display the content of the file where all the information about the user are contained.
|	important : [info](https://www.ibm.com/docs/en/aix/7.1?topic=passwords-using-etcpasswd-file)
2. `grep -v "^#"`: It's going to filter the comment in case there are some. (it's just to respect the exercise)
3. `sed -n 'n;p'`: print from the second line, which jumping one line to another.
4. `cut -d ':' -f 1`: extract only the login.
5. `rev` : reverse the login strings
6. `sed -n "${FT_LINE1},${FT_LINE2}p"` : select all the logins included between line FT_LINE1 and FT_LINE2
|	important : `export FT_LINE1=1` `export FT_LINE2=5`
7. `tr "\n" ","` : Subsitute the new lines by commas
8. `sed 's/,/, /g'` : modigy the commas after each commas
9. `sed 's/, $/./'` : susbite the last commas by a final point.

## Second solution
it's my solution from my computer which actually output exactly the same.
instead of using `cut` command to extract the login. 
I used a sed after applying the `rev` 
1. `sed -r 's|.*(:([a-z\_-]+$))|\2|'`  : parse the text looking for this pattern which start with the last `:` which would be followed by a string that contain some condition. After parsing all the line the sed command will ouptut only the secon group I asked him to output.
2. `awk = 'NR % 2 == 0 {print}'` = `sed -n 'n;p'`
