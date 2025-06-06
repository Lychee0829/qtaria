# A guide to building and running the Qtaria project

This guide is a tip for building and running a Qtaria project on an Arch Linux system. **Note: Only available for Arch Linux related distributions**

## Thanks

[Qtaria original project](https://github.com/manox14/qtaria)

The original project contributors are as follows:

1.  [arunpyasi](https://github.com/openarun)
2.  [born-jre](https://github.com/born-jre)
3.  [Kool Arpan](https://github.com/kooolarpan)
4.  [Pradip Dhakal](https://github.com/pradip001)
5.  [nirooj56](https://github.com/nirooj56)
6.  [prashant10651me](https://github.com/prashant10651me)

## 📦 Dependent installation

Before you build your project for the first time, make sure you have all the necessary dependencies installed. You can install the required dependencies with the following command:

```bash
# install dependencies
./install_deps.sh
```

The script automatically does the following:

*   Install the Qt5 library base (including Widgets, Network, WebSockets, etc.)
*   Install the OpenSSL 1.1 compatible version
*   Install the ARIA2 Download Manager library
*   Create symlinks for `libssl.so.1.0.0` and `libcrypto.so.1.0.0` to be compatible with legacy dependencies

> ⚠️ Note: This script requires administrator privileges to install system-level dependencies.

## 🛠️ Build the project

To build your project, run the following command:

```bash
# build project
./build.sh
```

The script does the following:

*   Clean up old build files (if they exist)
*   Use `qmake` to generate a Makefile
*   Compile the entire project

If the build is successful, the terminal will prompt you to run the program via `./qtaria`.

## ▶️ Run the program

Once the build is complete, you can run the program with the following command:

```bash
# run program
./run.sh
```

The script checks for the presence of the executable and launches the application.

## 🔧 Uninstall dependencies

If you wish to clean up your system and uninstall the packages that your project depends on, you can run:

```bash
# uninstall dependencies
./uninstall_deps.sh
```

The script will:

*   Delete the `libssl.so.1.0.0` and `libcrypto.so.1.0.0` symlinks that you created earlier
*   Uninstall Qt5, OpenSSL 1.1, and aria2 packages

> ⚠️ Note: This will remove the relevant development libraries from the system, please make sure they are not being used by other projects.

## 📝 Precautions

*   All scripts should be run in the project root directory `/home/lychee0829/qtaria/src`.
*   If you change the project path, manually modify the path in the script to match your actual environment.
*   If you run into any issues, you can try reviewing the compiled output or running `make clean` and rebuilding.
