# 从旧笔记库迁入的早期练习源码

这批文件是早期学习数据结构与基础算法时保存在个人笔记库中的练习、示例和未完成片段，共 **26 份：19 份 C、7 份 C++**。C 主要练习指针、动态内存和手写数据结构，也包含排序、二分；C++ 主要用于 `vector`、排序及递归分治，另有链表归并排序。

2026-10-17 从 `lumikok.github.io/docs/contents/notes/algorithms/` 迁入，保留原分类、文件名、字节和编码。原笔记仓库迁移前提交为 `3c0047e`，初始化提交 `0636b35`（2026-05-23）中已有这批源码；这不是每个文件的实际编写日期。

## 文件索引

以下路径相对于本目录。**“演示程序”表示含 `main`，不表示代码已验证正确；“片段”需要另配调用程序。** 用途及问题根据源码阅读整理，本次没有修复或重新编译这些历史实现。

### 数据结构：12 份 C

| 文件 | 用途与当前形态 |
|---|---|
| [array/vector.c](data-structures/array/vector.c) | `malloc` 分配整数数组，输入、遍历并释放；有 `main`。虽然叫 vector，实际是 C 动态分配数组，没有自动扩容。 |
| [hash-table/1.c](data-structures/hash-table/1.c) | 字符串到整数的哈希表：djb2 哈希、链地址法处理冲突、插入/更新、查找、删除和释放；测试 `main` 被注释，使用 `strdup`。 |
| [linked-list/1.c](data-structures/linked-list/1.c) | 不带哨兵头节点的单链表头插、遍历、释放；有输入演示，输出次序与输入相反。 |
| [linked-list/2.c](data-structures/linked-list/2.c) | 单链表节点/表结构、初始化与头插的简短片段，无遍历、释放和 `main`。 |
| [linked-list/3.c](data-structures/linked-list/3.c) | 带哨兵头节点的单链表：尾插保持输入顺序、打印、删除首个指定值、释放；有 `main`，输入 `0` 结束建表。 |
| [linked-list/4.c](data-structures/linked-list/4.c) | 只有“双向链表（模版）”注释，尚无实现。 |
| [list/1.c](data-structures/list/1.c) | 手写可扩容顺序表：容量/长度、访问修改、追加、插入和删除等片段。初始容量写 10 却只分配一个 `int`，插入处误把指针赋给元素，不能直接作为正确模板。 |
| [queue/1.c](data-structures/queue/1.c) | 链表队列的初始化、入队、出队、队首和遍历片段；节点类型声明、空队出队、末节点删除后的尾指针及队列对象释放仍有缺口。 |
| [queue/2.c](data-structures/queue/2.c) | 数组队列的结构、创建和释放草稿；分配表达式有错误，尚未实现入队、出队等操作。 |
| [queue/3.c](data-structures/queue/3.c) | 基于双向链表的双端队列，封装两端插入、删除和访问；无 `main`，删至空队后另一端指针未同步清空。 |
| [stack/1.c](data-structures/stack/1.c) | 链表栈的创建、释放、入栈、出栈和栈顶片段；有 `whlie` 拼写、节点类型声明及 `bool` 头文件问题。 |
| [stack/2.c](data-structures/stack/2.c) | 固定最大容量 100 的数组栈，演示用长度维护逻辑栈顶；有创建、释放和基本操作，无 `main`，C 中使用 `bool` 尚缺对应头文件。 |

### 二分查找：2 份 C

| 文件 | 用途与当前形态 |
|---|---|
| [binary-1.c](searching/binary-1.c) | 升序数组上的迭代二分，找到返回下标、未找到返回 `-1`；有交互 `main`，未找到时仍打印成“第 0 个元素”。 |
| [binary-2.c](searching/binary-2.c) | 二分查找目标，未找到返回插入位置；有固定数组演示。命中时立即返回，含重复值时不保证是第一个相等位置。 |

### 排序：10 份，5 份 C、5 份 C++

| 文件 | 用途与当前形态 |
|---|---|
| [bubble-1.c](sorting/bubble-1.c) | 基础冒泡排序函数，通过相邻交换把大数推到右端；无 `main`。 |
| [bubble-2.c](sorting/bubble-2.c) | 带交换标记的冒泡排序函数，一轮没有交换就提前结束；无 `main`。 |
| [selection-1.c](sorting/selection-1.c) | 选择排序及固定数组演示；内层条件仍为 `j <= size`，会访问数组末尾之外，笔记正文后来已修正此问题。 |
| [insertion-1.c](sorting/insertion-1.c) | 直接插入排序函数，通过右移较大元素给待插入值留位置；无 `main`。 |
| [quick-1.c](sorting/quick-1.c) | 首元素作基准、双指针划分的递归快速排序；有固定数组演示，有序/重复值输入存在退化风险。 |
| [counting-1.cpp](sorting/counting-1.cpp) | 非负整数计数排序：统计次数后按值重建数组；只有函数及被注释的测试函数，值域大时计数数组开销大。 |
| [counting-2.cpp](sorting/counting-2.cpp) | 用最小值偏移支持负数的计数排序，累积次数后逆序回填以保持稳定；测试函数被注释，无 `main`。 |
| [merge-1.cpp](sorting/merge-1.cpp) | `vector` 的递归归并排序，拆分左右数组再合并；有演示。相等时先取右侧，不具备稳定性。 |
| [merge-2list.cpp](sorting/merge-2list.cpp) | 单链表归并排序：快慢指针找中点、断链递归、合并；有演示，末尾未释放示例中 `new` 的节点。 |
| [radix-1.cpp](sorting/radix-1.cpp) | 非负整数的十进制 LSD 基数排序，每位使用稳定计数排序；有演示并打印中间结果，未覆盖负数和大数位权溢出边界。 |

### 分治与递归：2 份 C++

| 文件 | 用途与当前形态 |
|---|---|
| [hanoi-1.cpp](techniques/divide-and-conquer/hanoi-1.cpp) | 用三个 `vector` 模拟汉诺塔并统计移动次数；有输入演示。仅处理正盘数，移动提示固定写左右柱，不能准确表示每步实际柱子。 |
| [search-1.cpp](techniques/divide-and-conquer/search-1.cpp) | 递归二分查找，提供区间版本和处理空数组的包装函数；有在 1～10 中查找 9 的演示。 |

## 使用方式

- 用于回看最初如何表达数据结构、指针关系与算法步骤；当前复习和新题仍在仓库的 `re/`、`01_date/` 等目录继续。
- 这是历史快照，包含草稿与错误，并非可直接复制的标准实现。需要复练时另建当前练习，先修正相应问题，再编译和测试边界。
- 多数中文注释按 GBK/CP936 可读；显示乱码时先选择原编码。本次未统一转码，以免改动原始文件；本目录的 `.gitattributes` 禁止 Git 自动转换 C/C++ 源码换行，保留原始字节。
- 网站笔记保留 Markdown 中的解释和必要代码块；本目录不再维护一份与正文同步的源码副本。
