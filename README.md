# c++ 学习

主要包括c, c++基础，算法，以及面向对象的内容。

## string

```c++
strcpy(char [] dest, char [] src);

int strcmp(char[] s1, char [] s1);

int  strlen(char [] s);

strcat(char [] s1, char [] s2); // s1 + s2

strupr(char []);

strlwr(char []);

// 字串 时间复杂度 s1 * s2 大小
int Strstr(char s1[],char s2[]){
    if(s2[0] == o){
        return 0;
    }
    for(int i = 0; s1[i]; ++i){
        int k = i, j;
        for(; s2[j]; ++k, ++j){
            if(s1[k] != s2[j]){
                break;
            }
        }
        if(s2[j] == 0)
            return i;
    }
    return -1;
}
```

## pointer

32位计算机大小为4byte, 64位为8byte。

## 其他

### c语言共有6种语句:

- 标号语句
- 复合语句
- 表达式语句
- 选择语句
- 迭代语句
- 跳转语句

### Null pointer: nullptr

指针需要初始化，如果没有给定地址可以指向特殊地址nullptr。
指针在使用完成之后可以进行解引用(dereference)。

```c++
// 指针指向是heap内存(堆内存)
int * myintegerPointer = nullprt;
if(! myintgerPointer){/* xxx */}
// 也可以通过new给指针分配内存,给指针分配一个整型的值
myintegerPointer = new int;
// 给指针所在地址赋值
*myintegerPointer = 8;
// 删除/收回 指针指向的地址的内存空间。因为没有指针指向该地址，所以该地址存储的内容会被删除，该存储空间会被回收。
delete myintegerPointer;

// 指针指向stack内存(栈内存)
int  i = 8;
int * myintegerPoint = &i;
// 指向结构的指针可以采用解引用操作符 ->

Employee * anEmployee = getEmploy();
// 我们可以通过解引用操作符对其进行操作
// 以下操作都是同样的效果
cout << (*anEmployee).salary << endl;
cout << anEmployee->salary << endl;
```

### smart pointer

```c++
// <memory> && namespace std

// unique_ptr是普通的指针，当超过作用于
std::unique_ptr

std::share_ptr
```

## 算法的复杂度

- 一个程度或算法的时间效率，也称时间复杂度，有时简称"复杂度"。
- 复杂度 用大写的字母O和小写的字母n表示，比如O(n),O(n**2)等。n代表问题的规模。

