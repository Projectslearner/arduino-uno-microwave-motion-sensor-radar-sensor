# Microwave Motion Sensor with LED Indicator

#### Project Overview

This project utilizes a microwave motion sensor to detect motion in its vicinity. When motion is detected, an LED connected to an Arduino board lights up, providing a visual indication of the detected motion. The sensor's output is monitored through the Serial Monitor for real-time feedback.

#### Components Needed

1. **Arduino Board**
2. **Microwave Motion Sensor**
3. **LED**
4. **Resistor (for the LED)**
5. **Jumper Wires**

### Block diagram



#### Pin Connections

1. **Microwave Motion Sensor:**
   - **OUT Pin**: Connect to Arduino digital pin 2
   - **VCC**: Connect to Arduino 5V
   - **GND**: Connect to Arduino GND

2. **LED:**
   - **Anode (+)**: Connect to Arduino digital pin 3 through a current-limiting resistor (e.g., 220Ω)
   - **Cathode (-)**: Connect to Arduino GND

#### Instructions

1. **Set Up the Circuit:**
   - Connect the OUT pin of the microwave motion sensor to digital pin 2 on the Arduino.
   - Connect an LED to digital pin 3 on the Arduino, with a resistor in series to limit current.
   - Ensure all components are properly grounded and connected to the 5V power supply.

2. **Initialize the System:**
   - Configure the sensor pin and LED pin as inputs and outputs, respectively.
   - Turn off the LED initially by setting its pin to LOW.
   - Start serial communication at a baud rate of 9600 to monitor sensor readings.

3. **Detect Motion:**
   - Continuously read the digital value from the sensor using `digitalRead()`.
   - If the sensor output is HIGH, indicating motion detection, turn on the LED.
   - Print the sensor value to the Serial Monitor for real-time monitoring.

4. **React to Motion:**
   - When motion is detected, turn on the LED and print a corresponding message to the Serial Monitor.
   - If no motion is detected, turn off the LED and print a message indicating the absence of motion.

5. **Adjust Delay:**
   - Add a short delay (e.g., 500 milliseconds) between readings to prevent rapid updates and improve system stability.

#### Applications

- **Security Systems:** Utilize the setup as part of a security system to detect intruders or movement in a specific area.
- **Home Automation:** Incorporate motion sensing for home automation tasks, such as turning on lights or triggering alarms.
- **Interactive Displays:** Integrate motion detection into interactive displays or installations for enhanced user interaction.

---

🌐 [projectslearner.com](https://www.projectslearner.com)  
📧 [projectslearner@gmail.com](mailto:projectslearner@gmail.com)  
📸 [Instagram](https://www.instagram.com/projectslearner/)  
📘 [Facebook](https://www.facebook.com/projectslearner)  
▶️ [YouTube](https://www.youtube.com/@ProjectsLearner)  
📘 [LinkedIn](https://www.linkedin.com/in/projectslearner)  

Made for you with ❣️ from ProjectsLearner