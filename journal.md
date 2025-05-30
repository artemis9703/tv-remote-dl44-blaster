---
title: "Han Solo's Universal TV Remote"
author: "Art3mis"
description: "a universal tv remote disguised as han solo's DL-44 blaster"
created_at: "2025-05-20"
---

# May 20th: the idea

today i came up with the idea for a universal tv remote and mapped out my plan on a picture of the DL-44. i also started researching into the differences between a RP pico and an arduino. i have settled on an pico and am planning to start on the circuit schematic tomorrow

![Screenshot 2025-05-17 110114](https://github.com/user-attachments/assets/14400e00-e1ed-4b52-bd47-f8ef91e446f7)

**Total time spent: 2h**

# May 22nd: schematicing

today i loaded up kicad and designed the schematic for my blaster remote. i picked a raspberry pi pico for the microcontroller and decided on the number of buttons required. 12 buttons are necesary: on/off, soucre, volume +/-, channel +/-, up, down, left, right, select, and one to select which kind of tv your using.

![Screenshot 2025-05-22 203044](https://github.com/user-attachments/assets/9544f1fe-c4d1-49f9-8cfb-3ec1a5d87e89)

**Total time spent: 1h**

# May 24th: schematicing part 2

so i thought i had it all figured out with the RP pico, until i realized there would actually be too much power draw for it to work with batteries. i went through and changed the RP pico out for an arduino nano. i also added connector pins and sockets to the circuit because i need to have the buttons on two separate boards so one can go down in the handle. i also added the footprints and switched it over to the pcb maker thingy.

![Screenshot 2025-05-24 111457](https://github.com/user-attachments/assets/deee781a-224e-4c59-b981-aac3f14f10ba)

**Total time spent: 1h**

# May 25th: the actual board bits

today i switched everything over to the pcb maker thingy and tried to lay it out. the first descision was to but the buttons on the backs off the boards so they could stick through the handle. after that, layout and size were the only problems. i couldn't make it too big because the hilt isnt very thick. i thought i had it figured out until i started trying to wire everything. the amount of vias on these boards is insane. whoever manages to manufacture this should get an award. i think i managed to get everything figured out, though. tomorrow its on to solldiworks.

![Screenshot 2025-05-25 184550](https://github.com/user-attachments/assets/a573c34f-c4bc-4413-ab43-22bb67548f3a)

**Total time spent: 3h**

# May 29th: solidworks, yay :/

so it took me a few days to get on solidworks and start but here we are. im going to try to 3d sketch this blaster outline, then cut it in half to carve out spots for the wiring and stuff. i didnt really get that far before i remembered why i hate solidworks and just modeling in general. i have no idea how to extrude surfaces so pretty much everything i got done is paper thin and unprintable. after that realisation (realization? spelling is hard) i pretty much gave up for the day. morale is low. but yeah, so tomorrow we get to continue. yaaay.

![Screenshot 2025-05-29 202615](https://github.com/user-attachments/assets/95fd4705-ad9a-46ee-9764-3a2aa909069f)

**Total time spent: 1h**
