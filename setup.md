---
layout: page
title: Setup
---

## Setup for Day 1

For the first lesson in this course, you will need to ensure the following are installed on your computer:

* [Python](#python)
* [The Bash Shell](#the-bash-shell)
* [Git](#git)
* [A Text Editor](#a-text-editor)

Please follow the instructions below for installing these packages for your operating system.

### Python

[Python](https://python.org) is a popular language for research computing, and great for general-purpose programming as well. 
Installing all of its research packages individually can be a bit difficult, so we recommend 
[Anaconda](https://www.continuum.io/anaconda), 
an all-in-one installer. If you already have Python installed, *please install Anaconda anyway*. Anaconda
can be used alongside any other versions of Python. *Please also make sure you install Python version 
3.x (e.g., 3.5 is fine)*.

We will teach Python using the Jupyter notebook (also known as IPython notebook), a programming environment that runs 
in a web browser. For this to work you will need a reasonably up-to-date browser. The current versions of the Chrome, 
Safari and Firefox browsers are all supported (some older browsers, including Internet Explorer version 9 
and below, are not).

#### Windows

[Video Tutorial](https://www.youtube.com/watch?v=xxQ0mzZ8UvA)

1. Open [http://continuum.io/downloads](http://continuum.io/downloads) with your web browser
2. Download the Python 3 installer for Windows
3. Install Python 3 using all of the defaults for installation *except* make sure to check 
**Make Anaconda the default Python**

#### Mac OS X

[Video Tutorial](https://www.youtube.com/watch?v=TcSAln46u9U)

1. Open [http://continuum.io/downloads](http://continuum.io/downloads) with your web browser
2. Download the Python 3 installer for OS X
3. Install Python 3 using all of the defaults for installation

#### Linux

1. Open [http://continuum.io/downloads](http://continuum.io/downloads) with your web browser
2. Download the Python 3 installer for Linux
3. Install Python 3 using all of the defaults for installation
4. Open a terminal window
5. Type `bash Anaconda3-` and then press tab. The name of the file you just downloaded 
   should appear.
6. Press enter. You will follow the text-only prompts. When there is a colon at the bottom of the 
   screen press the down arrow to move down through the text. Type yes and press enter to approve the 
   license. Press enter to approve the default location for the files. Type yes and press enter to 
   prepend Anaconda to your PATH (this makes the Anaconda distribution the default Python).

### The Bash Shell

Bash is a commonly-used shell that gives you the power to do simple tasks more quickly.

#### Windows

[Video Tutorial](https://www.youtube.com/watch?v=339AEqk9c-8)

1. Download the Git for Windows [installer](https://git-for-windows.github.io/)
2. Run the installer and follow the steps bellow:
   1. Click on "Next".
   2. Click on "Next".
   3. **Keep "Use Git from the Windows Command Prompt" selected and click on "Next"**. 
      If you forgot to do this programs that you need for the workshop will not work properly. 
      If this happens rerun the installer and select the appropriate option.
   4. Click on "Next".
   5. **Keep "Checkout Windows-style, commit Unix-style line endings" selected and click on "Next"**.
   6. **Keep "Use Windows' default console window" selected and click on "Next"**.
   7. Click on "Install".
   8. Click on "Finish".
3. If your "HOME" environment variable is not set (or you don't know what this is):
   1. Open command prompt (Open Start Menu then type cmd and press [Enter])
   2. Type the following line into the command prompt window exactly as shown: `setx HOME "%USERPROFILE%"`
   3. Press [Enter], you should see `SUCCESS: Specified value was saved`.
   4. Quit command prompt by typing exit then pressing [Enter]

This will provide you with both Git and Bash in the Git Bash program.

#### Mac OS X

The default shell in all versions of Mac OS X is Bash, so no need to install anything. 
You access Bash from the Terminal (found in `/Applications/Utilities`). See the Git installation 
video tutorial for an example on how to open the Terminal. You may want to keep Terminal 
in your dock for this workshop.

#### Linux

The default shell is usually Bash, but if your machine is set up differently you can run it 
by opening a terminal and typing bash. There is no need to install anything.

### Git

Git is a version control system that lets you track who made changes to what when and has options 
for easily updating a shared or public version of your code on [github.com](https://github.com/). You will need a 
supported web browser (current versions of Chrome, Firefox or Safari, or Internet Explorer version 9 or above).

You will need an account at [github.com](https://github.com/) for parts of the Git lesson. Basic GitHub accounts are free. 
Please create a GitHub account if you don't have one already. Also, it is worth considering what personal 
information you'd like to reveal. For example, you may want to review these 
[instructions for keeping your email address private](https://help.github.com/articles/keeping-your-email-address-private/)
provided at GitHub.

#### Windows

Git should be installed on your computer as part of your Bash install (described above).

#### Mac OS X

[Video Tutorial](https://www.youtube.com/watch?v=9LQhwETCdwY)

**For OS X 10.9 and higher**, install Git for Mac by downloading and running the most recent "mavericks" installer 
from [this list](http://sourceforge.net/projects/git-osx-installer/files/). After installing Git, there will 
not be anything in your `/Applications` folder, as Git is a 
command line program. **For older versions of OS X (10.5-10.8)** use the most recent available installer 
labelled "snow-leopard" available [here](http://sourceforge.net/projects/git-osx-installer/files/).

### Linux

If Git is not already available on your machine you can try to install it via your distro's package manager. 
For Debian/Ubuntu use the command `sudo apt-get install git` and for Fedora use the command `sudo yum install git`.

### A Text Editor

When you're writing code, it's nice to have a text editor that is optimized for writing code, with features like 
automatic color-coding of key words. The default text editor on Mac OS X and Linux is usually set to Vim, 
which is not famous for being intuitive. if you accidentally find yourself stuck in it, try typing the escape key, 
followed by `:q!` (colon, lower-case 'q', exclamation mark), then hitting Return to return to the shell.

You're welcome to use whatever editor you are comfortable with, or follow the instructions below for using `nano`.

#### Windows

[Video Tutorial](https://www.youtube.com/watch?v=9LQhwETCdwY)

The `nano` editor is a basic editor and the default that instructors use in the workshop. 
To install it, download the 
[Software Carpentry Windows installer](https://github.com/swcarpentry/windows-installer/releases/download/v0.3/SWCarpentryInstaller.exe) 
and double click on the 
file to run it. **This installer requires an active internet connection**.

Others editors that you can use are [Notepad++](http://notepad-plus-plus.org/) or 
[Sublime Text](http://www.sublimetext.com/). **Be aware that you must add 
its installation directory to your system path**. Please ask your instructor to help you do this.

#### Mac OS X

The `nano` editor is a basic editor and the default that instructors use in the workshop.  See the 
Git installation [video tutorial](https://www.youtube.com/watch?v=9LQhwETCdwY) for an example on 
how to open `nano`. It should be pre-installed.

Others editors that you can use are [Text Wrangler](http://www.barebones.com/products/textwrangler/) or 
[Sublime Text](http://www.sublimetext.com/).

### Linux

The `nano` editor is a basic editor and the default that instructors use in the workshop. It should be pre-installed.

Others editors that you can use are [Gedit](https://wiki.gnome.org/Apps/Gedit), [Kate](http://kate-editor.org/) or 
[Sublime Text](http://www.sublimetext.com/).


