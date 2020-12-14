[![](https://iarduino.ru/img/logo.svg)](https://iarduino.ru)[![](https://wiki.iarduino.ru/img/git-shop.svg?3)](https://iarduino.ru) [![](https://wiki.iarduino.ru/img/git-wiki.svg?2)](https://wiki.iarduino.ru) [![](https://wiki.iarduino.ru/img/git-lesson.svg?2)](https://lesson.iarduino.ru)[![](https://wiki.iarduino.ru/img/git-forum.svg?2)](http://forum.trema.ru)

**This is a library for Arduino IDE. It allows to work with [Trema-module 4-Digit display Flash-i2C](https://iarduino.ru/shop/Displei/chetyrehrazryadnyy-indikator-led-krasnyy-flash-i2c-trema-modul.html) module made by iArduino.ru**

**Данная библиотека для Arduino IDE позволяет работать с [Trema-модулем Четырёхразрядный индикатор Flash-i2C](https://iarduino.ru/shop/Displei/chetyrehrazryadnyy-indikator-led-krasnyy-flash-i2c-trema-modul.html) от [iArduino.ru](https://iarduino.ru)**

> Подробнее про установку библиотеки читайте в нашей [инструкции](https://wiki.iarduino.ru/page/Installing_libraries/).

> Подробнее про подключение к [Arduino UNO](https://iarduino.ru/shop/boards/arduino-uno-r3.html)/[Piranha UNO](https://iarduino.ru/shop/boards/piranha-uno-r3.html) читайте на нашей [wiki](https://wiki.iarduino.ru/page/joystick-i2c/#h3_3)


| Модель | Ссылка на магазин |
|---|---|
| <p></p> <img src="https://wiki.iarduino.ru/img/resources/1312/1312.svg" width="100px"></img>| https://iarduino.ru/shop/Expansion-payments/dzhoystik-i2c---flash-trema-modul.html |

## Назначение функций:

**Подключаем библиотеку**

```C++
#include <iarduino_I2C_4LED> // Подключаем библиотеку iarduino_I2C_4LED для работы с модулем.
```

**Создаём объект**

```C++
iarduino_I2C_4LED ОБЪЕКТ; // Создаём объект для работы с методами библиотеки без указания адреса модуля на шине I2C.

iarduino_I2C_4LED ОБЪЕКТ( АДРЕС ); // Создаём объект для работы с методами библиотеки указывая адрес модуля на шине I2C.
```

**Инициализация работы**

```C++
ОБЪЕКТ.begin(); // Инициализация работы с модулем.
```

**Изменение адреса модуля**

```C++
ОБЪЕКТ.changeAddress( АДРЕС ); // Изменение адреса модуля на шине I2C.
```

**Перезагрузка модуля**

```C++
ОБЪЕКТ.reset(); // Перезагрузка модуля.
```

**Получение текущего адреса**

```C++
ОБЪЕКТ.getAddress(); // Получение текущего адреса модуля на шине I2C.
```

**Получение версии прошивки**

```C++
ОБЪЕКТ.getVersion(); // Получение версии прошивки модуля.
```

**Управление внутрисхемной подтяжкой**

```C++
setPullI2C( \[ФЛАГ\] ); // Управление внутрисхемной подтяжкой линий шины I2C.
```

**Запрос состояния внутрисхемной подтяжки**

```C++
getPullI2C(); // Запрос состояния внутрисхемной подтяжки линий шины I2C.
```

**Очистка индикатора**

```C++
clear(); // Очистка индикатора
```

**Установка яркости свечения**

```C++
light( ЯРКОСТЬ ); // Установка яркости свечения индикатора.
```

**Установка точек**

```C++
point( ПОЗИЦИЯ , СОСТОЯНИЕ ); // Установка точек.
```

**Управление миганием цифр**

```C++
blink( ПОЗИЦИЯ , СОСТОЯНИЕ ); // Управление миганием цифр.
```

**Установка частоты миганий цифр**

```C++
frequ( ЧАСТОТА ); // Установка частоты миганий цифр.
```

**Разворот изображения индикатора**

```C++
turn( ФЛАГ ); // Разворот изображения индикатора.
```

**Включение светодиодов по битам**

```C++
setLED( БАЙТ1, БАЙТ2, БАЙТ3, БАЙТ4, ФЛАГ ); // Включение светодиодов по битам.
```

**Вывод числа, массива, текста**

```C++
print( ЗНАЧЕНИЕ , ПАРАМЕТРЫ\_ВЫВОДА\_ЧИСЛА ); // Вывод числа, массива, текста.
```

**Установка частоты обновления индикатора**

```C++
fps( ЧАСТОТА ); // Установка частоты обновления всего изображения индикатора.
```

**Установка схемы включения светодиодов**

```C++
scheme( СХЕМА ); // Установка схемы включения светодиодов.
```
