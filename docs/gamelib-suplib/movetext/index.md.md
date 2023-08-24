---
title: GameLib::moveText 文档
---

**标签：**文档 | GameLib

# 声明与功能

在 `gamelib/clearscreen.hxx` 中：

```cpp
namespace GameLib
{
    int moveText(HANDLE hOut, const CONSOLE_SCREEN_BUFFER_INFOEX& csbi,
            const SMALL_RECT& area, const COORD& dest) noexcept;
}
```

该函数能够移动 `area` 指定范围内的文本到 `dest`，并且将原 `area` 区域以 `csbi.wAttribute` 为颜色的空白字符填充。

# 参数

**`hOut`** 指向当前活动缓冲区的句柄。

**`csbi`** 是一个存储当前控制台屏幕缓冲区信息的结构体，其在事先应该被初始化：`csbi.cbSize = sizeof csbi`。

**`area`** 储存了将被移动的文本的区域的左上角和右下角的坐标信息。

**`dest`** 指定被移动文本移动到的区域。

# 示例

```cpp
// 未完成
```

