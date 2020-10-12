VSCode编写C/C++项目

1. 下载插件C/C++、C++ Intellisense;
2. 新建一个空文件夹，从VSCode打开。 (或File-->Open Folder-->新建一个空文件jia);
3. 按F5（用命令行gcc、g++；或者编写makefile文件，make；），选择C++(GDB/LLDB)，生成launch.json（用来调试）;
5. 修改launch.json，将"program": "enter program name, for example ${workspaceFolder}/a.out"改为"program": "${workspaceFolder}/ProjectName";
"externalConsole": true，表示输出会在弹出的命令行。修改为false的化，会在VSCode内部terminal输出。
6. Ctrl+Shift+B, 选择tasks.json-->模板--->other，生成tasks.json（创建任务）；
7. 修改 tasks.json， "command": "echo Hello"改成"command": "g++ -o ProjectName ProjectName.cpp"，这里的ProjectName和5中的ProjectName同名
8. 对于复杂的项目，"command": "echo Hello"改成"command": "make"
9. 再创建makefile文件，编辑；
10. 编写Hello.cpp文件
11. 按Ctrl+Shift+P, 选择 Task:Run Tasks，执行任务
12. 按F5，执行