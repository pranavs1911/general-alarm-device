#ifndef BUZZER_H
#define BUZZER_H

#include <Arduino.h>
#include<alarmtest.h>

using namespace AlarmWork;
namespace BuzzerAlarm{
    
    class BuzAlm: public AlarmSystem{
        public:
            void play_buzzeralarm(Alarmlev al, Check buzz, int dur);
    };
    
    
}
#endif