#include "vex.h"
double Right;
double Left;
double One;
double three;


// A global instance of vex::competition
vex::competition Competition;



//Functions for Autonomous
/*int slow = 30;
void forward()
{
RB.spin(vex::directionType::fwd, 40,  vex::velocityUnits::pct);
LF.spin(vex::directionType::rev, 40,  vex::velocityUnits::pct); 
RF.spin(vex::directionType::fwd, 40,  vex::velocityUnits::pct);
LB.spin(vex::directionType::rev, 40,  vex::velocityUnits::pct);
}
void forwardslow()
{
RB.spin(vex::directionType::fwd, slow,  vex::velocityUnits::pct);
LF.spin(vex::directionType::rev, slow,  vex::velocityUnits::pct); 
RF.spin(vex::directionType::fwd, slow,  vex::velocityUnits::pct);
LB.spin(vex::directionType::rev, slow,  vex::velocityUnits::pct);
}
void forwardslower()
{
RB.spin(vex::directionType::fwd, 10,  vex::velocityUnits::pct);
LF.spin(vex::directionType::rev, 10,  vex::velocityUnits::pct); 
RF.spin(vex::directionType::fwd, 10,  vex::velocityUnits::pct);
LB.spin(vex::directionType::rev, 10,  vex::velocityUnits::pct);
}
void backward()
{
RB.spin(vex::directionType::rev, 40,  vex::velocityUnits::pct);
LF.spin(vex::directionType::fwd, 40,  vex::velocityUnits::pct); 
RF.spin(vex::directionType::rev, 40,  vex::velocityUnits::pct);
LB.spin(vex::directionType::fwd, 40,  vex::velocityUnits::pct);
}
void backwardslow()
{
RB.spin(vex::directionType::rev, 30,  vex::velocityUnits::pct);
LF.spin(vex::directionType::fwd, 30,  vex::velocityUnits::pct); 
RF.spin(vex::directionType::rev, 30,  vex::velocityUnits::pct);
LB.spin(vex::directionType::fwd, 30,  vex::velocityUnits::pct);
}
void straferight()
{
RB.spin(vex::directionType::fwd, 40, vex::velocityUnits::pct);
LF.spin(vex::directionType::rev, 40, vex::velocityUnits::pct); 
RF.spin(vex::directionType::rev, 40, vex::velocityUnits::pct);
LB.spin(vex::directionType::fwd, 40, vex::velocityUnits::pct);  
}
void strafeleft()
{
RB.spin(vex::directionType::rev, 40, vex::velocityUnits::pct);
LF.spin(vex::directionType::fwd, 40, vex::velocityUnits::pct); 
RF.spin(vex::directionType::fwd, 40, vex::velocityUnits::pct);
LB.spin(vex::directionType::rev, 40, vex::velocityUnits::pct);  
}
void turnright()
{
RB.spin(vex::directionType::fwd, 40,  vex::velocityUnits::pct);
LF.spin(vex::directionType::fwd, 40,  vex::velocityUnits::pct); 
RF.spin(vex::directionType::fwd, 40,  vex::velocityUnits::pct);
LB.spin(vex::directionType::fwd, 40,  vex::velocityUnits::pct);
}
void turnleft()
{
RB.spin(vex::directionType::rev, 40,  vex::velocityUnits::pct);
LF.spin(vex::directionType::rev, 40,  vex::velocityUnits::pct); 
RF.spin(vex::directionType::rev, 40,  vex::velocityUnits::pct);
LB.spin(vex::directionType::rev, 40,  vex::velocityUnits::pct);
}
void turnleftslow()
{
RB.spin(vex::directionType::rev, 25,  vex::velocityUnits::pct);
LF.spin(vex::directionType::rev, 25,  vex::velocityUnits::pct); 
RF.spin(vex::directionType::rev, 25,  vex::velocityUnits::pct);
LB.spin(vex::directionType::rev, 25,  vex::velocityUnits::pct);
}
void clawclose()
{
Claw.spin(vex::directionType::rev, 60, vex::velocityUnits::pct); 
}
void clawopen()
{
Claw.spin(vex::directionType::fwd, 60, vex::velocityUnits::pct); 
}
void armdown()
{
IntakeR.spin(vex::directionType::rev, 40, vex::velocityUnits::pct);
IntakeL.spin(vex::directionType::fwd, 40, vex::velocityUnits::pct); 
IntakeM.spin(vex::directionType::rev, 40, vex::velocityUnits::pct);
}
void armdownslow()
{
IntakeR.spin(vex::directionType::rev, 20, vex::velocityUnits::pct);
IntakeL.spin(vex::directionType::fwd, 20, vex::velocityUnits::pct); 
IntakeM.spin(vex::directionType::rev, 20, vex::velocityUnits::pct);
}
void armup()
{
IntakeR.spin(vex::directionType::fwd, 40, vex::velocityUnits::pct);
IntakeL.spin(vex::directionType::rev, 40, vex::velocityUnits::pct); 
IntakeM.spin(vex::directionType::fwd, 40, vex::velocityUnits::pct);
}
void armupslow()
{
IntakeR.spin(vex::directionType::fwd, 20, vex::velocityUnits::pct);
IntakeL.spin(vex::directionType::rev, 20, vex::velocityUnits::pct); 
IntakeM.spin(vex::directionType::fwd, 20, vex::velocityUnits::pct);
}
void slower()
{
IntakeR.stop(vex::brakeType::hold);
IntakeL.stop(vex::brakeType::hold);
IntakeM.stop(vex::brakeType::hold);
Claw.stop(vex::brakeType::hold);
RF.stop(vex::brakeType::hold);
LB.stop(vex::brakeType::hold);
RB.stop(vex::brakeType::hold);
LF.stop(vex::brakeType::hold);
}
*/

/*---------------------------------------------------------------------------*/
/*                          Pre-Autonomous Functions                         */
/*                                                                           */
/*  You may want to perform some actions before the competition starts.      */
/*  Do them in the following function.  You must return from this function   */
/*  or the autonomous and usercontrol tasks will not be started.  This       */
/*  function is only called once after the cortex has been powered on and    */ 
/*  not every time that the robot is disabled.                               */
/*---------------------------------------------------------------------------*/

void pre_auton( void ) {
  // All activities that occur before the competition starts
  // Example: clearing encoders, setting servo positions, ...
  
}

/*---------------------------------------------------------------------------*/
/*                                                                           */
/*                              Autonomous Task                              */
/*                                                                           */
/*  This task is used to control your robot during the autonomous phase of   */
/*  a VEX Competition.                                                       */
/*                                                                           */
/*  You must modify the code to add your own robot specific commands here.   */
/*---------------------------------------------------------------------------*/

void autonomous( void ) {
  // ..........................................................................
  // Insert autonomous user code here.
  // ..........................................................................

/*forwardslow();
vex::task::sleep(200);
slower();
vex::task::sleep(100);

armup();
vex::task::sleep(700);
slower();
vex::task::sleep(100);

armdown();
vex::task::sleep(700);
slower();
vex::task::sleep(200);

straferight();
vex::task::sleep(1500);
slower();
vex::task::sleep(100);

strafeleft();
vex::task::sleep(1500);
slower();
vex::task::sleep(100);

forward();
vex::task::sleep(450);
slower();
vex::task::sleep(100);


clawclose();
vex::task::sleep(500);
slower();
vex::task::sleep(100);

armup();
vex::task::sleep(320);
slower();
vex::task::sleep(100);

//90 degree exact
turnright();
vex::task::sleep(700);
slower();
vex::task::sleep(100);

straferight();
vex::task::sleep(300);
slower();
vex::task::sleep(100);

forward();
vex::task::sleep(1100);
slower();
vex::task::sleep(100);

armup();
vex::task::sleep(250);
slower();
vex::task::sleep(100);

forwardslow();
vex::task::sleep(700);
slower();
vex::task::sleep(100);

clawopen();
vex::task::sleep(500);
slower();
vex::task::sleep(100);

backward();
vex::task::sleep(500);
slower();
vex::task::sleep(100);
*/

}

/*---------------------------------------------------------------------------*/
/*                                                                           */
/*                              User Control Task                            */
/*                                                                           */
/*  This task is used to control your robot during the user control phase of */
/*  a VEX Competition.                                                       */
/*                                                                           */
/*  You must modify the code to add your own robot specific commands here.   */
/*---------------------------------------------------------------------------*/

void usercontrol( void ) {
  // User control code here, inside the loop
  while (1) {

//Arm Movement
//Arm Up
if(Controller1.ButtonR2.pressing()){

IntakeR.spin(vex::directionType::fwd, 60, vex::velocityUnits::pct);
IntakeL.spin(vex::directionType::rev, 60, vex::velocityUnits::pct); 
}

//Arm Down
if(Controller1.ButtonR1.pressing()){

  IntakeR.spin(vex::directionType::rev, 60, vex::velocityUnits::pct);
  IntakeL.spin(vex::directionType::fwd, 60, vex::velocityUnits::pct); 
}

//Arm Down Slow
if(Controller1.ButtonDown.pressing()){

  IntakeR.spin(vex::directionType::rev, 20, vex::velocityUnits::pct);
  IntakeL.spin(vex::directionType::fwd, 20, vex::velocityUnits::pct); 
}  

//Arm Up Slow
if(Controller1.ButtonUp.pressing()){

 IntakeR.spin(vex::directionType::fwd, 20, vex::velocityUnits::pct);
 IntakeL.spin(vex::directionType::rev, 20, vex::velocityUnits::pct); 
} 

//Stop Arm
if (!(Controller1.ButtonR2.pressing()) && !(Controller1.ButtonR1.pressing()) && !(Controller1.ButtonDown.pressing()) && !(Controller1.ButtonUp.pressing())){
  IntakeR.stop(vex::brakeType::hold);
  IntakeL.stop(vex::brakeType::hold);
}


// Claw Movement
//Claw Up
if(Controller1.ButtonL1.pressing()){

ClawR.spin(vex::directionType::rev, 80, vex::velocityUnits::pct); 
ClawL.spin(vex::directionType::rev, 80, vex::velocityUnits::pct);
}

//Claw Down
if(Controller1.ButtonL2.pressing()){

ClawL.spin(vex::directionType::fwd, 80, vex::velocityUnits::pct); 
ClawR.spin(vex::directionType::fwd, 80, vex::velocityUnits::pct);
}

//Stop Claw
if (!Controller1.ButtonL1.pressing() && !Controller1.ButtonL2.pressing()){
  ClawL.stop(vex::brakeType::hold);
  ClawR.stop(vex::brakeType::hold);
  }


//Joystick Movement

if (!Controller1.ButtonA.pressing()){

//Go Spin
if (Controller1.Axis3.value()){
RB.spin(vex::directionType::fwd, Controller1.Axis3.value ()/2,  vex::velocityUnits::pct);
LF.spin(vex::directionType::fwd, Controller1.Axis3.value ()/2,  vex::velocityUnits::pct); 
RF.spin(vex::directionType::fwd, Controller1.Axis3.value ()/2,  vex::velocityUnits::pct);
LB.spin(vex::directionType::fwd, Controller1.Axis3.value ()/2,  vex::velocityUnits::pct);
}

/*//Spin Left or Right
if (Controller1.Axis4.value()){
RB.spin(vex::directionType::fwd, Controller1.Axis1.value ()/2,  vex::velocityUnits::pct);
LF.spin(vex::directionType::fwd, Controller1.Axis1.value ()/2,  vex::velocityUnits::pct); 
RF.spin(vex::directionType::rev, Controller1.Axis1.value ()/2,  vex::velocityUnits::pct);
LB.spin(vex::directionType::rev, Controller1.Axis1.value ()/2, vex::velocityUnits::pct);
}*/

//Forward
if (Controller1.Axis1.value()){
RB.spin(vex::directionType::fwd, Controller1.Axis1.value ()/2,  vex::velocityUnits::pct);
LF.spin(vex::directionType::rev, Controller1.Axis1.value ()/2,  vex::velocityUnits::pct); 
RF.spin(vex::directionType::fwd, Controller1.Axis1.value ()/2,  vex::velocityUnits::pct);
LB.spin(vex::directionType::rev, Controller1.Axis1.value ()/2, vex::velocityUnits::pct);
}

//StrafeRIght
if(Controller1.ButtonRight.pressing()){

RB.spin(vex::directionType::rev, 40,  vex::velocityUnits::pct);
LF.spin(vex::directionType::rev, 40,  vex::velocityUnits::pct); 
RF.spin(vex::directionType::fwd, 40,  vex::velocityUnits::pct);
LB.spin(vex::directionType::fwd, 40, vex::velocityUnits::pct);
} 

//StrafeLeft
if(Controller1.ButtonLeft.pressing()){

RB.spin(vex::directionType::fwd, 40,  vex::velocityUnits::pct);
LF.spin(vex::directionType::fwd, 40,  vex::velocityUnits::pct); 
RF.spin(vex::directionType::rev, 40,  vex::velocityUnits::pct);
LB.spin(vex::directionType::rev, 40, vex::velocityUnits::pct);
} 

//Stop Joystick Movement
if (!Controller1.Axis3.value() && !Controller1.Axis1.value() && !Controller1.ButtonLeft.pressing() && !Controller1.ButtonRight.pressing() && !Controller1.Axis4.value()){
  RF.stop(vex::brakeType::coast);
  LB.stop(vex::brakeType::coast);
  RB.stop(vex::brakeType::coast);
  LF.stop(vex::brakeType::coast);
  }
}

/*else if (Controller1.ButtonA.pressing()){

if (Controller1.Axis3.value()){
RB.spin(vex::directionType::fwd, Controller1.Axis3.value ()/6,  vex::velocityUnits::pct);
LF.spin(vex::directionType::rev, Controller1.Axis3.value ()/6,  vex::velocityUnits::pct); 
RF.spin(vex::directionType::fwd, Controller1.Axis3.value ()/6,  vex::velocityUnits::pct);
LB.spin(vex::directionType::rev, Controller1.Axis3.value ()/6,  vex::velocityUnits::pct);
}

if (Controller1.Axis1.value()){
RB.spin(vex::directionType::fwd, Controller1.Axis1.value ()/6,  vex::velocityUnits::pct);
LF.spin(vex::directionType::fwd, Controller1.Axis1.value ()/6,  vex::velocityUnits::pct); 
RF.spin(vex::directionType::fwd, Controller1.Axis1.value ()/6,  vex::velocityUnits::pct);
LB.spin(vex::directionType::fwd, Controller1.Axis1.value ()/6, vex::velocityUnits::pct);
}


//Stop Joystick Movement
if (!Controller1.Axis3.value() && !Controller1.Axis1.value()){
  RF.stop(vex::brakeType::coast);
  LB.stop(vex::brakeType::coast);
  RB.stop(vex::brakeType::coast);
  LF.stop(vex::brakeType::coast);

}

if(Controller1.ButtonB.pressing()){

RB.spin(vex::directionType::rev, 40,  vex::velocityUnits::pct);
LF.spin(vex::directionType::fwd, 40,  vex::velocityUnits::pct); 
RF.spin(vex::directionType::fwd, 40,  vex::velocityUnits::pct);
LB.spin(vex::directionType::rev, 40, vex::velocityUnits::pct);
} 


if (!Controller1.ButtonB.pressing()){
  RF.stop(vex::brakeType::coast);
  LB.stop(vex::brakeType::coast);
  RB.stop(vex::brakeType::coast);
  LF.stop(vex::brakeType::coast);
}
*/
}


// ........................................................................
    // Insert user code here. This is where you use the joystick values to 
    // update your motors, etc.
    // ........................................................................
 
    vex::task::sleep(20); //Sleep the task for a short amount of time to prevent wasted resources. 
  }


//
// Main will set up the competition functions and callbacks.
//
int main() {
    //Set up callbacks for autonomous and driver control periods.
    Competition.autonomous( autonomous );
    Competition.drivercontrol( usercontrol );
    
    //Run the pre-autonomous function. 
    pre_auton();
       
    //Prevent main from exiting with an infinite loop.                        
    while(1) {
      vex::task::sleep(20);//Sleep the task for a short amount of time to prevent wasted resources.
    }    
}