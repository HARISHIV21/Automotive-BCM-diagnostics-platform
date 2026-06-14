# Automotive BCM Diagnostics Platform

Safety-critical Body Control Module (BCM) simulation developed in Embedded C, featuring CAN communication, diagnostic fault management, runtime safety monitoring, and ECU health analytics.

## Highlights

- CAN Bus Communication
- Diagnostic Trouble Code (DTC) Management
- Safety-Critical Fault Detection
- RTOS-Style Task Scheduling
- Runtime Logging & Monitoring
- Battery Health Analytics
- Degraded Mode Handling

## Architecture

```text
Scheduler
    |
    +--> CAN Module
    +--> DTC Manager
    +--> Safety Manager
    +--> Logger
    |
    +--> Health Analytics Engine
```

## Sample Runtime Events

```text
[INFO][CAN] RX ID=0x203

[WARN][DTC_MANAGER]
Battery voltage below threshold

[CRITICAL][SAFETY_MANAGER]
ECU entering degraded operational mode
```

## Tech Stack

- Embedded C
- CAN Communication
- Automotive Diagnostics
- Fault Management
- Safety Monitoring
- Modular Software Architecture

## Build

```bash
make
./bcm_sim
```

## Engineering Focus

This project demonstrates software concepts commonly used in automotive ECUs:

- Body Control Modules (BCM)
- Diagnostic Systems
- Fault-Tolerant Design
- Runtime Health Monitoring
- Real-Time Scheduling Concepts

## Future Work

- UDS Diagnostics (ISO 14229)
- AUTOSAR-Inspired Architecture
- CAN FD Support
- FreeRTOS Integration
- Multi-ECU Communication

---

**Author:** Harish Raji Govindarassou
