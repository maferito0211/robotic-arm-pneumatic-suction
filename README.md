# Robotic Arm with Pneumatic Suction System

## Project Overview

This project presents a **3 DOF anthropomorphic robotic arm with a pneumatic suction system** designed for automated packaging of bagged and packed food products. The system is teleoperated via Bluetooth using a custom remote control, allowing the user to define motion routines and control the suction system.

The project integrates **mechanical design, electronic control, pneumatic systems, embedded programming, and robotic kinematics**, making it a complete mechatronic solution aligned with Industry 4.0 automation concepts.

---

## Main Features

- 3 DOF anthropomorphic robotic arm with parallelogram mechanism  
- Pneumatic vacuum suction cup for food handling  
- Bluetooth teleoperation using Arduino  
- Master–Slave communication architecture  
- Custom PCB design for modular electronics  
- Kinematic analysis (Forward, Inverse, Jacobian)  
- Performance testing and validation  

---

## System Architecture

### Mechanical System
- Based on EEZYbotArm MK2 model (modified base and end-effector)
- Three servomotors for X, Y, Z movement
- Parallel mechanism keeps the end-effector horizontal
- Suction cup installed at the tip for food handling

### Pneumatic System
- Vacuum generator with pneumatic suction cup
- Solenoid valve selected using flow coefficient calculations
- Designed for loads up to approximately 300g

### Electronic System
Two independent circuits:

1. **Robotic Arm Controller**
   - Arduino
   - HC-05 Bluetooth module
   - Three servomotors
   - Power regulation and protection components

2. **Remote Control**
   - Arduino
   - Three potentiometers for joint control
   - Two push buttons:
     - Suction ON/OFF
     - Automatic routine

---

## Programming Logic

### Remote Control
- Reads potentiometer values
- Encodes each joint angle with offsets (+1000, +2000, +3000)
- Sends commands via Bluetooth
- Push buttons trigger suction or routine execution

### Robotic Arm
- Decodes Bluetooth commands
- Moves corresponding servomotor
- Controls pneumatic suction system
- Executes automatic routines

---

## Kinematics

The robotic arm is modeled using Denavit-Hartenberg parameters.

Implemented analyses:

- Forward kinematics
- Inverse kinematics (Newton-Raphson method)
- Jacobian matrix for velocity analysis

Link lengths:

- l0 = 9.3 cm  
- l1 = 15.2 cm  
- l2 = 15.1 cm  
- l3 = 6.8 cm  

---

## Tests and Results

### Lifting Capacity

| Weight (g) | Product          | Result     |
|----------|------------------|------------|
| 80       | ACT II           | Success    |
| 145      | Tuna can         | Success    |
| 160      | ACT II box       | Success    |
| 290      | Tuna packaging   | Success    |
| 400      | Canned product   | Partial    |
| 450      | Butter packet    | Partial    |
| 500      | Popcorn bag      | Failed     |

### Tuna Stacking Test

Average stacking time: **53.3 seconds**

---

## Limitations

- Suction cup does not work well with smooth or soft bags
- Maximum reliable load is approximately 300g
- Performance depends on initial placement by the operator

---

## Future Improvements

- Replace servomotors with higher torque models
- Use bellows suction cups for better bag handling
- Improve automatic stacking precision
- Implement closed-loop feedback control

---

## Folder Structure

Robotic Arm with Pneumatic Suction System to Pack Bagged Food/
│
├── Paper documentation
│   ├── 3 DOF Anthropomorphic Manipulator With a Pneumatic Suction System to Pack Bagged and Packed Food.pdf
│   └── Overleaf
│       └── Manipulador_Antropomórfico_3_DOF_con_Succión_Neumática_para_Alimentos.zip
│
└── Code
    ├── Master
    │   └── Master.ino
    └── Slave
        └── Slave.ino

---

## Authors

- Sebastián Betancourt  
- Harold Lucero  
- María Fernanda Maldonado  

School of Mechatronics  
Universidad Internacional del Ecuador  

---

## Acknowledgments

Special thanks to Professors Patricio Cruz and Alexander Tirira for their academic guidance, and to Universidad Internacional del Ecuador for providing facilities and equipment.

---

## Purpose of This Repository

This repository is published **for academic and professional portfolio purposes** and is referenced in the author's résumé.


