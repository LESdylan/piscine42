#!/bin/bash
#//write a function that understand and execute a selection, substitution or an insertion of text
#input="";
#output="";
#sed 's/old/new/g' "$input" > "%output"
#!/bin/bash

# Define a function to greet the user and manipulate a pattern in the file
greet() {
    if [ "$flag" == "delete" ]; then
        sed "/$pattern/d" "$file"
    elif [ "$flag" == "add" ]; then
        sed "/$pattern/a\\$new" "$file"
    elif [ "$flag" == "substitute" ]; then
        sed "s|$pattern|$new|g" "$file"
    else
        echo "Invalid command: $flag"
    fi
}

# Check if the right number of arguments are passed
if [ $# -lt 4 ]; then
    echo "Usage: $0 <pattern> <new> <flag> <file>"
    exit 1
fi

# Assign the passed arguments to variables
pattern=$1
new=$2
flag=$3
file=$4

# Call the function with the provided arguments
greet "$pattern" "$new" "$flag"



