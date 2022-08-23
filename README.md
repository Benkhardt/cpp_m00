# C++ - Module 00

## Description:
A brief introduction to 'C++'.
About memory acllocation, refereces, pointers to members, switch...
## How to use this repo:
This repo is about my own learning path but everyone is free to try out the exercises:

**Step 1.** Navigate into any ex.. you want and follow along with Step 2.

**Step 2.** Create binaries/executables by using make and Makefile:
- `make all` to create the binary.
- `make clean` to clear unnecessarry files (.o's).
- `make fclean` to clear anything created by compiler.
- `make re` to re-compile everything.

**Step 3.** execute the binary `./bin <args>`

## PS.:
I will add README's to every exercise within this repo/project and explanations to code aswell later on...

To be more informed about the single exercises please read the en.subject.pdf.

However, I don't use any references in my functions, example:

```
void  f(int &x){
  x += 5; 
}

int main(){
  int y = 5;
  f(y);
  std::cout << y << std::endl;
  return 0;
}
```
Output:
```shell
10
```
We setting up the "raw" reference in our function, building the full reference by giving over the pre-defined ``int y`. 
Now, inside our function ``f(int &x)`` ``int y`` is identified by ``int &x``.
Imagine having big data in a class you want to give over to a function. Without references the whole data would be copied. 
