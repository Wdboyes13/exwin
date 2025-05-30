# exwin.h - A header file any person that prefers standards not pain   
__Ever hated windows so much that you just want to exclude ALL windows users__  
__Well, now you can.__  
Just include copy exwin.h into your main directory  
and add `#include "exwin.h"` to the top of whatever file  
and, also dont forget at the top of your `int main()` do `exwin();`  
__  __  
NOW, if its on windows (at compile time, cause `#ifdef _WIN32` is compile time stuff)   
it'll give  
```
GET OUTTT, Come back when you have a REAL OS
Fatal Error: OS not liked by developer
```  
If you wanna test, run `make test`