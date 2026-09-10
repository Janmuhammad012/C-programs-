#include<stdio.h>
#include<string.h>
struct phonestore{
	
	int id;
	char brand[20];
	char model[30];
	char color[30];
	int ram;
	int storage;
	int battery;
	char camera[30];
	float price;
	int quantity;
	char condition[30];
	int lounchyear;
	char os[30];
	char resolution[30];
	
	
};
void  showphoneinfo(struct phonestore[],int);
void showpriceofallphone(struct phonestore[],int);
void totalphones(struct phonestore[],int);
void searchphonebyname(struct phonestore[],int);
int main(){
	int size=5;
	struct phonestore s1[100]={
	
			           {101,"Samsung","A16","Black",8,256,5000, "50 MP",59999.0, 50, "New", 2024,"Android","1080x2340"},
                  {102,"Oppo","Reno", "Blue", 12,256,5000,"50 MP",89999.0, 35, "New", 2024, "Android","1080x2412"},
                  {103,"Vivo","V40", "Purple", 12,256,5500,"50 MP",129999.0, 20, "New", 2024, "Android", "1260x2800"},
                 {104,"Apple","16", "White",8,256, 3561,"48 MP",349999.0, 15, "New", 2024, "iOS 18", "1179x2556"},
                {105,"Infinix","Note", "Green",8, 256, 5000, "108 MP", 69999.0, 40, "New", 2024, "Android", "1080x2436"}
		
	};
	
	
	int choice;
	printf("---------WELCOME TO MY STORE---------\n");
	do{
	
	          printf("enter chouce\n");
	
           		printf("\n enter choice\n");
		printf(" 1: to show all phones\n");
		printf(" 2: to show price of all phones\n");
		printf(" 3: to show all phones quantity\n");
		printf(" 4: to search brand\n");
		printf(" 5: to search brand by id\n");
		printf(" 6: to show cheapest phone\n");
		printf(" 7: to show expensive phone\n");
		printf(" 8: to add new phone\n");
		printf(" 9: to delete phone permanently\n");
		printf(" 10: to save data to file\n");
		printf(" 11: to load data from file\n");
		printf(" 12: to sort phones by price\n");
		printf(" 13: to sort phones by name\n");
		printf(" 14: to exit\n");
		scanf("%d",&choice);

switch(choice){
	case 1:
		showphoneinfo(s1,size);
		break;
		
		case 2:
			showpriceofallphone(s1,size);
			break;
			case 3:
				totalphones(s1,size);
				break;
				case 4:
					searchphonebyname(s1,size);
					break;
					case 5:
						break;
						case 6:
							break;
							case 7:
								break;
	
	
	
	
	
	
	
	
	
}
}while(1);
	return 0;
}

void showphoneinfo(struct phonestore s1[],int x){
	
	printf("---------------------------------------------------------------------------------------------------------------------------\n");
	
printf("%-5s %-8s %-5s %-6s %-5s %-8s %-8s %-8s %-10s %-5s %-10s %-8s %-10s %-10s\n",
       "ID",
       "Brand",
       "Model",
       "Color",
       "RAM",
       "Storage",
       "Battery",
       "Camera",
       "Price",
       "Qty",
       "Condition",
       "Year",
       "OS",
       "Resolution");
		printf("---------------------------------------------------------------------------------------------------------------------------\n");
	for(int i=0;i<x;i++){
	printf("%-5d %-8s %-5s %-6s %-5d %-8d %-8d %-8s %-10.2f %-5d %-10s %-8d %-10s %-10s\n",
       s1[i].id,
       s1[i].brand,
       s1[i].model,
       s1[i].color,
       s1[i].ram,
       s1[i].storage,
       s1[i].battery,
       s1[i].camera,
       s1[i].price,
       s1[i].quantity,
       s1[i].condition,
       s1[i].lounchyear,
       s1[i].os,
       s1[i].resolution);	
	}
		printf("---------------------------------------------------------------------------------------------------------------------------\n");

}
void showpriceofallphone(struct phonestore s1[],int x){
	float sum=0;
	for(int i=0;i<x;i++){
		sum=sum+s1[i].price;
		
	}
		printf("%f\n",sum);
}
void totalphones(struct phonestore s1[],int x){
	
	int total=0;
	for(int i=0;i<=x;i++){
		total=total+s1[i].quantity;
	}
	printf("%d\n",total);
	
}
void searchphonebyname(struct phonestore s1[],int x){
	char search[20];
	int flag=0;
	printf("search for phone\n");
	fflush(stdin);
	scanf("%s",&search);
   //gets(search);
    //fgets(search, sizeof(search), stdin);
    	printf("---------------------------------------------------------------------------------------------------------------------------\n");
	
printf("%-5s %-8s %-5s %-6s %-5s %-8s %-8s %-8s %-10s %-5s %-10s %-8s %-10s %-10s\n",
       "ID",
       "Brand",
       "Model",
       "Color",
       "RAM",
       "Storage",
       "Battery",
       "Camera",
       "Price",
       "Qty",
       "Condition",
       "Year",
       "OS",
       "Resolution");
		printf("---------------------------------------------------------------------------------------------------------------------------\n");
  
	for(int i=0;i<x;i++){
	
	if(strcmp(s1[i].brand,search)==0){
		flag=1;
			
		printf("%-5d %-8s %-5s %-6s %-5d %-8d %-8d %-8s %-10.2f %-5d %-10s %-8d %-10s %-10s\n",
       s1[i].id,
       s1[i].brand,
       s1[i].model,
       s1[i].color,
       s1[i].ram,
       s1[i].storage,
       s1[i].battery,
       s1[i].camera,
       s1[i].price,
       s1[i].quantity,
       s1[i].condition,
       s1[i].lounchyear,
       s1[i].os,
       s1[i].resolution);	
       
	
	}
	

	}
		printf("---------------------------------------------------------------------------------------------------------------------------\n");
       if(flag==0){
       	printf("brand not found\n");
	   }
}
