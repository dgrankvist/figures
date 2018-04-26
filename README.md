# Figures

This application is a course project for the Application development course at Vaasa University of Applied Sciences (VAMK). It presents the user with a menu and then prints a figure based on the user's choice to the terminal.

## Table of Contents

1. Configuration
2. Installation
3. Operation
4. Manifest (List of files)
5. License
6. Contact information

## Configuration

The application requires a Linux computer with GCC, make and git installed.

The application relies on Linux system commands, and compatibility is therefore not guaranteed with other operating systems. 

## Installation

The recommended way of installation is cloning the github repository to the home directory or a subdirectory. In the preferred install location, run the command:

	git clone https://github.com/dgrankvist/figures

To install, run:

	make

## Operation

After installation, the application can be run with the command

	./sound.a

in the directory where the application was installed.

The menu is then opened with the options:

1: Triangle
2: Circle
3: Rectangle
4: Square
5: Horizontal line
6: Intersecting lines
9: Exit

Input the desired number and press enter. Any other input will be ignored.

## Manifest

The application repository contains the following files:

* LICENSE - a copy of the MIT License that this application is licensed under
* README.md - this README file
* circle.c - the circle drawing function source code
* figs.h - header file that contains constant definitions and function prototypes.
* horizLine.c - the horizontal line drawing function source code
* interLine.c - the intersecting lines drawing function source code
* main.c - main function source code file 
* makefile - file containing compilation and installation instructions for GNU Make
* menu.c - source code for the menu function
* rectangle.c - the rectangle drawing function source code
* screen.c - source code for functions that manipulate the terminal output - clear terminal window, change text and background color, go to specified position in terminal windows 
* square.c - the square drawing function source code
* triangle.c - the triangle drawing function source code

## License

MIT License

Copyright (c) 2018 Daniel Grankvist

Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in all
copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
SOFTWARE.

## Contact information

Daniel Grankvist

daniel.grankvist@edu.vamk.fi

http://www.cc.puv.fi/~e1700675/
