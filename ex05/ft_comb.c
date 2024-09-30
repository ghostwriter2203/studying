#include<unistd.h>

void ft_comb(void){

for (char n1 = '0';   n1 <= '7'; n1++){

		for(char n2 = n1+1 ; n2<='8'; n2++){

			for (char n3 = n2+1; n3 <='9'; n3++){
				write(1, &n1, 1);
				write(1, &n2, 1);
				write(1, &n3, 1);
				
				if (!(n1 == '7') || (n2 == '8') || (n3 =='9')){
					write(1, ", ", 2);
			}


}
}
}
}
int main(){
ft_comb();
return 0;
}
