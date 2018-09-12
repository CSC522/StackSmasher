//
// Created by Ray Chatary III on 9/11/18.
//
void function(char *str) { char buffer[16];
    strcpy(buffer,str); }
void main() {
    char large_string[256]; int i;
    for( i = 0; i < 255; i++) large_string[i] = 'A';
    function(large_string); }
