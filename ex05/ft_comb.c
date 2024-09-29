#include<unistd.h>

void ft_comb(void){
char v[3];

v[0] = '0';

while(v[0]  <= '7'){

	v[1] = v[0]+1;

		while(v[1]<='8'){
			v[2] = v[1]+1;

			while (v[2] <='9'){
				write(1, &v[0], 1);
				write(1, &v[1], 1);
				write(1, &v[2], 1);
				
				if (!(v[0] == '7') || (v[1] == '8') || (v[2] =='9')){
					write(1, ", ", 2);
			}
v[2]++;

}

v[1]++;

}
v[0]++;
}
}
int main(){
ft_comb();
return 0;
}
