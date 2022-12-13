#include<stdio.h>
#include<stdlib.h>

/**
* main - program starting point
* Return: 0 (Success)
*/
int main(void)
{
int start1, start2, start3, start4, stop1, stop2, stop3, stop4;
start1 = '1';
start2 = '0';
start3 = '0';
start4 = '0';
stop1 = '9';
stop2 = '9';
stop3 = '9';
stop4 = '9';
while (start4 <= stop4) {
while (start3 <= stop3) {
while (start2 <= stop2) {
while (start1 <= stop1) {
putchar(start4);
putchar(start3);
putchar(' ');
putchar(start2);
putchar(start1);
if (!(start4 == '9' && start3 == '8')) {
putchar(',');
putchar(' '); }
start1++; }
start2++;
start1 = '0'; }
start3++;
start2 = start4;
start1 = start3 + 1; }
start4++;
start3 = '0';
start2 = start4;
start1 = start3 + 1; }
putchar('\n');
return (0); }
