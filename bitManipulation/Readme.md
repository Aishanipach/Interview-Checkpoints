## Bit Manipulation

For X and Y such that 
X/2=Y

Example:  
- 7/2=3
    7->111 (3)
    3->011 (2)
    
    
- 12/2=6
    12->1100 (2)
    6->0110 (2)
    


If the X is **ODD**

It will have the least significant bit set. Hence dividing by 2, will be right shifting

If the X is **EVEN**

Its least significant bit will not be set hence dividing by 2 will have no effect on number of set bits as only 0 will be lost.

### So if the number if the X is ODD, number of set bits of X = 1 + Y

### But when X is even, number of set bits of X = Y
