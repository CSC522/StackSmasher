//
// Created by Ray Chatary III on 9/11/18.
//

#include stdio.h
void main() { char *name[2];
    name[0] = "/bin/sh"; name[1] = NULL;
    execve(name[0], name, NULL);
}