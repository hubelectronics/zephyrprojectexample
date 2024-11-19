# HUB ELECTRONICS - Zephyr RTOS Guide

At HUB ELECTRONICS, we work on a large number of projects with a wide variety of microcontrollers, making it difficult to learn all the platforms and HALs. In this case, **Zephyr RTOS** will provide us with greater flexibility, code reuse, and efficiency.

## Objective

Our goal is to use Zephyr for all projects that support this platform and gradually expand our sensor library with the intention of easily reusing it in the future. Therefore, each library must be designed with the following aspects in mind: **ease of understanding**, **efficiency**, and **reusability**.

Similarly, we want all programmers to use the same development environment so that we can help each other and share the knowledge that each one acquires on this platform. For this reason, we will use **Windows**, **Visual Studio Code**, and **Zephyr RTOS 3.7.99 revision 4793e00ae803ae6b7948e4c110f7ceef11821ef5**, as it is the latest LTS (Long Term Support) version at the time this guide is being written. Additionally, as much as possible, we will try to program in **C++** to achieve better code structure.

## Zephyr Installation

1. **Install the dependencies** by following the steps in the first part of the [Zephyr Getting Started Guide](https://docs.zephyrproject.org/3.7.0/develop/getting_started/index.html) (be sure you are installing the development environment for version 3.7.0).

2. We will get Zephyr and install Python dependencies with a virtual environment, so if we need to work with another different version in the future, it will be easier. Follow the next steps:
   1. Open `cmd.exe` as a regular user.
   2. Run the following commands:
      ```cmd
      cd %HOMEPATH%
      python -m venv [name of the directory you want to use]\.venv
      [name of the directory you want to use]\.venv\Scripts\activate.bat
      pip install west
      west init -m [GitHub URL]
      cd [name of the directory you want to use]
      west update
      west zephyr-export
      pip install -r %HOMEPATH%\[name of the directory you want to use]\zephyr\scripts\requirements.txt
      ```

3. Go back to the Getting Started Guide and follow the **Zephyr SDK** installation.

4. Then we will compile the project:
   ```cmd
   cd example-application
   west build -b $BOARD app
   west flash
   ````

5. If we get to compile with no errors we can now clone our common library hubelectronics-library as a submodule
   git clone https://github.com/hubelectronics/hubelectronics-library.git
   
