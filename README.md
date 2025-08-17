# Smart_home_automation

This repository showcases my mini-projects developed as part of my **Electrical and Electronics Engineering** program.  
Both projects combine **hardware + software + IoT** concepts, focusing on real-world automation and monitoring applications.  

---

## Smart Ecosystem  

### 📌 Overview  
The **Smart Ecosystem** is an IoT-based home automation project designed to control appliances wirelessly using the **ESP32 microcontroller** and the **Blynk mobile app**.  
It allows users to switch an **LED** on/off and adjust the **speed of a 12V DC fan** in real-time over Wi-Fi.  

### 🔑 Features  
- ESP32-based wireless control  
- Fan speed control using **PWM** via L298N motor driver  
- LED toggle via mobile app  
- Powered by a 12V battery (portable setup)  
- Blynk app as the user interface  

### ⚙️ How It Works  
1. User interacts with the Blynk app (button for LED, slider for fan).  
2. Commands are sent via Wi-Fi to the ESP32.  
3. ESP32 toggles LED pins or generates PWM signals for the fan.  
4. Appliances respond in real-time.  

### 📈 Results  
- Reliable wireless control with low latency.  
- Smooth fan speed adjustment via slider.  
- Demonstrated IoT application in home automation.  

### 👨‍💻 My Contribution  
- Wrote and debugged ESP32 Arduino code for LED and fan control.  
- Configured the **Blynk app** (buttons, sliders, virtual pins).  
- Integrated ESP32 with the L298N driver and tested PWM fan control.  
- Conducted testing & troubleshooting to ensure stable operation.  


---
