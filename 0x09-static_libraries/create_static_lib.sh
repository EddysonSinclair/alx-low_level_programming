#!/bin/bash
#!/bin/bash

# Step 1: Compile each .c file into object (.o) files
gcc -c *.c

# Step 2: Create the static library (liball.a) from the object files
ar rcs liball.a *.o

# Step 3: Clean up by removing the intermediate object files
rm *.o

# Step 4: Print a message indicating successful library creation
echo "Static library liball.a created successfully!"

