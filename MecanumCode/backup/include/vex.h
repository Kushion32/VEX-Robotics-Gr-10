/*----------------------------------------------------------------------------*/
/*                                                                            */
/*    Module:       vex.h                                                     */
/*    Author:       Vex Robotics                                              */
/*    Created:      1 Feb 2019                                                */
/*    Description:  Default header for V5 projects                            */
/*                                                                            */
/*----------------------------------------------------------------------------*/
//

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <v5.h>
#include <v5_vcs.h>
using namespace vex;

// A global instance of vex::brain used for printing to the V5 brain screen
vex::brain       Brain;

// define your global instances of motors and other devices here
vex::motor RF (vex::PORT20, vex::gearSetting::ratio18_1,false);;
vex::motor RB (vex::PORT10, vex::gearSetting::ratio18_1,false);;
vex::motor LF (vex::PORT11, vex::gearSetting::ratio18_1,true);;
vex::motor LB (vex::PORT1, vex::gearSetting::ratio18_1,true);;
vex::motor IntakeL (vex::PORT8, vex::gearSetting::ratio18_1,false);;
vex::motor IntakeR (vex::PORT2, vex::gearSetting::ratio18_1,false);;
vex::motor ClawL (vex::PORT16, vex::gearSetting::ratio36_1,false);;
vex::motor ClawR (vex::PORT12, vex::gearSetting::ratio36_1,true);;
vex::controller Controller1;


#include "robot-config.h"

#define waitUntil(condition)                                                   \
  do {                                                                         \
    wait(5, msec);                                                             \
  } while (!(condition))

#define repeat(iterations)                                                     \
  for (int iterator = 0; iterator < iterations; iterator++)