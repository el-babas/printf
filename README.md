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

<h4 align="center"> % [FLAGS][width][.precision][length]specifier<h4\>


### example
```
_printf("Hello, %s. project took us %+d days, which in hexa is %#x\n", "World", 5, 5);
``` 
#### result:
```

```


# Supported Functionality

#### Supported features:

| 

