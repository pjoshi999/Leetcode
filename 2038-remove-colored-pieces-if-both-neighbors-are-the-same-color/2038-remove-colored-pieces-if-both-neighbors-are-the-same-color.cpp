class Solution {
public:
    bool winnerOfGame(string colors) {
        if(colors.size() <= 2) {
            return false;
        }
        int i = 0;
        int j = 1;
        int alice = 0;
        // Alice
        while(j<colors.size()-1 && i < colors.size()-1) {
            if(colors[j] == 'A' && colors[j+1] == 'A' && colors[j-1] == 'A') {
                alice++;
                j++;
            }
            else {
                j++;
            }
        }
        i=0;
        j = 1;
        int bob = 0;
        // Bob
        while(j<colors.size()-1 && i < colors.size()-1) {
            if(colors[j] == 'B' && colors[j+1] == 'B' && colors[j-1] == 'B') {
                bob++;
                j++;
            }
            else {
                j++;
            }
        }
        return alice > bob;
    }
};