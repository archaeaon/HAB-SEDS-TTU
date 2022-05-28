#ifndef __DEBUGUTILS_H__
#define __DEBUGUTILS_H__


#ifdef DEBUG__SERIAL
	#define DEBUG_UART Serial

	#define DEBUG_PRINT(str)\
		do { if(EN_PRINT_DEBUG) DEBUG_UART.println(str); } while(0)

	#ifdef APRS_DEBUG
		#define DEBUG_APRS(str)					\
				DEBUG_UART.print(millis()/1000);\
				DEBUG_UART.print(F(": "));		\
				DEBUG_UART.print(__FUNCTION__);	\
				DEBUG_UART.print(__LINE__);		\
				DEBUG_UART.print(F(' '));		\
				DEBUG_UART.println(str);
	#else
		#define DEBUG_APRS(str)
	#endif

	#ifdef AX25_DEBUG
		#define DEBUG_AX25(str)					\
				DEBUG_UART.print(millis()/1000);\
				DEBUG_UART.print(F(": "));		\
				DEBUG_UART.print(__FUNCTION__);	\
				DEBUG_UART.print(F("() in "));	\
				DEBUG_UART.print(__FILE__);		\
				DEBUG_UART.print(F(':'));		\
				DEBUG_UART.print(__LINE__);		\
				DEBUG_UART.print(F(' '));		\
				DEBUG_UART.println(str);
	#else
		#define DEBUG_AX25(str)
	#endif

	#ifdef DEBUG_GPS_BASIC
		#define DEBUG_GPS_BASIC(str)\
				DEBUG_UART.print(str);
	#else
		#define DEBUG_GPS_BASIC(str)
	#endif

	#ifdef GPS_ADV_DEBUG
		#define DEBUG_GPS_ADV(str)	\
				DEBUG_UART.print(str);
	#else
		#define DEBUG_GPS_ADV(str)
	#endif

	#ifdef BMP_DEBUG
		#define DEBUG_BMP(str)		\
				DEBUG_UART.print(str);
	#else
		#define DEBUG_BMP(str)
	#endif

	#ifdef AFSK_DEBUG
		#define DEBUG_AFSK(str)					\
				DEBUG_UART.print(millis()/1000);\
				DEBUG_UART.print(F(": "));		\
				DEBUG_UART.print(__FUNCTION__);	\
				DEBUG_UART.print(F("() in "));	\
				DEBUG_UART.print(__FILE__);		\
				DEBUG_UART.print(F(':'));		\
				DEBUG_UART.print(__LINE__);		\
				DEBUG_UART.print(F(' '));		\
				DEBUG_UART.println(str);
	#else
		#define DEBUG_AFSK(str)
	#endif

	#ifdef RESET_DEBUG
		#define DEBUG_RESET(str)				\
				DEBUG_UART.print(millis()/1000);\
				DEBUG_UART.print(F(": "));		\
				DEBUG_UART.print(__FUNCTION__);	\
				DEBUG_UART.print(F("() in "));	\
				DEBUG_UART.print(__FILE__);		\
				DEBUG_UART.print(F(':'));		\
				DEBUG_UART.print(__LINE__);		\
				DEBUG_UART.print(F(' '));		\
				DEBUG_UART.println(str);
	#else
		#define DEBUG_RESET(str)
	#endif
#endif


#endif