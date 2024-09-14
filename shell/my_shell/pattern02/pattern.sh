#2nde exercise, modify the capital letter of each word and bracing them between parenthesis
sed  -r 's|(\b[A-Z])|(\1)|g'
