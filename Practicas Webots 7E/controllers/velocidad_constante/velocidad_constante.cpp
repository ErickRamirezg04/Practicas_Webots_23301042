
#include <webots/Robot.hpp>
#include <webots/Motor.hpp>

using namespace webots;

int main(int argc, char **argv) {
  Robot *robot = new Robot();

  int timeStep = (int)robot->getBasicTimeStep();

  Motor *motor = robot->getMotor("MOTOR1");
  motor->setPosition(INFINITY); //puede dar infinitas vueltass

  //  DistanceSensor *ds = robot->getDistanceSensor("dsname");
  //  ds->enable(timeStep);

  while (robot->step(timeStep) != -1) {
    // Read the sensors:
    // Enter here functions to read sensor data, like:
    //  double val = ds->getValue();

    motor->setVelocity(3); // hay control por posicion, velocidad y aceleracion
  };

  // Enter here exit cleanup code.

  delete robot;
  return 0;
}
