//
// Created by Сергей on 04.10.2021.
//

#ifndef MTZ_QUALITY_H
#define MTZ_QUALITY_H

#include <DATA.h>
#include <BaseType.h>

///<Качество
class Quality: public DATA {
    /*!
     *Применимость
     */
     class VALIDITY{
        enum struct Validity_ENUMERATED {
            good, ///<хороший
            invalid,///<недействительный
            reserved,///<зарезверированный
            questionable///<сомнительный
        };
     };
    //BaseType<VALIDITY> Validity;


    /*!
    * Битовые(Булевые(0/1)) параметры качества
    */
    class BIT_QUALITY{
        enum struct Bit_Quality_ENUMERATED {
            gi,///<хорошо/недействительно
            rq,///<зарезверированный/зарезверированный
            overflow,///<переполнение
            outOfRange,///<за пределами диапазона
            badReference,///<плохая ссылка
            oscillatory,///<колебательный
            failure,///<повреждения
            oldData,///<старые данные
            inconsistent,///<несоглаованный
            inaccurate,///<неточный
            source,///<Источнки(содержит информацию о происхождении значения)
            ///<Процесс(значение прдеоставлено функций ввода из контролируемого процесса или вычеслено некоторой прикладной функцией
            ///<Замещенный(значение введено оператором или от автоматического источника)
            test,///<тестирование
            operatorBlocked,///<Блокировано оператором
        };
    };
    //BaseType<BIT_QUALITY> Bit_Quality;

};


#endif //MTZ_QUALITY_H
