// ПРИМЕР СМЕНЫ АДРЕСА МОДУЛЯ:                            // * Строки со звёздочкой являются необязательными.
                                                          //
// 4-х разрядный LED индикатор, красный:                  //   https://iarduino.ru/shop/displays/chetyrehrazryadnyy-indikator-led-krasnyy-flash-i2c-trema-modul.html
// 4-х разрядный LED индикатор, синий:                    //   https://iarduino.ru/shop/displays/chetyrehrazryadnyy-indikator-led-siniy-flash-i2c-trema-modul.html
// Информация о подключении модулей к шине I2C:           //   https://wiki.iarduino.ru/page/i2c_connection/
// Информация о модуле и описание библиотеки:             //   https://wiki.iarduino.ru/page/4-led-i2c/
                                                          //
// Данный скетч демонстрирует не только                   //
// возможность смены адреса на указанный в                //
// переменной newAddress, но и обнаружение,               //
// и вывод текущего адреса модуля на шине I2C.            //
                                                          //
// Библиотека <iarduino_I2C_4LED.h> предназначена         //
// для работы с 4-х разрядными индикаторами I2C-flash     //
// и меняет только их адреса.                             //
// Но, в разделе Файл/Примеры/.../findSortDevices         //
// находятся примеры смены и сортировки адресов           //
// любых модулей iarduino серии Flash I2C.                //
                                                          //
uint8_t newAddress = 0x09;                                //   Назначаемый модулю адрес (0x07 < адрес < 0x7F).
                                                          //
#include <Wire.h>                                         //   Подключаем библиотеку для работы с аппаратной шиной I2C, до подключения библиотеки iarduino_I2C_4LED.
#include <iarduino_I2C_4LED.h>                            //   Подключаем библиотеку для работы с индикатором I2C-flash.
iarduino_I2C_4LED dispLED;                                //   Объявляем объект dispLED для работы с функциями и методами библиотеки iarduino_I2C_4LED.
                                                          //   Если при объявлении объекта указать адрес, например, dispLED(0xBB), то пример будет работать с тем модулем, адрес которого был указан.
void setup(){                                             //
    delay(500);                                           // * Ждём завершение переходных процессов связанных с подачей питания.
    Serial.begin(9600);                                   //
    while(!Serial){;}                                     // * Ждём завершения инициализации шины UART.
    if( dispLED.begin(&Wire) ){                           //   Инициируем работу с индикатором, указав ссылку на объект для работы с шиной I2C на которой находится индикатор (Wire, Wire1, Wire2 ...).
        Serial.print("Найден LED индикатор 0x");          //
        Serial.println( dispLED.getAddress(), HEX );      //   Выводим текущий адрес модуля.
        if( dispLED.changeAddress(newAddress) ){          //   Меняем адрес модуля на newAddress.
            Serial.print("Адрес изменён на 0x");          //
            Serial.println(dispLED.getAddress(),HEX );    //   Выводим текущий адрес модуля.
        }else{                                            //
            Serial.println("Адрес не изменён!");          //
        }                                                 //
    }else{                                                //
        Serial.println("LED индикатор не найден!");       //
    }                                                     //
}                                                         //
                                                          //
void loop(){                                              //
}                                                         //
