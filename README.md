# Obstacle Avoiding Robot
An Arduino-based autonomous robot that uses ultrasonic sensing and servo-controlled scanning to navigate around obstacles in real-time.

## Overview
This project represents the first iteration of an autonomous navigation system, demonstrating fundamental concepts in robotics including sensor integration, motor control, and decision-making algorithms. The robot uses an HC-SR04 ultrasonic sensor mounted on a rotating servo to scan its environment and make navigation decisions.
The system addresses basic autonomous navigation challenges while serving as a foundation for more advanced robotics applications including LIDAR integration and environment mapping.

### Key Features:
- Real-time obstacle detection using ultrasonic sensing
- Servo-controlled sensor scanning for 180° area coverage
- Autonomous navigation with optimized pathfinding algorithm
- Visual feedback system with LED status indicators
- 5-hour continuous operation capability
- Custom 3D-printed components for enhanced performance

## Design Specifications
- Detection Range: HC-SR04 ultrasonic sensor (2cm to 400cm range)
- Scanning Coverage: 180° servo-controlled sensor rotation
- Locomotion: Dual 6V DC motors with custom 3D-printed wheels
- Navigation Accuracy: 70% success rate in 3-square-foot obstacle field
- Operating Time: 5 hours continuous operation (2x 9V batteries)
- Control System: Arduino Uno microcontroller with optimized pathfinding code

## System Components
### Sensing & Control:
- HC-SR04 ultrasonic sensor for distance measurement
- Servo motor for sensor positioning and area scanning
- Arduino Uno microcontroller for processing and control
- Integrated circuit (IC) for power management and signal processing
### Locomotion System:
- 2x 6V DC motors for differential drive
- Custom 3D-printed wheels designed in Onshape CAD
- Elastic bands for enhanced traction on various surfaces
- Differential steering for precise turning control
### User Interface:
- Green LED indicator for clear path status
- Red LED indicator for obstacle detection
- Visual feedback system for operational status
### Mechanical Structure:
- Cardboard chassis using household materials
- Straws for structural support and cable management
- Lightweight design optimized for battery life

## Technical Implementation
### Sensor Integration:
- HC-SR04 ultrasonic sensor mounted on servo motor
- 180° scanning pattern for comprehensive area coverage
- Real-time distance measurement and obstacle mapping
- Servo control for precise sensor positioning
### Navigation Algorithm:
- Optimized pathfinding code for obstacle avoidance
- Real-time processing of sensor data for navigation decisions
- 70% accuracy achieved in controlled test environment
### Motor Control:
- Differential drive system using dual DC motors
- Enhanced traction system with elastic band implementation
- Power-efficient operation for extended runtime
### Software Architecture:
- Arduino IDE programming environment
- Modular code structure for easy modification
- Real-time sensor data processing
- Integrated LED feedback system

## Development Process
### Design Phase:
- Research of ultrasonic sensor capabilities and limitations
- CAD modeling of custom wheels in Onshape
- Chassis design using available household materials
- Power system planning for 5-hour operation target
### Prototyping:
- 3D printing of custom wheel designs
- Assembly of mechanical components
- Arduino programming and sensor integration
- Initial testing and calibration
### Optimization:
- Code optimization for improved decision-making accuracy
- Testing in controlled 3-square-foot obstacle field
- Performance analysis and algorithmic improvements
- Extended runtime testing and validation

## Performance Results
### Navigation Performance:
- Accuracy: 70% successful obstacle avoidance in test environment
- Detection Range: Reliable obstacle detection from 2cm to 400cm
- Response Time: Real-time obstacle detection and navigation adjustment
- Scanning Coverage: Complete 180° area scanning capability
### Operational Performance:
- Runtime: 5 hours continuous operation achieved
- Reliability: Consistent performance across multiple test sessions
- Maneuverability: Successful navigation in confined spaces
- User Feedback: Clear LED status indication system
### Technical Achievements:
- Successful integration of multiple hardware components
- Custom mechanical design with 3D-printed components
- Optimized software algorithm for autonomous navigation
- Modular system architecture for future expansion

## Future Development Roadmap
### Immediate Improvements:
- Enhanced obstacle avoidance algorithm for higher accuracy
- Extended battery life optimization
- Improved mechanical design for durability
- Additional sensor integration for better environmental awareness
### Advanced Features (Next Iterations):
- LIDAR Integration: Advanced distance measurement and mapping
- RADAR Systems: Enhanced object detection and identification
- Environment Mapping: Real-time map generation and path planning
- Object Identification: Computer vision for object classification

## Learning Outcomes
### Technical Skills Developed:
- Arduino Programming: Microcontroller programming and hardware integration
- CAD Design: 3D modeling and printing using Onshape
- Sensor Integration: Ultrasonic sensor implementation and calibration
- Motor Control: DC motor control and differential drive systems
- Algorithm Development: Pathfinding and decision-making algorithms
### Engineering Process:
- Iterative design and prototyping methodology
- Performance testing and optimization techniques
- Hardware-software integration best practices
- Project documentation and analysis
### Research & Development:
- Investigation of LIDAR and RADAR technologies
- Analysis of autonomous navigation principles
- Study of robotics control systems
- Exploration of future enhancement possibilities

## Documentation & Resources
### Technical Documentation:
- Arduino code with detailed comments and optimization notes
- CAD files for 3D-printed wheel designs (Onshape format)
- Wiring diagrams and component specifications



This project demonstrates fundamental principles of autonomous robotics while serving as a foundation for advanced navigation systems. The combination of custom mechanical design, sensor integration, and optimized algorithms provides a comprehensive learning experience in robotics development.

Project Timeline: August 2024

Development Platform: Arduino IDE with Onshape CAD integration

Achievement: First successful iteration with 70% navigation accuracy and 5-hour operational capability
