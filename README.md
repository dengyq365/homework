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

c语言共有6种语句:

- 标号语句
- 复合语句
- 表达式语句
- 选择语句
- 迭代语句
- 跳转语句

## 算法的复杂度

- 一个程度或算法的时间效率，也称时间复杂度，有时简称"复杂度"。
- 复杂度 用大写的字母O和小写的字母n表示，比如O(n),O(n**2)等。n代表问题的规模。

