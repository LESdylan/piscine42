FIRST_FILE='file*'
SECOND_FILE='subdir'
find . \( -name "$FIRST_FILE" -o -name "$SECOND_FILE" \) -type d -print -exec rm -rf {} +
