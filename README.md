# 🏠 Smart Ecosystem – IoT Home Automation Project  

This project demonstrates an **IoT-based home automation system** using the ESP32 microcontroller.  
It allows users to control a **12V DC fan** and an **LED** remotely via the **Blynk mobile app**.  

---

## ✨ Features  
- ESP32 with Wi-Fi control  
- Fan speed control via PWM & L298N driver  
- LED toggle on/off via Blynk  
- Powered by 12V battery (portable)  
- Real-time wireless control  

---

## ⚙️ How It Works  
1. User sends commands from the **Blynk app** (button for LED, slider for fan).  
2. ESP32 receives commands via Wi-Fi.  
3. LED → toggled using GPIO.  
4. Fan → PWM signal from ESP32 → L298N driver → controls speed.  

---

## 📈 Results  
- Smooth fan speed control via slider.  
- Instant response for LED toggle.  
- Low-latency wireless performance.  

---

## 👨‍💻 My Contribution  
- Developed and debugged ESP32 code.  
- Configured **Blynk app** (buttons, sliders, virtual pins).  
- Integrated ESP32 with L298N driver.  
- Performed testing and troubleshooting for stable operation.  

---

## 📂 Repository Structure  
