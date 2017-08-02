#include "PID.h"

using namespace std;

/*
* TODO: Complete the PID class.
*/

PID::PID() {
  p_error = 0.0;
  i_error = 0.0;
  d_error = 0.0;
  prev_cte = -1.0;
  int_cte = 0.0;
}

PID::~PID() {}

void PID::Init(double Kp, double Ki, double Kd) {
  this->Kp = Kp;
  this->Ki = Ki;
  this->Kd = Kd;
}

void PID::UpdateError(double cte) {
  int_cte += cte;
  if (prev_cte < 0.0) {
    prev_cte = cte;
  }

  p_error = Kp * cte;
  i_error = Ki * int_cte;
  d_error = Kd * (cte - prev_cte);

  prev_cte = cte;
}

double PID::TotalError() {
  return p_error + Ki * i_error + d_error;
}

