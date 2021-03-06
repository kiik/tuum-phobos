
#ifndef TUUM_MOTCTL_H
#define TUUM_MOTCTL_H

#include "RTX485.hpp"

#define MOTOR_COUNT 4

namespace tuum { namespace hal {

  class MotorControl : public RTX485::Device
  {
  public:

    struct MotionData {

    };

    struct DriveData {

    };

    MotorControl();

    void init(RTX485::WriteHandle);

    void OmniDrive(double speed, double angle, double rot);
    void stop();

    std::string getSpeedCmd(int v);

  private:
    RTX485::DeviceID m_motorIDs[MOTOR_COUNT];

  };

}}

#endif
