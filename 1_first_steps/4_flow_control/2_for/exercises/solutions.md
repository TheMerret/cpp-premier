
## Упражнение 1.12

> Что делает следующий цикл `for`? Каково финальное значение переменной sum?

```cpp
int sum = 0;
for (int i = -100; i <= 100; ++i)
    sum += i;
```

Результат - 0

## Упражнение 1.13

> Перепишите упражнения раздела 1.4.1, используя циклы `for`.

[13.9.cpp](13.9.cpp)

[13.10.cpp](13.10.cpp)

[13.11.cpp](13.11.cpp)

## Упражнение 1.14

> Сравните циклы с использованием операторов `for` и `while` в двух предыдущих упражнениях. Каковы преимущества и недостатки каждого из них в разных случаях?

- Advantage of `for` and disadvantage of `while`:
    - Locality, the variable in the scope of the loop.
    - Pattern happens so often: using a variable in a condition and incrementing that variable in the body.
- Advantage of `while` and disadvantage of `for`:
    - Clear when there is only one static condition.
    - Readable when the global variables incremented in the body

## Упражнение 1.15

> Напишите программы, которые содержат наиболее распространенные ошибки, обсуждаемые во врезке «Ввод конца файла с клавиатуры». Ознакомьтесь с сообщениями, выдаваемыми компилятором.

Устно
