#ifndef __UNISTD_H__
#define __UNISTD_H__

long malloc();
int exit();
int write(char *buf);
int clone(unsigned long fn, unsigned long arg, unsigned long stack);

#endif // !__UNISTD_H__