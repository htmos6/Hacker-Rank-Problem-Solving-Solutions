int jumpingOnClouds(vector<int> c) {
    int jump = 1;
    int index = (c[2] == 0) ? 2:1 ;

    while (c.size() > 2) {
        if (index == c.size()-1) {
            break;
        }
        else if (index == c.size()-2) {
            index += 1; 
            jump += 1;
        }
        else if (c[index + 2] == 0) {
            index += 2;
            jump += 1;
        }
        else  {
            index += 1; 
            jump += 1;
        }       
    }
    return jump;
}
