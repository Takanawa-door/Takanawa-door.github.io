---
title: MciPlayer 文档
---

**标签：**文档

---

# MCI 音乐播放封装库

## 简介

MCI 音乐播放封装库（以下简称 MciPlayer），将 Windows 提供的 MCI 接口进行封装，不必再输入长长的一大串 MCI 命令。

使用本库需要链接 winmm 库。对于 GCC/G++，在构建时添加选项 `-lwinmm` 即可。

## 项目结构

```
MciPlayer
+ debug
| - libmciplayer32.a
|   MciPlayer 库的 32 位 Debug 构建版本。
| - libmciplayer64.a
|   MciPlayer 库的 64 位 Debug 构建版本。
+ include\mciplayer
| - player.h
|   MciPlayer 库的头文件，包含 Music 类声明。
+ release
| - libmciplayer32.a
|   MciPlayer 库的 32 位 Release 构建版本。
| - libmciplayer64.a
|   MciPlayer 库的 64 位 Release 构建版本。
+ src\player
| - player.cxx
|   player.h 文件中 Music 类的函数实现。
```

## Music 类

Music 类是 MciPlayer 库的核心，它将 MCI 提供的接口封装起来，使用如下语句就可以初始化一个 Music 类[^1]。

```cpp
Music music;
music.path = "音乐路径，例如：c:/it's just a burning memory.mp3";
music.name = "音乐别名，例如：playmusic";
// 不应该这么写（因为未实现对应构造函数）：
Music bad(path, name);
```

Music 类结构如下：

```
函数
  见下
成员
- name
  Mci 音乐别名。
- path
  音频文件路径。
- vol
  音频播放时的音量，默认为 10000，使用 volume() 方法设置音量为 vol。
- doRepeat
  指定是否循环播放，设置后要调用 play(...) 方法乃有效。
注：不含该在上述内容的成员，如 isPause，不应该更改，只可读取。
```

### Music::load() 方法

初始化 path 与 name 后，调用 load() 方法以加载音频文件。

**参数：**无。

**返回值：**返回 MCIERROR 类型，值为 0 则说明执行成功，否则返回 MCI 错误码。

### Music::unload() 方法

播放完毕后，卸载音频文件以解除对音频文件的占用。

**参数：**无。

**返回值：**返回 MCIERROR 类型，值为 0 则说明执行成功，否则返回 MCI 错误码。

### Music::play(const int x) 方法

播放音频。执行之前必须调用 load() 方法加载文件，否则播放失败。

**参数：**x（const int），指定从位置 x 开始播放，不可以缺省。

**返回值：**返回 MCIERROR 类型，值为 0 则说明执行成功，否则返回 MCI 错误码。

### Music::pause() 方法

暂停当前播放的音乐或取消暂停。

**参数：**无。

**返回值：**返回 MCIERROR 类型，值为 0 则说明执行成功，否则返回 MCI 错误码。

### Music::volume() 方法

将当前已加载音频播放音量设置为成员 vol 的值。

**参数：**无。

**返回值：**返回 MCIERROR 类型，值为 0 则说明执行成功，否则返回 MCI 错误码。

### Music::where() 方法

获取当前播放到的位置。

**参数：**无。

**返回值：**返回当前播放到的位置。

### Music::length()方法

获取当前已加载音频的长度。

**参数：**无。

**返回值：**返回当前已加载音频的长度。

### 代码示例

```cpp
#include <iostream>
#include "mciplayer/player.h"

int main()
{
    Music music;
    // Path should be an exist and be-supported file, such as mp3.
    music.path = "./test.mp3";
    music.name = "music";
    music.load();
    std::cout << "The length of the file: " << music.length() << ".\n";
    music.play(0);
    std::cin.get();
    music.pause();
    std::cout << "The pos now: " << music.where() << ".\n";
    std::cin.get();
    music.pause();
    music.unload();
    return 0;
}
```

[^1]: 语句中，音乐别名是 MCI 为了简化操作音乐而设计的。
