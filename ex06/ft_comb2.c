#include <unistd.h>

void ft_2numbers(char n1, char n2, char n3, char n4){

write(1, &n1, 1);
write(1, &n2, 1);
write(1, " ", 1);
write(1, &n3, 1);
write(1, &n4, 1);

if (n1 !='9' | n2 !='8' | n3 != '9' | n4 !='9'){

write(1, ", ", 2);

}

}

void ft_comb2(void)
{

char n1, n2, n3, n4;

n1 = '0';

while (n1 <= '9'){
n2 = '0';
	while(n2 <= '9'){

n3 = n1;

		while (n3<='9'){
			n4 = '0'; 
			  if (n3 == n1) {
    				n4 = n2 + 1;
}
				  while (n4 <= '9'){
ft_2numbers(n1,n2,n3,n4);
n4++;
}
n3++;
}
n2++;

}
n1++;
}

}

int main(){

ft_comb2();
return 0;


}
