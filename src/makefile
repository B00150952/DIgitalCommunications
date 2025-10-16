########## ########## ########## ########## 
# default rule
# this gets executed when no other rule is specified on the command-line
########## ########## ########## ########## 
default: 
	gcc -o hello2.exe hello2.c

########## ########## ########## ########## 
# rule to build hello2.exe
# this will only be run if hello2.c is newer than hello2.exe
# or, in other words, if hello2.c was changed since helloe2.exe
# was last built
########## ########## ########## ########## 
hello2.exe: hello2.c
	gcc -o hello2.exe hello2.c

########## ########## ########## ########## 
# rule to clean up any .exe files in the current directory
# this has the effect of forcing us to re-build any .exe files we want
########## ########## ########## ########## 
clean:
	@rm *.exe 2>/dev/null || true
