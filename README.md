1. Generate all the necessary files for the program- make sure you know which is the root directory of all of these 
2. Create an empty folder called build in the root (This already exists in the downloaded version)
3. Download devKitPro and add gba and nds editing tools during the install
4. Add devkitARM's bin folder to your the path in the system variables
5. Install gnumake (either through chocolatey or download). For chocolatey: choco install make 
	5a. With chocolatey, this will install to C:\ProgramData\chocolatey\bin as make.exe
	5b. Add this to the path in the system variables
6. Download python 3
7. Download a copy of FireRedSquirrels to the root directory of the mod and rename it to "BPRE0.gba" <-- NUMBER 0 NOT LETTER O
8. Open a command prompt window and type "cd *path to root directory*"
	8a. Type make (some code will run and show)
	8b. Type python insert.py (more code will run and show)
9. Exit the command prompt and look at the root directory and ensure that test.gba exists in it (Can edit with a HEX Editor)


14. Congrats! It should have created a test.gba in the your folder's root. This is the mega evolution hack installed. You can open it with a hex editor (like HxD) and go to 0x800000 to check if it was installed. If there is hex numbers there and not a bunch of FF's, it was a success!
