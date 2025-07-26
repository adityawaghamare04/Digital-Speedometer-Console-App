# 🚗 Digital Speedometer (C++ Console Application)

This project simulates a **digital speedometer** for a vehicle using C++. It allows the user to **increase/decrease speed**, **view current and maximum speed**, and **log speed changes** to a file. The application also issues a warning when the vehicle is overspeeding.


## 🛠️ Features

- ✅ Increase/Decrease speed in steps of 10 km/h  
- ✅ View current speed and max speed reached  
- ✅ Warning for overspeeding above 80 km/h  
- ✅ Speed logs saved to `speed_log.txt`  
- ✅ Handles invalid inputs gracefully

---

## 📁 File Structure
```bash
📦 digital-speedometer/
 ┣ 📄 speed_log.txt       # Log file for speed entries (auto-generated)
 ┣ 📄 main.cpp             # Main source code
 ┗ 📄 README.md            # Project documentation

```

## 🚀 Getting Started

### 🧾 Prerequisites

- C++ Compiler (e.g. `g++`)

### ⚙️ Compilation

```bash
g++ main.cpp -o speedometer
./speedometer
```
##  Sample Usage
--- Digital Speedometer ---
1. Increase Speed (+10 km/h)
2. Decrease Speed (-10 km/h)
3. Show Speed Status
4. Exit

Choose an option: 1
Current Speed: 10 km/h

Choose an option: 1
Current Speed: 20 km/h

Choose an option: 3
Current Speed: 20 km/h

Max Speed Reached: 20 km/h

## Developer
Aditya Waghamare
Feel free to contribute, suggest improvements, or report issues.


