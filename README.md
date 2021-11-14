<h1 align="center" >
<br>
    <img src="https://assets.website-files.com/6105315644a26f77912a1ada/610540e8b4cd6969794fe673_Holberton_School_logo-04-04.svg" height="50%" width="40%">
</h1>

<h2 align="center">
    PRINTF()
</h2>

<p align="center">
    <a href="https://github.com/cristhian1107/printf/commits/main">
        <img src="https://img.shields.io/github/last-commit/cristhian1107/printf.svg?style=flat-square&logo=github&logoColor=white" alt="GitHub last commit">
    </a>
    <a href="https://github.com/cristhian1107/printf/issues">
    <img src="https://img.shields.io/github/issues-raw/cristhian1107/printf.svg?style=flat-square&logo=github&logoColor=white"
         alt="GitHub issues">
    </a>
    <a href="https://github.com/cristhian1107/printf/pulls">
    <img src="https://img.shields.io/github/issues-pr-raw/cristhian1107/printf.svg?style=flat-square&logo=github&logoColor=white"
         alt="GitHub pull requests">
    </a>
</p>

<h4 align="center"> _printf() - lightweight version of printf, supporting basic and most used functionality </h4>

<p align="center">
    <a href="#Synopsis">Synopsis</a> •
    <a href="#Description">Description</a> •
    <a href="#Format">Format</a> •
    <a href="#Supported Functionality">Supported Functionality</a>
    <a href="#Work in Progress">Work in Progress</a>
</p>


# 

# Synopsis:
#### Main Includes:
> * #include <unistd.h>
> * #include <stdarg.h>

### For Testing Includes:
> * #include <stdio.h>
> * #include <stdlib.h>
> * #include <limits.h>
> * #include <string.h>

#### Prototype:
> int _printf(const char *format, ...);

#### Important information:
> We are currently working on adding support for width, precision and length. To keep track of current funcionality pease review the
<a href="#Supported Functionality">Suported Functionality<a/>section.

#### Contributors:
> * Carlon Bentin
> * Cristhian Apaza



# Description
The function **_printf** produce output according to a format described below, directed into stdout, the standard output stream. The **_printf** writes the output under the control of a format string that specifies how subsequent arguments are converted for output.

# Format
The format string is a character string, beginning and ending in its initial shift state, if any. The format string is composed of zero or more directives: ordinary characters (not %), which are copied unchanged to the output stream; and conversion specifications, each of which results in fetching zero or more subequents arguments. Each conversion specification is introduced by the character %, and ends with a conversion specifier, like this:

<h4 align="center"> % [FLAGS][width][.precision][length]specifier</h4>


### example
```
_printf("Hello, %s. project took us %+d days, which in hexa is %#x\n", "World", 5, 5);
``` 
#### result:
<img src="https://github.com/cristhian1107/printf/blob/assets/Example_1.PNG?raw=true">

# Supported Functionality

#### Supported features:

##### FLAGS
|  Flag   |             Output                                         |   Syntaxis    | Example |
|---------|------------------------------------------------------------|---------------|---------|
|   +     |  Adds + in front of output                                 | ("%+d", 250)  | "+250"  |
|   space |  Adds '_' in front of ouput                                | ("% d", 250)  | " 250"  |
|   #     | Alters format to o, x or X. prefixes 0 for non 0 numbers   | ("%#x", 250)  |  "0xfa" |


##### SPECIAL CASES:
|  CASE   |             Output                                         |   Syntaxis    | Example |
|---------|------------------------------------------------------------|---------------|---------|
|   r     |  prints string in reverse                                  | ("%r", "ABC") |  "CBA"  |


##### SPECIFIERS

|  Spec   |             Output           |   Syntaxis    |    Example    |
|---------|------------------------------|---------------|---------------|
|   c     | character                    | ("%c", 'A')   |  "A"          |
|   s     | String                       | ("%s", "ABC") |  "ABC"        |
|   d     | Decimal                      | ("%d", 250)   |  "250"        |
|   i     | Integer                      | ("%i", 250)   |  "250"        |
|   u     | Unsigned Int                 | ("%u", 250)   |  "250"        |
|   o     | Octal                        | ("%o", 250)   |  "372"        |
|   x     | Hexadecimal (no caps)        | ("%x", 250)   |  "fa"         |
|   X     | Hexadecimal (CAPS)           | ("%X", 250)   |  "FA"         |
|   b     | Binary                       | ("%b", 250)   |  "11111010"   |



# Work n Progress

#### We are currently working on adding the following format options to the library:
* Adding to ***s*** - Print Non-printable characters as "\x" followed by ASCII code value in Upper Case Hexadecimal
* Adding **[p]** - Printing memory adress
* Adding **length modifiers [l] [h]**
* Adding **width modifiers**
* Adding **precision modifiers**
* Adding additional flags: **[0]**, **[-]**
* Adding **[r]** - To Reverse string before printing
* Adding **[R]** - Encode string with ROT13 before printing

# Contact Information


##### Please feel free to contact us regarding any matter (specially about mistakes, recomendations and gramar errors)

<p align="center">
Cristhian Apaza - 
<a href="https://github.com/cristhian1107">
        <img src="https://img.shields.io/badge/Cristhian-mainPage-blue">
</a>
</p>



<p align="center">
Carlos Bentin -
<a href="https://github.com/Benkdel">
        <img src="https://img.shields.io/badge/Carlos-mainPage-blue">
</a>
</p>
