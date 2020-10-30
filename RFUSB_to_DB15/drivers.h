//
// Created by Kitsune on 8/22/2020.
//

#ifndef USB2DB15_DRIVERS_H
#define USB2DB15_DRIVERS_H

#include "HIDController.h"

// Please Keep the IDs in Alphabetical order to help
// others find the keys thank you

/****************
 * Vendor IDs
 ****************/

#define VID_8BITDO              0x2DC8 // 8BitDo Bluetooth (D-INPUT MODE)
#define VID_BROOK               0x0C12 // Brook
#define VID_BUFFALO             0x0583 // Buffalo
#define VID_GENERIC             0x0079 // Generic
#define VID_HONCAM              0x20D6 // Honcam
#define VID_HORI                0x0F0D // HORI (Also used by Retrobit 2.4GHz)
#define VID_MADCATZ             0x0738 // Mad Catz
#define VID_NACON               0x146B // Nacon
#define VID_QANBA               0x2C22 // Qanba
#define VID_RAZER               0x1532 // Razer
#define VID_SONY                0x054c // Sony
#define VID_UPCB                0x04D8 // Universal PCB Project

/****************
 * Product IDs
 ****************/

#define PID_8BITDO_M30          0x5006 // 8BitDo M30 Bluetooth Wired Controller (D-INPUT MODE)
#define PID_8BITDO_SFC30        0xAB21 // 8BitDo SFC30 Wired Controller
#define PID_BUFFALO_CLASSIC     0x2060 // iBUFFALO SNES CLASSIC USB GAMEPAD
#define PID_BROOK_UNIVERSAL     0x0C30 // Brook Universal Fighting PCB
#define PID_GENERIC_SNES        0x0011 // Generic SNES pad
#define PID_HONCAM              0xA713 // Honcam HC-J2003
#define PID_HORI_CMDR           0x0085 // HORI Fighting Commander
#define PID_HORI_FIGHTING_EDGE  0x00C0 // HORI Fighting EDGE for PlayStation 4
#define PID_HORI_FS3            0x0010 // HORI Fighting Stick 3
#define PID_HORI_FSV3           0x0027 // HORI Fighting Stick V3
#define PID_HORI_HORIPAD        0x0066 // HORIPAD FPS+(PS4)
#define PID_HORI_LITE           0x00EE // HORI ワイヤードコントローラライト for PS4-102
#define PID_HORI_RAP_PREMIUM    0x0026 // HORI Real Arcade リアルアーケードPro.3 Premium VLX
#define PID_HORI_RAP_PS3        0x0011 // HORI Real Arcade Pro.3 SA PS3コントローラ
#define PID_HORI_RAP_V_PS3      0x008B // HORI RAP V HAYABUSA Controller(PS3)
#define PID_HORI_RAP_V_PS4      0x008A // HORI RAP V HAYABUSA Controller(PS4)
#define PID_MADCATZ_SF_PS3_RND1 0x8818 // Mad Catz Street Fighter IV Tournament Edition Round 1 (PS3)
#define PID_MADCATZ_SF_PS3_RND2 0x8838 // Mad Catz Street Fighter IV Tournament Edition Round 2 (PS3)
#define PID_NACON_DAIJA_PS3     0x0904 // Nacon Daija (PS3)
#define PID_NACON_DAIJA_PS4     0x0D09 // Nacon Daija (PS4)
#define PID_QANBA_CRYSTAL_PS4   0x2200 // Qanba Crystal (PS4)
#define PID_QANBA_OBSIDIAN_PS3  0x2302 // Qanba Obsidian (PS3)
#define PID_QANBA_OBSIDIAN_PS4  0x2300 // Qanba Obsidian (PS4)
#define PID_RAZER_PANTHERA      0x0401 // Razer Panthera
#define PID_RETROBIT_SATURN     0x00C1 // Retrobit Sega Saturn Wireless 2.4G
#define PID_SONY_PS4_ADAPTER    0x0BA0 // PS4 Wireless Adapter
#define PID_SONY_PS4_JP         0x09CC // PS4 Controller JP region
#define PID_SONY_PS4_NA         0x05C4 // PS4 Controller NA region
#define PID_UPCB                0x1529 // Universal PCB Project

/****************
 * D Pad Constants
 ****************/

#define DPAD_UP         0
#define DPAD_UP_RIGHT   1
#define DPAD_RIGHT      2
#define DPAD_DOWN_RIGHT 3
#define DPAD_DOWN       4
#define DPAD_DOWN_LEFT  5
#define DPAD_LEFT       6
#define DPAD_UP_LEFT    7

#define DPAD_MASK       0x0F

void setupController(uint16_t vid, uint16_t pid, HIDController *controller);

// 8BitDo Controllers
void setup8BitDoM30(HIDController *controller);
void setup8BitDoSFC30(HIDController *controller);

// Buffalo Controllers
void setupBuffaloClassic(HIDController *controller);

// Generic Controllers
void setupGenericSNES(HIDController *controller);

// Honcam Controllers
void setupHoncam(HIDController *controller);

// Hori Controllers
void setupHoriFightingCmdr(HIDController *controller);
void setupHoriRAP3(HIDController *controller);

// Retrobit Controllers
void setupRetrobit_Saturn(HIDController *controller);

// Sony
void setupPS4(HIDController *controller);

#endif //USB2DB15_DRIVERS_H
