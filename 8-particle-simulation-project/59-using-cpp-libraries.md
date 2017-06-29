# Libraries

Running order:
1. Preprocessor -> (#include, #define etc.)
2. Compilation -> produce object (.o) files
3. Link -> combine .o files with libraries that you have into an executable (.exe or no suffix on Unix)

Static libraries (static-linked libraries): Files containing C++ code that are actually compiled (into binary?) into your program. Links
- lib*.a (*NIX) or .lib (Windows)
- can also contain stubs that tell your program to find code from a dynamic library

Dynamic libraries: Files contain code that the RUNS (vs links). Program finds relevant code at runtime.
- lib*.so (*NIX), .dylib (Mac) or .dll (Windows)

