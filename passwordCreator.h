#ifndef PASSWORDCREATOR_H
#define PASSWORDCREATOR_H

#define MAX_PASSWORD_LENGTH 64

int generate(size_t length);
void generateAndSafe(size_t length, char *service[]);

#endif
