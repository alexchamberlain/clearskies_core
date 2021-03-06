clearskies_core  ([bountysource fundraiser](https://www.bountysource.com/fundraisers/551-clearskies-open-source-file-synchronization))
===============

[![Build Status](https://travis-ci.org/larroy/clearskies_core.png?branch=master)](https://travis-ci.org/larroy/clearskies_core)

Open source, distributed data synchronization software using the clearskies protocol.

Protocol description: https://github.com/jewel/clearskies/blob/master/protocol/core.md

# Status of the project:

* Early stages of development, there's nothing here for users. Only if you are willing to help and
  contribute. **THIS SOFTWARE IS NOT YET FUNCTIONAL**
  See [CONTRIBUTING](CONTRIBUTING.md)

# Donate:

If you want to support development of this project, you can **donate BTC** to the following address:

    18QEEJuR2ACAunMVeAxZ46o4QprxFKyGkw

# Dependencies:

* boost >= 1.49
* libboost-test-dev
* libboost-filesystem (v3)
* libsqlite3-dev
* ninja  (ninja-build on debian)
* gmp configured with --enable-cxx

# Included dependencies:

* libuv (vendor/libuv)
* gyp (tools/gyp) WARNING: watch out for interactions with the installed system gyp modules! this
  can produce errors as the python module search path might use the ones on the system instead of
  the installed one.

# Supported compilers:

Development is done with **GCC 4.8** and boost 1.54, so far this is the only compiler guaranteed to be able to
build the project. (My development machine runs Debian GNU/Linux testing (jessie))

The project is implemented in C++11, the compiler should support the features used from this
standard. The following compilers should also work:

* GCC >= 4.7
* Visual Studio 2013
* Clang

Our target is to support the following platforms in order of development effort: Linux, Android, Windows, Mac, iOS.

# Build instructions:

    ./build.sh
    ./test.sh

# Status of the project

- Low level assembling of messages and payload completed
- Implementing the CS protocol
- Integrating required libraries
- Implementing share infrastructure


## Discussion group

https://groups.google.com/forum/#!forum/clearskies-dev



