# SuperCalc
## About
You won't see some boring GUI window with a on-screen keyboard, you're on a computer for God's sake, why use an on-screen keyboard?  
This calculator will open a **text editor** to edit a temporary file. Once the editor/tab is closed, C++ will blazingly fast parse your calculation and spit out a result in another file!
## Contributing
### [Cmake](https://www.cmake.org) by KitWare
#### Why Cmake?
Cmake lets this project stay cross-platform and cross-IDE. Contributors all use a different IDE.

If you are using **[Visual Studio](https://visualstudio.microsoft.com/)**, and someone else is using **[Ninja Build](https://ninja-build.org/)**, everyone requires different build files. Cmake lets everyone, instead of manually maintaining both build files, generates them automatically. You still need a build system (like Ninja) and a compiler (like GCC) though.
#### Woah, what's a generator and a compiler?
The generator (Cmake's Ninja or Visual Studio generator) makes all the build files, like `ninja.build` or a Visual Studio solution file. A compiler actually makes an app out of your code and follows the instructions in the build files. Then there's the build system, such as Ninja or Visual Studio's project files, which tells the compiler exactly what to do.
#### Installing Cmake
To contribute, first install Cmake. Cmake is the build system for this project. You can read about it on [KitWare's official Cmake site](https://cmake.org/).
##### Windows:
```
winget install Cmake
```
##### Debian Linux \(or any distro from the Debian family\)
Open your terminal and run:
```
sudo apt update
```
if you haven't already. Then:
```
sudo apt install KitWare.Cmake
```
##### Any system with a web browser that Cmake can run on:
**Visit [KitWare's official Cmake site](https://cmake.org/)** and click **download.** From there, choose the right file for your OS. \(e.g. `.exe` for Windows\)
### Generating build files with Cmake
Change to the project's directory, then run:
```
cmake -G "[YOUR GENERATOR]"
```
Where `[YOUR GENERATOR]` is the generator you use, such as Cmake's Ninja generator.
### Compiling
This varies from compiler to compiler. Look up your compiler's instructions. \(or ask ChatGPT, it really doesn't matter\)