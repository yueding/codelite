What is [CodeLite][1]?
====

[CodeLite][1] is an open source, free, cross platform IDE for the C/C++ programming languages which runs on all major Platforms ( OSX, Windows and Linux )

You can download pre-built binaries for Windows / OSX and Linux from our main **[Download Page][3]**


----------


Building CodeLite on Linux
----

To build CodeLite on you computer you will need these packages:

 - wxWidgets 3.0 or later
 - The gtk development package: often called libgtk2.0-dev or wxGTK-devel or similar
 - pkg-config (which usually comes with the gtk dev package)
 - The build-essential package (or the relevant bit of it: g++, make etc)
 - git
 - cmake

You should have wxWidgets 3.0 or later built on your machine. If you don't know how to build (or you're just lazy ...) you can [download it install wxWidgets from CodeLite's repository][2]


On Ubuntu / Debian you can install all of the above (except for wxWidgets 3.0) by typing:

    sudo apt-get install libgtk2.0-dev pkg-config build-essential git cmake libssh-dev

Git clone the sources:

    git clone git@github.com:eranif/codelite.git

Run cmake and build codelite:

    cd codelite
    mkdir build-release
    cd build-release
    cmake -G "Unix Makefiles" -DCMAKE_BUILD_TYPE=Release ..
    make -j4
    sudo make install


[1]: http://codelite.org
[2]: http://www.codelite.org/LiteEditor/WxWidgets30Binaries
[3]: http://codelite.org/support.php