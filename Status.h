<<<<<<< b8d481473798a934419974e2b3cad4b5272d3a02
#ifndef STATUS_H
#define STATUS_H
=======
#ifndef __STATUS_H__
#define __STATUS_H__
>>>>>>> Project Restructure Part 1


#include "src/BMP/BMP.h"
#include "src/GPS/GPS.h"
//#include "accel.h"
#include "src/SD_Card/SD_card.h"
#include "src/SERVO/Servo.h"

#include "config.h"
#include "debugutils.h"
#include "hardwareutils.h"

//#define lift_check_T 50
//#define burn_check_T 50
//#define apo_check_T 50
//#define fall_check_T 50
//#define liftoff_Gforce_check 6
//#define burnout_Gforce_check 3
//#define apogee_velocity_check 2.5 //check should be about 2.5 m/s



class Status {
    private:
        bool Rising = 0;
        bool Falling = 0;
		bool Landed = 0;
        
        bool ValidBMP = 0;
        bool ValidSD = 0;
		
		bool ServoStatus = OFF;
		
		bool WhatStatus = 0;
        
        void CheckSensors();
        
        void CheckRising();
        void CheckFalling();
		void CheckLanded();

    public:
        Status() {};
        ~Status() {};
        
        void CheckStatus();
		void CheckServo();
        
		bool IsValidBMP();
        bool IsValidSD();
		
        bool IsRising();
        bool IsFalling();
		bool IsLanded();
		
        bool IsServoOn();
		
		bool WhatIsStatus();
};

extern Status status;


#endif
