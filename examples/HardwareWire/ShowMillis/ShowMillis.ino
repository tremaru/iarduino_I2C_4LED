// ПРИМЕР ВЫВОДИТ СЕКУНДЫ ПРОШЕДШИЕ ПОСЛЕ СТАРТА: // * Строки со звёздочкой являются необязательными.
                                                  //
// 4-х разрядный LED индикатор, красный:          //   https://iarduino.ru/shop/displays/chetyrehrazryadnyy-indikator-led-krasnyy-flash-i2c-trema-modul.html
// 4-х разрядный LED индикатор, синий:            //   https://iarduino.ru/shop/displays/chetyrehrazryadnyy-indikator-led-siniy-flash-i2c-trema-modul.html
// Информация о подключении модулей к шине I2C:   //   https://wiki.iarduino.ru/page/i2c_connection/
// Информация о модуле и описание библиотеки:     //   https://wiki.iarduino.ru/page/4-led-i2c/
                                                  //
#include <Wire.h>                                 //   Подключаем библиотеку для работы с аппаратной шиной I2C, до подключения библиотеки iarduino_I2C_4LED.
#include <iarduino_I2C_4LED.h>                    //   Подключаем библиотеку для работы с индикатором I2C-flash.
iarduino_I2C_4LED dispLED(0x09);                  //   Объявляем объект dispLED для работы с функциями и методами библиотеки iarduino_I2C_4LED, указывая адрес модуля на шине I2C.
                                                  //   Если объявить объект без указания адреса (iarduino_I2C_4LED dispLED;), то адрес будет найден автоматически.
float i;                                          //   Объявляем переменную для хранения числа секунд прошедших с момента старта скетча.
                                                  //
void setup(){                                     //
     delay(500);                                  // * Ждём завершение переходных процессов связанных с подачей питания.
     dispLED.begin(&Wire); // &Wire1, &Wire2 ...  //   Инициируем работу с индикатором, указав ссылку на объект для работы с шиной I2C на которой находится индикатор (по умолчанию &Wire).
}                                                 //
                                                  //
void loop(){                                      //
     i = (float) millis()/1000;                   //   Получаем время в секундах с момента старта скетча в виде числа с плавающей точкой.
     dispLED.print( i , 2);                       //   Выводим число с двумя знаками после запятой.
}                                                 //
