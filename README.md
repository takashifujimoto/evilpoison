# evilpoison
Ratpoison and Evilwm customized through editing its source code (like DWM).


Build
-----

Dependencies
------------
$ sudo apt install autotools-dev autoconf
$ sudo apt install -y gettext libx11-dev libxrandr-dev texinfo 


Build
-----
$ ./autogen.sh
$ ./config
$ sudo make install

Configuration
-------------
add below to .xinitrc:

    exec /usr/local/bin/ratpoison


