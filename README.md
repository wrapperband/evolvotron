# evolvotron

Evolvotron is an interactive "generative art" application for Linux to evolve images/textures/patterns/animations through an iterative process of random mutation and user-selection driven evolution. (This process is also often referred to as "evolutionary art" or "genetic art".) If you like lava lamps, and still think the Mandelbrot set is cool, this could be the software for you. 

The software shows a selection of algorithmically generated images. You pick one you like and the software mutates the algorithm to produce random variants. Simply repeat until bored, hopefully encountering some pleasing eye candy along the way.

The code is licensed under the GPL. It uses Qt4, the boost libraries, and is multi-threaded.

This project was inspired by a panel session at SIGGRAPH many years ago... probably "Computer art - an oxymoron? Views from the mainstream" at Boston in 1989. 

In the top level directory

  ./configure
  make

or just have both done for you by doing

  ./BUILD

[Note that the BUILD script also adds $QTDIR/bin to the path while it runs the 
commands, and is probably the easiest way to build if your PATH doesn't 
include a directory containing qmake and you like it that way.]

This will give you an "evolvotron" 

   ./evolvotron/evolvotron