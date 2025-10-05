# HayBox - HDR

HayBox is a modular, cross-platform firmware for digital or mixed analog/digital controllers, primarily targeted at [B0XX](https://b0xx.com)-style controllers.

This is a fork of the original firmware designed to add a mode specifically for HewDraw Remix, a Melee and PM inspired conversion mod for Ultimate. Everything in this version of the firmware is identical to vanilla with the exception of HDR mode, so please refer to the original [README](https://github.com/JonnyHaystack/HayBox) for more information on other modes.

#### Game mode selection

- MB1 + LT2 + LF3 (Start + Mod Y + Left) - HewDraw Remix mode

#### HDR mode

Since HDR uses stick values indentical or very close to PM/P+, HDR mode is functionally identical to ProjectM mode with a few changes, detailed in the table below. 

**NOTE:** the user should use the controller in Switch Pro Controller mode in order to gain access to an additional shoulder button - this means plugging directly into the console or PC while holding X (RF2), **not** using a GameCube controller adapter. If this isn't possible and a GCC adapter must be used, then the button mapping remains identical to ProjectM mode (with the loss of the RF7 button)

| Input | ProjectM Mode Output | HDR Mode Output |
| - | - | - |
| LF4 | Left Trigger | ZL Trigger |
| RF5 | Right Trigger | ZR Trigger |
| RF3 | Z Button | R Shoulder |
| RF7 | Light shield macro | L Shoulder |
| MB1 | Start | Plus |
| LT1 + MB1 | N/A | Minus |
| LT2 + MB1 | N/A | Home |
| LT1 + LT2 + MB1 | N/A | Capture |
