# Static Library
### But firstly, what is Library?

 ##### **Library** File presisted on your computer and pre-compiled i.e. ended up to zeros and ones
--------------------------------
### What is the difference between Library and Application:
| Library | Application |
|---------|-------------|
| cannot be executed &harr; not kernally running | Execute &harr; processes &harr; kernally running |
### Applications utilize libraries.
---------------------------------------
### There are 2 types of libraries
|  Shared &harr; Dynamic | Static |
|------------------------|--------|
| when application needs a library, it is just reference it from memory and none of its code is leaving to application | copies what is needed from library and put it down in the application code|
|so at shared library is always needed to be presisted on the computer otherwise application will crash | In contrast, static library can be tossed away and application is stand-alone|
|It is used when largr number of libraries is needed and to make it easier to make application up-to-date | As you guessed, it is not preferred to be used when large number of libraries is needed since it leads to large footprint in flash memory (memory will be consumed)|
|*




