[![HitCount](http://hits.dwyl.com/koreymitchell/Predictive-Text.svg)](http://hits.dwyl.com/koreymitchell/Predictive-Text)

# Predictive Text
Given a text file (Dr. Seuss provided as example), this program will write a new story using text prediction.

# What I Learned
- How to use HashMap and HashNode.
- (1)-Quadratic and (2)-Linear probing for collision handling.
- Calculating HashCode values using (1)-Modulo method, and by (2)-converting to ASCII prior to Modulo method.
- Refactoring HashMaps to properly store values in cases of inefficiency.

# How to Use
```c
makeSeuss s1 = makeSeuss("InputText.txt", "OutputText.txt", Boolean-1, Boolean-2);
// Boolean-1 -> if true, first hash function used, otherwise second hash function is used
// Boolean-2 -> if true, first collision method used, otherwise second collision method is used.
```
