import os

# Base directory containing C01 to C13 folders
base_dir = "/home/dylan-soul/projects_42/C"

# Number of main directories (C01 to C13)
main_folders = [f"C{str(i).zfill(2)}" for i in range(1, 14)]

# Number of exercise folders (ex00 to ex10)
exercise_folders = [f"ex{str(i).zfill(2)}" for i in range(11)]

# Create the directories
for main_folder in main_folders:
    for exercise_folder in exercise_folders:
        path = os.path.join(base_dir, main_folder, exercise_folder)
        os.makedirs(path, exist_ok=True)
        print(f"Created folder: {path}")

