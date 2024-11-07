# PIRMotionSensor
Working Model - https://youtu.be/clHaa7zm-C8

**Description:**
This project involves a Passive Infrared (PIR) motion sensor connected to an Arduino microcontroller, designed to detect movement and trigger an auditory alert through a buzzer. When the PIR sensor detects motion, it sends a high signal to the Arduino, which then activates the buzzer to produce a sound. The buzzer remains active for about 2 seconds, providing a clear, audible alert whenever motion is detected. In the absence of movement, the buzzer remains off, creating an efficient system for monitoring activity within a specific area. This setup is ideal for basic security systems, automating responses to motion in controlled environments, and demonstrates foundational skills in sensor-based automation with Arduino.

**Code Overview:**
The PIR sensor is connected to digital pin 2, and the buzzer to digital pin 10.
The code initializes the sensor and buzzer in the setup function.
In the main loop, the code checks for motion. If detected (val == HIGH), it activates the buzzer for 2 seconds; otherwise, the buzzer remains off.
