#include<unistd.h>

void ft_is_negative(int n){
char r ;
if (n <0 ){
r = 'N';
write (1, &r,1);}
else if((n>0) || (n==0)){
r = 'P';
write (1, &r, 1);
}}

int main(){
int numero = 0;
ft_is_negative(numero);
return 0;}
