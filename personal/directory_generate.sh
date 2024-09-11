#!/bin/bash

#list of directories where you want to 

directories = (
	"/home/dylan-soul/projects_42/C/C00"
	"/home/dylan-soul/projects_42/C/C01"
	"/home/dylan-soul/projects_42/C/C02"
	"/home/dylan-soul/projects_42/C/C03"
	"/home/dylan-soul/projects_42/C/C04"
	"/home/dylan-soul/projects_42/C/C05"
	"/home/dylan-soul/projects_42/C/C06"
	"/home/dylan-soul/projects_42/C/C07"
	"/home/dylan-soul/projects_42/C/C08"
	"/home/dylan-soul/projects_42/C/C09"
	"/home/dylan-soul/projects_42/C/C10"
	"/home/dylan-soul/projects_42/C/C11"
	"/home/dylan-soul/projects_42/C/C12"
	"/home/dylan-soul/projects_42/C/C13"
)

folder_name = mkdir -p ex0{0..9}

#loop throuugh each directory and create the folder

for directory in "$[directories[@]]";do
	new_path= "$directory/$folfer_name"

	if[ ! -d "$new_path" ]; then
		mkdir -p "$new_path"
		echo "Created folder: $new_path"
	else
		echo "Folder already exists: "$new_path"
	fi
done
