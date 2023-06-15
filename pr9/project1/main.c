#include <8051.h>

void main()
{

	int i;

	while(1){
		for(i = 0; i<8; i++){
			P2 = 160+13*i;
		}
		for(i = 1; i<=8; i++){
			P2 = 224;
		}
		for(i = 1; i<8; i++){
			P2 = 224-5*i;
		}
		for(i = 1; i<=8*2; i++){
			P2 = 128;
		}
	}
}

