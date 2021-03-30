# CP3ython 

*Read as CPP-Python*

CP3ython is a C++ implementation of a Python interpreter. This is inspired from [Byterun](https://github.com/nedbat/byterun) and something I wrote mostly for educational purposes. For the real Python interpreter please refer to [Cpython's ceval.c](https://github.com/python/cpython/blob/master/Python/ceval.c).


# What's a byte code interpreter?

Quoting from [Allison Kaptur](https://www.aosabook.org/en/500L/a-python-interpreter-written-in-python.html):  

> The Python interpreter is a virtual machine...This particular virtual machine is a stack machine: it manipulates several stacks to perform its operations...

> The Python interpreter is a bytecode interpreter: its input is instruction sets called bytecode. When you write Python, the lexer, parser, and compiler generate code objects for the interpreter to operate on. Each code object contains a set of instructions to be executed—that's the bytecode—plus other information that the interpreter will need. Bytecode is an intermediate representation of Python code: it expresses the source code that you wrote in a way the interpreter can understand. 

# Credits and references

* *ByteRun* by Ned Batchelder (https://github.com/nedbat/byterun)
* *A Python Interpreter Written in Python* by Allison Kaptur (https://www.aosabook.org/en/500L/a-python-interpreter-written-in-python.html)
* *build-your-own-x* by Daniel Stefanovic (https://github.com/danistefanovic/build-your-own-x)