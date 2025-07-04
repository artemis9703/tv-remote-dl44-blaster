---
title: "Han Solo's Universal TV Remote"
author: "Art3mis"
description: "a universal tv remote disguised as han solo's DL-44 blaster"
created_at: "2025-05-20"
total_time_spent: "27h"
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

**Total time spent: 1.5h**

# May 25th: the actual board bits

today i switched everything over to the pcb maker thingy and tried to lay it out. the first descision was to but the buttons on the backs off the boards so they could stick through the handle. after that, layout and size were the only problems. i couldn't make it too big because the hilt isnt very thick. i thought i had it figured out until i started trying to wire everything. the amount of vias on these boards is insane. whoever manages to manufacture this should get an award. i think i managed to get everything figured out, though. tomorrow its on to solldiworks.

![Screenshot 2025-05-25 184550](https://github.com/user-attachments/assets/a573c34f-c4bc-4413-ab43-22bb67548f3a)

**Total time spent: 3h**

# May 29th: solidworks, yay :/

so it took me a few days to get on solidworks and start but here we are. im going to try to 3d sketch this blaster outline, then cut it in half to carve out spots for the wiring and stuff. i didnt really get that far before i remembered why i hate solidworks and just modeling in general. i have no idea how to extrude surfaces so pretty much everything i got done is paper thin and unprintable. after that realisation (realization? spelling is hard) i pretty much gave up for the day. morale is low. but yeah, so tomorrow we get to continue. yaaay.

![Screenshot 2025-05-29 202615](https://github.com/user-attachments/assets/95fd4705-ad9a-46ee-9764-3a2aa909069f)

**Total time spent: 1h**

# May 31th: actual progress

i took a break to wallow in my hatred in solidworks then hopped back on to try again. this time i figured out that 3d sketching wasnt the way to go when i could just 2d sketch it and revolve stuff. so yeah, today went a lot better. something came up so i couldnt work for very long but i think i made good progress. i also scaled it accurately. 

![Screenshot 2025-06-02 023926](https://github.com/user-attachments/assets/0ea3091d-647d-4ee5-bb54-e86a16099665)

**Total time spent: 0.5h**

# June 2nd: more solidworks

i meant to work on this yesterday but we were busy so here we are. today i made some progress on the scope aka where the batteries go. i think i got it done for the most part but i still havent figured out how to wire stuff into it yet. this took an embarassing long time for a little bit of progress but i digress. tomorrow i will start working on the handle maybe.

![Screenshot 2025-06-02 033307](https://github.com/user-attachments/assets/fd182e50-9c11-4f0f-8266-0f74468a57a0)

**Total time spent: 1h**

# June 4th: even more solidworks

today i decided to get a ton done and then i got distracted (foreigner is rly good) so i didnt but i did make some progress on the handle. i realized my circuit board wouldnt fit inside the handle if i left it the movie accurate size so i had to expand it some. after expanding it none of the other pieces fit together so i had to rework the entire base. and then i realized i extruded it too skinny for the boards so i went through and re-extruded everything. other than that i thought this sesh went pretty good. im getting out of my solidworks slump so yaaay!!

![Screenshot 2025-06-04 004018](https://github.com/user-attachments/assets/f2d80d89-71aa-4f42-9acc-d9add2dc06b1)

**Total time spent: 1.5h**

# June 5th: details!!

i added a ton of the finer details today, i was not really excited but this actually turned out to be pretty fun. i got the holes in the barrel thingy done and the details on the main box place. this took a longer than i would have wanted it too, but i think i have enough time to go slower. so yeah, i think today went pretty good.

![Screenshot 2025-06-05 012421](https://github.com/user-attachments/assets/97e9d672-3117-49be-9ac7-f04a65425f3b)

**Total time spent: 1.5h**

# June 7th: done with the initial model

today i finished modeling the gun!!! but not really, i still have to add the threads for the caps on the battery pack and hollow out the inside. i got the first thread on the end of the scope. i also looked into battery options more because i need 5v and dont have space for four double a's. i didnt come up with anything good and am going to try again tomorrow. again, this is all taking a lot longer than i would like, but what can i do.  

![Screenshot 2025-06-07 225000](https://github.com/user-attachments/assets/2f3d4491-ae27-4e49-a7d1-50a99053aa94)

**Total time spent: 1.5h**

# June 17th: some progress

yes, its been ten days. i know. i've been getting super stuck on this project right towards the end, like usual. i tried again today and finally got something done. i made the trigger mechanism and outlined the places for the circuit boards. i tried to start writing the code but got hopelessly lost. im going to see if i cant try again tomorrow.

![Screenshot 2025-06-17 033411](https://github.com/user-attachments/assets/7427cfb1-ea40-4af1-b8b6-5db97cd543a6)

**Total time spent: 0.5h**

# June 18th: circuit board problems :(

today i got more excited about the project and worked on the cut outs for the circuit boards again. i also hopped on jlcpcb and tried to figure out how to order the boards. ran into a couple dead ends there and then realized the arduino is unflashable because the circuit boards is like over the whole thing. tomorrow i might try to start writing the code for the arduino. my dad used to teach a class about this and said he would teach me, so that should go well.

![Screenshot 2025-06-18 042630](https://github.com/user-attachments/assets/dc8b668c-9a10-46bd-b22b-4e83fe86581e)

**Total time spent: 1.5h**

# June 18th (part 2): first circuit board slot done!! 

so today i did some planning. i've decided how im going to fit the circuit board into the handle. im going to make a separate peice that can fit in between the two sides of the handle and snap the board into that. i also decided that the usb connecter on pcb numero uno is fine and doesnt need adjusting. this project wont require me to flash it after i do breadboard testing. i got the first slot done for the pcb!!! alexren's design contest is really helping me get back into this so thank you alexren. i think what i really needed was a good deadline to work against. after finishing the first pcb slot i tried to make a space for the IR LED but realized i have no idea how to read the diagram on the size. i also downloaded arduino ide to start programming soon.

![Screenshot 2025-06-19 015506](https://github.com/user-attachments/assets/f54e1f96-ee79-45d2-9da1-3c537cbab0a4)

**Total time spent: 2h**

# June 20th: MODEL DONE!!

so its 1 am. were a few miles off the coast of california now, and ive just finished the model!! i moved the button for changing tv brand down to the bottom of the model and made a space for it there. i also sized and finished up the slot for the LED. after that, i made a cover for the main button pcb and decided how that would fit it to the design. later today im going to open up arduino IDE and get started on that. im super happy the model is done, and i feel confident i can finish this up before the 26th!!

![Screenshot 2025-06-20 010506](https://github.com/user-attachments/assets/be747c7c-df22-4fed-8773-10e69c5a9f33)

**Total time spent: 3h**

# June 21st: ...arduino ide

i tried to start writing the code today... and it actually went better than i thought. my dad had to help some, but whatever language arduino ide uses is actually fairly easy to understand. i got through a good chuck of it today and im quite happy. got a couple errors, but im gonna get the whole script down and then debug. again, it took me quite a while, but i was able to stay focused for a good chunk of time :).

![Screenshot 2025-06-23 214311](https://github.com/user-attachments/assets/b865db27-1fae-4ac9-8b0e-9b74d8d07b48)

**Total time spent: 2.5h**

# June 23rd: WE'RE DONE!!

ok, not really. i still have to submit and order the parts and build and stuff, but i can submit now!! i finished writing the code for the blaster today!! im going to try to submit it now, hopefully it gets approved!! and, i finished this in time for alexren's design contest!! figured out the error was just a missing semicolon, of course. the IR codes for the different tv brands were kind of difficult to find but i eventually got them all. i decided to only include 3 brands for now, and if i decide to add more later i can. super excited that my first original project is becoming an actually thing!!

![Screenshot 2025-06-23 213926](https://github.com/user-attachments/assets/1cacff9a-e5be-4cba-b342-5f9bd1f4d890)

**Total time spent: 3h**
