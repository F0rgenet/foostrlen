## Описание
Этот проект представляет собой программу на C++, которая вычисляет длину строки, введенной пользователем. Программа работает в бесконечном цикле, запрашивает ввод строки у пользователя и выводит её длину. Программа завершает работу, если пользователь вводит пустую строку.

## Структура проекта
- `src/` - исходные файлы программы
    - `main.cpp` - основной файл программы
    - `functions.cpp` - реализация функции `fooStrLen`
    - `functions.h` - заголовочный файл с объявлением функции `fooStrLen`
- `tests/` - файлы тестов
    - `main_test.cpp` - тесты для функции `fooStrLen`
- `CMakeLists.txt` - файл конфигурации CMake для сборки проекта
- `.gitignore` - файл для исключения временных и ненужных файлов из репозитория

## Требования
- CMake 3.29 или выше
- Компилятор C++ с поддержкой стандарта C++20

## Сборка и запуск

1. Откройте проект в CLion.
2. Перейдите в меню `File` -> `Reload CMake Project`, чтобы перезагрузить конфигурацию CMake.
3. Нажмите на кнопку `Build` (или используйте сочетание клавиш `Ctrl+F9`), чтобы собрать проект.
4. Для запуска программы нажмите на кнопку `Run` (или используйте сочетание клавиш `Shift+F10`).

## Тестирование

1. Откройте проект в CLion.
2. Перейдите в меню `File` -> `Reload CMake Project`, чтобы перезагрузить конфигурацию CMake.
3. Нажмите на кнопку `Build` (или используйте сочетание клавиш `Ctrl+F9`), чтобы собрать тесты.
4. Перейдите в меню `Run` -> `Edit Configurations...`.
5. Нажмите на `+` и выберите `Google Test`.
6. В поле `Target` выберите `runTests`.
7. Нажмите `OK`.
8. Для запуска тестов нажмите на кнопку `Run` (или используйте сочетание клавиш `Shift+F10`).

## Пример работы программы
```shell
This program calculates the length of a string. 
Press <enter> to exit. 
Enter a string: 
Hello, world! 
Length: 13 
Enter a string:
</enter>
Exiting program...
```

## Примечание
Шаги сборки и тестирования описаны только для CLion, так как этот IDE предоставляет удобные инструменты для работы с CMake и Google Test, что упрощает процесс настройки и запуска проекта. Если вы используете другую среду разработки или хотите собрать и протестировать проект вручную, вам потребуется адаптировать команды и шаги под вашу конфигурацию.