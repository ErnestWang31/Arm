#ifdef __cplusplus
extern "C" {
#endif

#include "FreeRTOS.h"
#include "task.h"
#include "main.h"
#include "cmsis_os.h"
#include "freertos_inc.h"
#include "adc.h"
#include "tim.h"
#include "time_utils.h"

void Main(void);

extern uint64_t serialNumber;
extern char serialNumberStr[13];

#ifdef __cplusplus
}

/*---------------------------- C++ Scope ---------------------------*/
#include "communication.hpp"
#include "eeprom_interface.h"
#include "U8g2lib.hpp"
#include "MPU6050.hpp"
#include "encoder.hpp"
#include "analog.hpp"
#include "pwm.hpp"
#include "rgb.hpp"
#include "timer.hpp"
#include "actuators/mintasca/sca.hpp"
#include "actuators/ctrl_step/ctrl_step.hpp"
#include "instances/dummy_robot.h"

#endif
#endif
