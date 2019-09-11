#include <stdio.h>
int main(){
	int chose;
	int tien;
	tien =10000;
		for(int i = 0;i<5;i++){
		
	printf(" 1.chon mon an\n 2.chon do uong\n 3.thanh toan\n 4.thoat chuong trinh\n");

	scanf("%d",&chose);
	if(chose ==1){printf("1.com ga\n 2.pho\n 3.bun\n 4.quay lai\n ");}
	else if(chose==2){printf("1.coca\n 2.nuoc loc\n 3.nuoc cam\n 4.quay lai\n");
	}
	else if(chose==3){printf("so tien can tra la %d",tien);
	}
	else if(chose==4){break;
	}		
 	scanf("%d,&chose");
 	if(chose<4){printf("cam on\n");}
 	
	 }
	 	
	
	 
	
	
	
	
	
		
	
	 
	 
	 		
return 0;
}

	

	
	
	
	
	
	
	
	
	
	
