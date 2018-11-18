# C++ Training Studio

## Objective 

Learn C++ coding.

## Compile Example

`-I` option in `g++` compiler enables to import outer libraries such as Eigen, etc.

```shell-session
$ g++ -I eigen-eigen ./sample_matgen.cpp -o matgen && ./matgen sample1000_50.csv 1000 50
#1000
#50
```
