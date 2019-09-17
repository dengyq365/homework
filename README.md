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

// unique_ptr是普通的指针，当超过作用域时会自动回收内存。
std::unique_ptr
// share_ptr是共享的指针。
std::share_ptr
```

### 算法的复杂度

- 一个程度或算法的时间效率，也称时间复杂度，有时简称"复杂度"。
- 复杂度 用大写的字母O和小写的字母n表示，比如O(n),O(n**2)等。n代表问题的规模。

### reference

引用：相当于变量的别名

- 定义引用时一定要将其初始化成引用某个变量
- 初始化后，他就一直引用该变量，不会再引用别的变量
- 引用只能引用变量，不能引用常量或表达式

类型名 & 引用名 = 变量名;
int & r = n;

常引用： 定义引用时，前面加const关键字。不能通过常引用去修改其引用的内容
const T 类型和const T & 类型不能初始化T &类型的引用

```c++
int n;
const int & r = n;
```

### 常量指针

常量指针: 不能通过常量指针修改其指向的内容

```c++
int n, m;
const int * p = & n;
* p = 5; // 编译会出错
n = 4; // ok
p = &m; // 现在能改变指定内容
```

不能把常量指针赋值给非常量指针，反之可以
可以通过强制转换实现将常量指针赋值给非常量指针

```c++
const int * p1; int * p2;
p1 = p2; // right
p2 = p1; // 编译出错
p2 = (int *) p1; // 强制转换
```

### 内联函数

函数调用有时间开销。如果函数本身语句较少，而且执行过快，且函数执行次数较多。这时候用内联函数机制将大大的减少函数调用是的开销。内联函数的本质是编译器将函数直接插入到要调用的地方。

```c++
inline int Max(int a, int b){
    if(a > b) return a;
    return a;
}
```

### 函数重载

一个或多个函数，名字相同，但*参数个数*或*参数类型*不同，这叫函数的重载。
编译器根据调用时参数的个数和类型判断调用哪个函数。

```c++
int Max(double f1, double f2){}
int Max(int n1, int n2){}
```
