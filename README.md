# PWM Siren Effect

An mbed project that generates a two-tone siren sound using the board’s PWM hardware output.

---

## 🧠 Overview

* Produces alternating high and low frequencies through a PWM pin.
* Creates a siren-like effect by switching between two tones.
* Demonstrates use of PWM for sound generation.

---

## ⚙️ Hardware Requirements

* Mbed-compatible microcontroller (e.g., NUCLEO board)
* Piezo speaker or small buzzer
* Jumper wires and breadboard

### Pin Connections

| Component   | Pin        | Description       |
| ----------- | ---------- | ----------------- |
| Speaker (+) | PB_8 (D15) | PWM output pin    |
| Speaker (−) | GND        | Ground connection |

---

## ▶️ How to Use

1. Open the code in **Mbed Studio** or the **Mbed Online Compiler**.
2. Connect a speaker or buzzer to pin **D15 (PB_8)** and ground.
3. Flash the program to the board.
4. The speaker will continuously alternate between two tones, creating a siren effect.

---

## 🧩 Code Reference

```cpp
#include "mbed.h"

// In your board, PB_8 corresponds to pin D15
PwmOut speaker(PB_8);

int main()
{
    int i;
    int freq1 = 1200;
    int freq2 = 700;
    float delay = 500;

    while (1) {
        // two tone effect - two periods of two frequencies
        // increase volume - by changing the PWM duty cycle
        speaker.period(1.0/freq1);
        speaker.write(0.5); // Half volume
        thread_sleep_for(delay);
        speaker.period(1.0/freq2);
        thread_sleep_for(delay);
    }
}
```

---

## 📄 Attribution

```cpp
// ENGR 202 – Lab 3 Preparation Speaker Example  
// 30/10/2023 Tilly Alton, originally by Ioannis Tsitsimpelis  
// Description: This code uses the PWM hardware output of the board to produce a siren effect.
```

---

## 🧱 Project Structure

```
├── main.cpp
├── README.md
└── mbed-os/
```

---

### License

Open-source and free for educational use.
Attribution retained per original author comments.
