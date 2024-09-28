#include <unistd.h>

void ft_putchar(char c){
write(1, &c,1);
}

int main(){
	char r = 'A';
	ft_putchar(r);
	return 0;}
