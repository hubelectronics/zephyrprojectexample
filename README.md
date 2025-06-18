# HUB ELECTRONICS - Zephyr RTOS Guide

At HUB ELECTRONICS, we work on a large number of projects with a wide variety of microcontrollers, making it difficult to learn all the platforms and HALs. In this case, **Zephyr RTOS** will provide us with greater flexibility, code reuse, and efficiency.

## Zephyr Installation

1. **Install the dependencies** by following the steps in the first part of the [Zephyr Getting Started Guide](https://docs.zephyrproject.org/3.7.0/develop/getting_started/index.html) (be sure you are installing the development environment for version 3.7.0).

2. We will get Zephyr and install Python dependencies with a virtual environment, so if we need to work with another different version in the future, it will be easier. Follow the next steps:
	1. Open `cmd.exe` as a regular user.
	2. Run the following commands:
		```cmd
		cd %HOMEPATH%
		python -m venv [name of the application directory you want to use]\.venv
		[name of your application repository]\.venv\Scripts\activate.bat
		pip install west
		west init -m [GitHub URL]
		cd [name of your application repository]
		west update
		west zephyr-export
		pip install -r %HOMEPATH%\[name of your application repository]\zephyr\scripts\requirements.txt
		```

3. Go back to the Getting Started Guide and follow the **Zephyr SDK** installation.

4. We can now clone our common library hubelectronics-library as a submodule inside our project
git clone https://github.com/hubelectronics/hubelectronics-library.git

If we find we have already this submodule added but we do not see the content, we could maybe need to run the fol
	git submodule update --init --recursive

5. Then we will compile the project:
	```cmd
	cd [name of your application repository]
	west build -b $[select the board, ex nrf52840dk_nrf52840] app
	west flash
	````


## Zephyr support

	Zephyr provides support through two platforms: Discord, recommended for quick questions and inquiries, and GitHub, for more complex questions and bug reporting. 


## Other interesting links

	https://docs.zephyrproject.org/latest/develop/tools/vscode.html