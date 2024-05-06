# To write a Python program for command line arguments.

import sys
import subprocess

print("This is the name of the script: ", sys.argv[0])
print("Number of arguments: ", len(sys.argv))
print("Type of arguments: ", type(sys.argv))
print("The arguments are: ", str(sys.argv))

#run a file in same directory as this file and pass some arguments using this py file only

subprocess.run(["python3", "_1A_HelloWorld.py"])
print("The arguments are: ", str(sys.argv))

