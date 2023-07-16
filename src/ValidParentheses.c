bool isValid(char * s){
    // build a stack 
    // add the { opposite ie } to the stack
    // loop through the string if its a { then add } to the stack 
    // if its a } pop item from the stack and see if they are equall

    char stack[strlen(s)];
    char* top_pointer = 0;
    for (int i = 0; i < strlen(s); i++) {
        switch (s[i]) {
            case '{':
                stack[top_pointer] = '}';
                top_pointer++;
            case '[':
                stack[top_pointer] = ']';
                top_pointer++;
            case '(':
                stack[top_pointer] = '}';
                top_pointer++;
            case '}':
                if (stack[--top_pointer] != '}') {
                    return false;
                }
            case ']':
                if (stack[--top_pointer] != ']') {
                    return false;
                }
            case ')':
                if (stack[--top_pointer] != ')') {
                    return false;
                }
        }
    }
    return true;
}