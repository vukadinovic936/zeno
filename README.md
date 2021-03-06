# Lossless Compressor Zeno
Zeno is a Command Line Tool that losslessly compresses text files.
## Requirements
To install Zeno, you need to have Unix based shell, C, C++, Python and Make
## Installation
Installation is done in two steps. First clone the repository
```git clone https://github.com/vukadinovic936/zeno```
then navigate to zeno and run the file install.sh
``` cd zeno && ./install.sh ```
## Test
Check that your installation was successful by navigating to zeno and running
```
g++ test.cpp -o test.out && ./test.out
```
If all tests passed, you can starting using zeno!
## Usage
Type ```zeno help``` and you will see a list of all commands.

```zeno algos``` will let you choose the algorithm you want to use for your compression. Currently available algorithms are Huffman and Arithmetic.
```
zeno algos 
SELECT THE ALGORITHM YOU WANT TO USE
1: HUFFMAN
2: ARITHMETIC
1
YOU SELECTED HUFFMAN ALGORITHM AS DEFAULT
```

```zeno compress``` will let you compress your text file into .zen format. It will use the algorithm that you specified with the command ```zeno algos```. If you didn't run this command, it will use HUFFMAN coding by default.
```
zeno compress test/test2.txt
Compressing...

input symbols 58, output bits 4400,
 ratio 7.155172 bits per symbol
File is compressed and saved as test/test2.zen
Compressed file is 69.608939 % of the original file
```

```zeno uncompress``` takes as input .zen file and decompresses it to txt. The user doesn't need to specify what algorithm was used to compress the file, zeno will infer it.
```
Uncompressing...
zeno uncompress test/test2.zen
File is uncompressed and saved as test/test2_decoded.txt
```