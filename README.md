# Smart_home_automation
# 🚀 IoT & Embedded Systems Projects  

This repository showcases my mini-projects developed as part of my **Electrical and Electronics Engineering** program.  
Both projects combine **hardware + software + IoT** concepts, focusing on real-world automation and monitoring applications.  

---

## 🏠 Project 1: Smart Ecosystem  

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

## 🏆 Project 2: Real-Time Auction Monitoring System  

### 📌 Overview  
The **Real-Time Auction Monitoring System** modernizes traditional auctions using **sensor-based sticks**. Each bidder’s stick is equipped with an **MPU6050 motion sensor** and an **ESP32**.  
When a stick is raised, the system detects the motion and wirelessly sends the bid to a **central receiver** using **ESP-NOW**.  

The receiver provides:  
- Real-time LED indicators showing who placed the bid  
- Serial monitor output simulating IPL-style auctions  
- Automated storage of auction results in an **Excel sheet**  

### 🔑 Features  
- Real-time bid detection with MPU6050  
- Wireless ESP-NOW communication (no internet needed)  
- Visual LED confirmation of bids  
- Auction simulation with players, base prices, sold/unsold status  
- Excel sheet logging of all auction results  

### ⚙️ How It Works  
1. Bidder lifts the stick → MPU6050 detects tilt.  
2. ESP32 sends bid signal via ESP-NOW.  
3. Receiver ESP32 lights the LED and logs the bid.  
4. Auction results are saved automatically in Excel.  

### 📈 Results  
- Achieved ~95% accurate bid detection.  
- Reduced manual errors in bid recognition.  
- Created transparent, IPL-style live auction simulation.  

### 👨‍💻 My Contribution  
- Implemented the **Excel logging feature** to store auction data.  
- Calibrated motion sensors and fine-tuned tilt thresholds.  
- Developed ESP-NOW communication logic between sticks and receiver.  
- Tested system with mock auctions, debugged packet loss & response delays.  

---

## 🌟 Future Improvements (for both projects)  
- Cloud integration (Firebase/Google Sheets) for live dashboards  
- Mobile app enhancements (custom UI instead of Blynk)  
- Voice/buzzer feedback in auction system  
- Expansion to control more devices in Smart Ecosystem  

---

## 📜 License  
These projects were developed for educational purposes.  
Feel free to **fork, modify, and improve** them 🚀  

---
