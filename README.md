# Gestor-Entrada-Sortida

## DEPENDENCIES
1. G++
2. Makefile


## DEFINITION
Just a simple "save and load" library for my neural nets. Template style for the chills.

The library itself is the .hh file. 
Compile the project using the Makefile:
``` make ```

The test.cc it's just a validation file. 
Running the test: 
```sh    
 ./Inout.exe
```  
If done properly you should see the following: 

Numeros  
0  
1  
2  
3  
4  

Meaning it has stored the set of number called "Numeros" in a file called Estat.txt, and later on it has loaded the set reading from the file and dumping it up in the standard output channel

## TODO:
- [x] Read Function  
- [x] Write Function  
- [ ] Save/Load full neural net  

