#if 0

Layer 1:
Directly interects with the hardware pins.
This layer has to be implemented according to the controller getting used.

Layer 2:
Uses exposed APIs by Layer1.
Controls moter entity.
Provides APIs to drive motor: clock_wise, anti_clockwise and stop.

Layer 3:
Uses exposed APIs by Layer2.
Controls vehicle entity.
Provides APIs to drive vehicle: 
  forword
  backward
  left
  right
  clockwise_left
  clockwise_right
  
#endif
