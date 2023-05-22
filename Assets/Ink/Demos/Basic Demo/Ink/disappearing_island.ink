#speaker:Dr. Baciu #portrait:Dr_Baciu
Your attention, please!
Here comes a new task for you. Are you ready to undertake it?

    + [Enlighten me] -> intro
    + [Not really] -> esc
    
=== intro ===
#speaker:Dr. Baciu #portrait:Dr_Baciu
"Tuvalu is sinking!"
This phrase is so frequently used by the locals of Tuvalu, and it is true without the slightest exaggeration.
Major Janik, would you please introduce the basics of Tuvalu to us?

    + [NEXT →] -> geobasic_01

=== geobasic_01 ===
#speaker:Maj. Janik #portrait:Maj_Janik
Tuvalu is a tiny archipelago in the Pacific Ocean, a speck of land measuring no more than 26 km², situated in Oceania, halfway between Hawaii and the Solomon Islands.
Please refer to the map for a more exact location.

    + [← PREVIOUS] -> intro
    + [Consult a map] -> map
    + [NEXT →] -> geobasic_02

=== map ===
[MAP]

    + [↺ BACK] -> geobasic_01

=== geobasic_02 ===
#speaker:Maj. Janik #portrait:Maj_Janik
Tuvalu is a Polynesian country, the 4th smallest nation in the world, with a population of just 11,000, most of whom live on Fongafale, the archipelago’s largest island, where they are packed in and fighting for space.
Due to global warming, glaciers are melting, and sea levels are rising every year. The ocean tides are getting stronger, and more sand is being washed into the Pacific every day.
And Doctor Kim is going to brief you what problem the above fact has led to.

    + [← PREVIOUS] -> geobasic_01
    + [NEXT →] -> submergence_01

=== submergence_01 ===
#speaker:Dr. Kim #portrait:Dr_Kim
2 of Tuvalu’s 9 islands are already on the verge of disappearing under the sea, swallowed up by rising sea levels and coastal erosion.
Most of the islands sit barely 3 m above sea level, and at its narrowest point, Fongafale stretches just 20 m across.
During storms, waves crash into the island from the east and west, “swallowing” the land. Such a peril, isn't it?

    + [← PREVIOUS] -> geobasic_02
    + [NEXT →] -> submergence_02

=== submergence_02 ===
#speaker:Dr. Kim #portrait:Dr_Kim
As the locals remember, the sand used to stretch out far. When they swam, they could see the seabed and the coral.
Now it is cloudy all the time and the coral are either bleaching or dying because of the rising sea temperatures.
Many of them say they have nightmares about being gobbled up for good by the sea, which may not be as distant as it sounds, but perhaps within the next generation. Now, I hope you already have some ideas about their problem.

    + [← PREVIOUS] -> submergence_01
    + [Take Orders] -> order

=== order ===
#speaker:Dr. Baciu #portrait:Dr_Baciu
Finally, here are the tasks for you to tackle.
1. Think about short-term solutions to decelerate the submergence of Tuvalu, so that more time can be bought to implement the long-term solutions.
2. Think about long-term solutions to save the people of Tuvalu, as well as the local flora and fauna, to avoid the creation of refugees or a destroyed ecosystem.
Do not forget that there might be inevitable relocation or evacuation of the population.

    + [↻ START AGAIN] -> geobasic_01
    + [All clear] -> esc

=== esc ===

    -> END






