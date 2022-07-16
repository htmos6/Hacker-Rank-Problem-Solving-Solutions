string catAndMouse(int x, int y, int z) {

    if (abs(y-z) == abs(x-z)) {
        return("Mouse C");
    }
    else if (abs(y-z) < abs(x-z)) {
        return("Cat B");
    } 
    else  {
        return("Cat A");
    }   
     
}
