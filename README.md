Website :

https://cryptopay.org.za

-= Building CpaPay (CpaCoin GUI Wallet) =-

On *nix:

Dependencies: Git, GCC 4.7.3 or later (Visual Studio 2013 or later for windows), CMake 2.8.6 or later, Boost 1.55 or later and Qt5.

You may download them from:

http://microsoft.com/

http://gcc.gnu.org/

http://www.cmake.org/

http://www.boost.org/

http://www.qt.io/

Alternatively, it may be possible to install them using a package manager.

Build on *nix :

git clone https://github.com/devafrica/CPA-GUI-Wallet && cd CPA-GUI-Wallet && git clone https://github.com/devafrica/CpaPay cryptonote

then : (tested on Ubuntu 16.04/18.04)

mkdir build && cd build && cmake .. && make

on Windows:

git clone https://github.com/devafrica/CPA-GUI-Wallet && cd CPA-GUI-Wallet && git clone https://github.com/devafrica/CpaPay cryptonote

Then: (tested on windows 8.1/10 with boost 1.59.0 , cmake 3.10.0 , MSVS 2015 & Qt 5.10.1)

mkdir build && cd build && cmake .. -G "Visual Studio 14" -DCMAKE_PREFIX_PATH=C:\Qt\Qt5.10.1\5.10.1\msvc2015

then open cpacoin.sln and Build.

Good luck!
