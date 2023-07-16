char * convert(char * s, int numRows) {
    // technically a 1D array but can access like a 2D using numRows * i + j
    char* array = malloc((strlen(s) + 1) * sizeof(char));
    int s_point = 0;
    bool down = true;
    int j = 0;
    while (s_point < strlen(s)) {
        if (down) {
            for (int i = 0; i < numRows; i++) {
                if (s_point < strlen(s)) {
                    array[i * numRows + j] = s[s_point++];
                } else {
                    break;
                }
            }
            down = false;
            j ++;
        } else {
            // diagonal 
            for (int i = numRows; i > 1; i--) {
                if (s_point < strlen(s)) {
                    array[i * numRows + j] = s[s_point++];
                } else {
                    break;
                }
            }
            down = true;
        }
    }
    array[strlen(s)] = '\0';
    return array;
}