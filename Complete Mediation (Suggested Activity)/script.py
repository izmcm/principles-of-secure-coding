import os
import stat

file_path = "testfile.txt"

# adding read-only permissions
os.chmod(file_path, stat.S_IRUSR | stat.S_IRGRP | stat.S_IROTH)

with open(file_path, 'r') as file:
    # removing read-only permissions
    os.chmod(file_path, ~stat.S_IRUSR & ~stat.S_IRGRP & ~stat.S_IROTH)

    lines = file.read()
    print(lines)

