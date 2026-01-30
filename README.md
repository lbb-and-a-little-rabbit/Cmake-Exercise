# CMake练习
系统：windows

课程视频 [bilibili](https://www.bilibili.com/video/BV14s4y1g7Zj/?spm_id_from=333.788.videopod.sections&vd_source=e686cd58516f2e4ccf0472b05f462723)

---
结构：
```bash
│  .gitignore
│  README.md
│
├─exercise1
│      add.cpp
│      CMakeLists.txt
│      divide.cpp
│      head.h
│      main.cpp
│      mult.cpp
│      sub.cpp
│
├─exercise2
│  │  CMakeLists.txt
│  │
│  ├─include
│  │      head.h
│  │
│  └─src
│          add.cpp
│          divide.cpp
│          main.cpp
│          mult.cpp
│          sub.cpp
│
├─exercise3
│  │  CMakeLists.txt
│  │
│  ├─include
│  │      head.h
│  │
│  ├─lib
│  │      libcalc.a
│  │      libcalc.dll
│  │      libcalc.dll.a
│  │
│  └─src
│          add.cpp
│          divide.cpp
│          main.cpp
│          mult.cpp
│          sub.cpp
│
├─exercise4
│  │  CMakeLists.txt
│  │
│  ├─include
│  │      head.h
│  │
│  ├─lib
│  │      libcalc.dll
│  │      libcalc.dll.a
│  │
│  └─src
│          add.cpp
│          divide.cpp
│          main.cpp
│          mult.cpp
│          sub.cpp
│
├─exercise5
│      CMakeLists.txt
│      main.cpp
│
├─lib_use
│  ├─dynamic
│  │  │  CMakeLists.txt
│  │  │  main.cpp
│  │  │
│  │  ├─bin
│  │  │      libcalc.dll
│  │  │
│  │  ├─include
│  │  │      head.h
│  │  │
│  │  └─lib
│  │          libcalc.dll.a
│  │
│  └─static
│      │  CMakeLists.txt
│      │  main.cpp
│      │
│      ├─include
│      │      head.h
│      │
│      └─lib
│              libcalc.a
│
└─Nestification
    │  CMakeLists.txt
    │
    ├─bin
    │      app.exe
    │
    ├─include
    │      head.h
    │
    ├─lib
    │      libcalc.a
    │
    ├─src
    │      add.cpp
    │      CMakeLists.txt
    │      divide.cpp
    │      mult.cpp
    │      sub.cpp
    │
    └─test
            CMakeLists.txt
            main.cpp
```

---
## 运行方式（MinGW）
```bash
cmake -S . -B build -G "MinGW Makefiles"
cmake --build build
```

## 部分用法文档

- **list用法文档** 

    [https://cmake.org/cmake/help/v3.26/command/list.html](https://cmake.org/cmake/help/v3.26/command/list.html)

---

## 🧩 CMake（跨平台构建系统）
- **CMake 官方下载页**  
  [https://cmake.org/download/](https://cmake.org/download/)

可下载 Windows/Mac/Linux 的安装程序或压缩包。

---