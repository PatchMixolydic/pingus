Pingus
======

This is a modified copy of Pingus. The original can be found [here](https://gitlab.com/pingus/pingus).

Introduction
------------

Pingus is a free Lemmings(tm) clone for GNU/Linux, Win32 and other
operating systems supported by SDL2. It is covered under the GPL, check
the file COPYING, for more information.

See `INSTALL.linux.md` for instructions on how to compile and run Pingus
from source on GNU/Linux and `INSTALL.macosx.md` for MacOSX.

Information about the game, new versions and additional documentation
can be found at the Pingus webpage:

* http://pingus.gitlab.io/


Mailing Lists
-------------

There are currently two mailing lists available:

* pingus-devel - A list for discussing development issues, like level
  creation or code changes, but might as well be used for user issues
  like how to solve levels and such

* pingus-cvs - Read-only list to which all CVS commits get submitted,
  only intersting for developers in general

For information on how to subscribe to any of these lists have a look
at:

* http://pingus.gitlab.io/contact.html


IRC
---

For a quick help you can try the IRC server irc.freenode.net:6667 and
the channel #pingus, you can sometimes find the project maintainer
(nick: grumbel) there.


Bug Reports
-----------

Bug reports, new levels and feature requests can be submitted to the
issue tracker at:

* https://gitlab.com/pingus/pingus/issues


Nightly Builds
--------------

Experimental nightly builds for Linux are available via [FlatPak](https://flatpak.org/):

    sudo flatpak remote-add --no-gpg-verify pingus "https://gitlab.com/pingus/pingus/-/jobs/artifacts/master/raw/build-flatpak-repo?job=build:flatpak"
    sudo flatpak install pingus org.pingus.Pingus
