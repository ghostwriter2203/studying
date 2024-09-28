#include <unistd.h>

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
write(1, &n1, 1);
write(1, &n2, 1);
write(1, " ", 1);
write(1, &n3, 1);
write(1, &n4, 1);

if (n1 !='9' | n2 !='8' | n3 != '9' | n4 !='9'){

write(1, ", ", 2);

}

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
//this is a comment just for test hahahahahaah
return 0;


}
