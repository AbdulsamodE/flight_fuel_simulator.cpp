# ✈️ Flight Fuel Burn Simulator in C++

This is a simple C++ console application that simulates the **fuel consumption** of an aircraft through different phases of flight: Taxi, Takeoff, Climb, Cruise, Descent, and Landing.

It calculates the **Specific Fuel Consumption (SFC)** for each phase and estimates the **total fuel burnt** for a given mission profile.

---

## 📚 Project Description

This program was built as part of my Aerospace Engineering coursework to better understand:

- Fuel flow rates
- Specific fuel consumption (SFC)
- Thrust settings
- Efficiency and fuel management in aircraft engines

---

## ⚙️ How It Works

1. **User Inputs Aircraft Data:**

   - Name, model, type, engine type
   - Empty weight, payload, maximum fuel capacity
   - Engine efficiency, max fuel flow rate, rated thrust

2. **User Inputs Flight Segment Data for Each Phase:**

   - Thrust setting
   - Fuel flow rate
   - Segment distance
   - Aircraft speed
   - Wind speed

3. **Program Calculates:**
   - SFC for each phase
   - Fuel burned per phase
   - Total fuel burned
   - Whether the mission is fuel-sustainable

---

## 🧪 Sample Inputs

Aircraft Name: Boeing737
Model: 800
Type: Passenger
Engine Type: Turbofan
Empty Weight: 42000
Payload: 8000
Max Fuel Capacity: 20000
Efficiency: 0.38
Max Fuel Flow Rate: 2500
Rated Thrust: 120

Taxi Phase:
Thrust: 5
Fuel Flow Rate: 300
Distance: 1 km
Speed: 15 km/h
Wind Speed: 0 km/h
SFC: 0.5 kg/kN/hr
Fuel Burned in Phase: 50 kg
...
Total Fuel Burnt During Flight: 14,300 kg
Sustainable. Leftover Fuel: 5,700 kg

---

## 🧑‍🎓 Who Can Use This

This project is ideal for:

- Aerospace/Aeronautical Engineering students
- Anyone learning aircraft propulsion or fuel estimation
- C++ learners practicing real-world simulations

---

---

## Who Can Use This

This project is ideal for:

- Aerospace/Aeronautical Engineering students
- Anyone learning aircraft propulsion or fuel estimation
- C++ learners practicing real-world simulations

---

## How to Run

1. Compile the code using g++:

```bash
g++ -o fuel_simulator fuel_simulator.cpp
./fuel_simulator
```

About Me
👨‍💻 Abdulsamod E. Mustapha
📧 [abdulsamodeniola24@gmail.com]
Instagram: abdulsamodmustapha
