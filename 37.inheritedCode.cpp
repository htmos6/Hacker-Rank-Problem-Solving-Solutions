class BadLengthException {
  int length;
  public:
    BadLengthException (int len) {
        length = len;
    };  
    int what () {
        return length;
    }
};
