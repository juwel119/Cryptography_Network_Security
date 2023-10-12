#include<stdio.h>
int main()
{
char msg[100],msg2[100], ch;
int i,j, key;

printf("Enter a message: ");
gets(msg);
printf("Enter key: ");
scanf("%d", &key);
for(i = 0; i<msg[i]!= '\0'; ++i) {
ch = msg[i];
int chi=(int)ch;
if(chi >= 97 && chi <= 122) {
chi = chi + key;
if(chi <97){
chi += 26;
}
msg[i] = (char)chi;
}
else if(chi >= 65 && chi <= 90) {
chi = chi + key;
if(chi < 65) {
chi += 26;
}
msg[i] = (char)chi;
}
}
printf("Encrypted Output: %s", msg);
int k=0;
for(j=1;j<=25;j++)
{
k++;
for(i = 0; i<msg[i]!= '\0'; ++i) {
ch = msg[i];
int chi=(int)ch;
if(chi >= 97 && chi <= 122) {
chi = chi - k;
if(chi <97){
chi += 26;
}
msg[i] = (char)chi;
}
else if(chi >= 65 && chi <= 90) {
chi = chi - k;
if(chi < 65) {
chi += 26;
}
msg[i] = (char)chi;
}
}
printf("\n\nDecrypted message: %s",msg);
k=0;
}
return 0;
}
