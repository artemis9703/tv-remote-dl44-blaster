# Han Solo's Tv Remote

ive made plans for a tv remote in the shape of han solo's DL-44 blaster. its a replica of the dl44 from star wars, with the guts of a tv remote stuffed inside. it can turn the tv on, change the volume, change the channel, use source/input, and it also has basic directional controls. i will 3d print the casing and order the boards from jlcpcb. 

i got the idea a couple days after highway was announced. we were trying to watch a movie, and our tv remote stopped working. i thought, wouldnt it be so cool to have a theme tv remote that actually works (turns out the batteries were just dead, but what can you do). the first design plan was a wand from harry potter, but then i saw star wars and it turned into han solo's blaster. one month later, and here we are.

project photos :)

![Screenshot 2025-06-20 010506](https://github.com/user-attachments/assets/e7ccb0ef-995f-4340-aab0-24641076a3f2)
![Screenshot 2025-05-25 184550](https://github.com/user-attachments/assets/032af1c7-7dbb-4f2f-b999-609e1e6c37f5)
![Screenshot 2025-05-24 111457](https://github.com/user-attachments/assets/bc6e6a77-99ec-4360-ab8b-aaeec6402e78)

BOM

| Designator | Footprint                          | Quantity | Value           |
|------------|------------------------------------|----------|-----------------|
| A1         | Arduino_Nano                       | 1        | Arduino_Nano_v2.x |
| BT1, BT2, BT3, BT4 | SolderWire-0.1sqmm_1x02_P3.6mm_D0.4mm_OD1mm | 4 | Battery_Cell |
| D1         | LED_D3.0mm_IRBlack                 | 1        | IR204A          |
| J1         | PinHeader_1x11_P2.54mm_Vertical    | 1        | Conn_01x11_Socket |
| J2         | PinHeader_1x11_P2.54mm_Vertical    | 1        | Conn_01x11_Pin  |
| R1, R10, R11, R12, R13, R2, R3, R4, R5, R6, R7, R8, R9 | R_Axial_DIN0207_L6.3mm_D2.5mm_P7.62mm_Horizontal | 13 | R |
| SW1, SW10, SW11, SW12, SW2, SW3, SW4, SW5, SW6, SW7, SW8, SW9 | SW_PUSH_6mm | 12 | SW_PUSH |
