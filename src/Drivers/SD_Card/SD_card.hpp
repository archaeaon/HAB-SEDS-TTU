#ifndef __SD_CARD_H__
#define __SD_CARD_H__

#include <Arduino.h>
#include <SD.h>
#include <SPI.h>

#include "../../../Config.h"

#include "../BMP/BMP.hpp"
#include "../GPS/GPS.hpp"
#include "../../Status/Status.hpp"
#include "../Pushbutton/Pushbutton.hpp"
#include "../AnalogPin/AnalogPin.hpp"


const int ChipSelectPin = 10; // pin D10 on Nano Every, connected to DI on SD card reader

//TDOD::Is Needed???
const int CLK = 13; // pin D13/SCK yellow wire - Clock pin
const int DO = 12; // Digital output pin - white wire  - CIPO
const int DI = 11; // Digital input pin - blue wire  - COPI
const int CS = 10; // Card select pin - orange wire
//TODO::Create some sort of getData function in each device class and create #ifdef style calls here
class SD_card {
	private:
		File dataFile;

		bool ValidSD = 0;

	public:
		SD_card() {
		};

		~SD_card() {
		};

		void SD_Setup();//TODO::should return true if successful, false otherwise
		void SD_Record();//TODO::should return true if successful, false otherwise
		void SD_arrayPass(); //FIXME::

		bool IsValidSD();
};

extern SD_card sd;

#endif