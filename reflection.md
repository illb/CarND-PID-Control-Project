# Reflection


## The effect each of the P, I, D components had in your implementation.

* P (Proportinal)
  * Raising this component will cause faster access to the target value. However, the stability is poor due to the vibration around the target value.
  * Most effective component
* I (Integral)
  * It is used when tuning with P value, but there is error in final value.
  * If this component is changed, it will be shifted as a whole and the amplitude will also change.
* D (Differential)
  * Increase this component to reduce overshhot to improve stability.

## How the final hyperparameters were chosen.
* P up to quickly reach the center of the road. D up to remove overshoot on the road.
  * PID values : 0.15, 0.0, 1.00
* Tuning I to center on a straight road.
  * PID values : 0.15, 0.01, 1.00
* Tuning D to more stable
  * PID values : 0.15, 0.01, 5.00
