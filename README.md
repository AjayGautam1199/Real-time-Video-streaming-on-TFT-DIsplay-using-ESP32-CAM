# Real-Time Video Streaming on TFT Display using ESP32 CAM

This project demonstrates how to stream real-time video from an ESP32 CAM module to a TFT display. The ESP32 CAM is a low-cost microcontroller with an integrated camera and WiFi, making it perfect for IoT projects that require video streaming capabilities.


## Demo
![Demo](demo_cam.gif)

## Table of Contents
- [Features](#features)
- [Hardware Required](#hardware-required)
- [Software Required](#software-required)
- [Wiring Diagram](#wiring-diagram)
- [Installation](#installation)
- [Usage](#usage)
- [License](#license)

## Features
- Real-time video streaming from ESP32 CAM to TFT display
- Low latency and high frame rate video transmission
- Simple setup and configuration
- Open-source and easy to customize

## Hardware Required
- ESP32 CAM module
- TFT display (compatible with SPI interface)
- Breadboard and jumper wires
- Power supply (5V)

## Software Required
- Arduino IDE
- ESP32 board support package for Arduino IDE
- TFT display library 


## Wiring Diagram
To connect the ESP32 CAM to the TFT display, follow the wiring diagram below:

| ESP32 CAM Pin | TFT Display Pin |
| ------------- | ---------------- |
| 3.3V          | VCC              |
| GND           | GND              |
| GPIO 12       | CS               |
| GPIO  2       | DC/RS            |
| GPIO 15       | MOSI             |
| GPIO 14       | MISO             |
| GPIO 13       | SCK              |
| GPIO 4        | RST              |

**Note:** The exact pin configuration may vary depending on your specific TFT display model.

## Installation
1. Clone this repository:


2. Install the required libraries in the Arduino IDE:
    - Go to **Sketch** -> **Include Library** -> **Manage Libraries...**


3. Open the `cam_ajay_g.ino` file in Arduino IDE.

4. Select your board and port:
    - Go to **Tools** -> **Board** and select `AI Thinker ESP32-CAM`
    - Go to **Tools** -> **Port** and select the appropriate port for your ESP32 CAM.

5. Upload the code to your ESP32 CAM.

## Usage
Once the code is uploaded and the ESP32 CAM is powered on, it will start streaming video to the connected TFT display. You should see the real-time video feed on the screen.

## License
This project is licensed under the MIT License. See the [LICENSE](LICENSE) file for more details.

---

Feel free to contribute to this project by opening issues or submitting pull requests.

Happy streaming!
