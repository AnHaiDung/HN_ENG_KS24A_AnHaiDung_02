#include <stdio.h>

int main(){
	int chose,num,array,sc=0,sl=0,max,max2,index=0,number,index2,find,snt=0;
	int arr[100];
	do{
		printf("MENU\n");
		printf("1. Nhap so phan tu va gia tri cho mang\n");
		printf("2. In ra gia tri cac phan tu trong mang theo dang arr[]\n");
		printf("3. Dem so luong cac phan tu chan le trong mang\n");
		printf("4. Tim gia tri lon thu hai trong mang\n");
		printf("5. Them mot phan tu vao dau mang,phan tu moi se do nguoi dung nhap\n");
		printf("6. Xoa phan tu tai mot vi tri cu the\n");
		printf("7. Sap xep mang theo thu tu giam dan(Insertion sort)\n");
		printf("8. Nhap vao mot phan tu xem cos ton tai trong mang khong(Binary search)\n");
		printf("9. In ra toan bo so nguyen to trong mang da duoc binh phuong\n");
		printf("10. Sap xep mang theo thu tu giam dan(Bubble sort)\n");
		printf("11. Thoat\n");
		scanf("%d",&chose);
		switch(chose){
			case 1:
				printf("nhap so luong phan tu trong mang : ");
				scanf("%d",&num);
				for(int i=0;i<num;i++){
					printf("arr[%d] :",i);
					scanf("%d",&arr[i]);
				}
				array++;
				break;
			case 2:
				if(array==0){
					printf("hay nhap gia tri cho mang\n");
				}else{
					for(int i=0;i<num;i++){
				        printf("arr[%d]= %d \n",i,arr[i]);
				    }
				}
				break;
			case 3:
				if(array==0){
					printf("hay nhap gia tri cho mang\n");
				}else{
					for(int i=0;i<num;i++){
						if(arr[i]%2==0){
							sc++;
						}else{
							sl++;
						}
					}
					printf("so luong so chan la: %d\n",sc);
					printf("so luong so le la: %d\n",sl);
				}
				break;
			case 4:
				if(array==0){
					printf("hay nhap gia tri cho mang\n");
				}else{
					for(int i=0;i<num;i++){
						if(arr[i]>max){
							max=arr[i];
						}
					}
					for(int i=0;i<num;i++){
						if(arr[i]>max2&&arr[i]!=max){
							max2=arr[i];
						}
					}
					printf("gia tri lon thu hai trong mang: %d\n",max2);
				}
				break;
			case 5:
				if(array==0){
					printf("hay nhap gia tri cho mang\n");
				}else{
					for(int i=num;i>index;i--){
						arr[i]=arr[i-1];
					}
					printf("nhap gia tri ban muon them\n");
					scanf("%d",&number);
					arr[index]=number;
				}
				break;
			case 6:
				if(array==0){
					printf("hay nhap gia tri cho mang\n");
				}else{
					printf("nhap vi tri ban muon xoa ");
					scanf("%d",&index2);
					for(int i=index2;i<num;i++){
						arr[i]=arr[i+1];
					}
				}
				break;
			case 7:
				if(array==0){
					printf("hay nhap gia tri cho mang\n");
				}else{
					for(int i=1;i<num;i++){
						int key=arr[i];
						int j=i-1;
						while(j>=0&&key>arr[j]){
							arr[j+1]=arr[j];
							j--;
						}
						arr[j+1]=key;
					}
				}
				break;
			case 8:
				if(array==0){
					printf("hay nhap gia tri cho mang\n");
				}else{
					printf("nhap so muon tim kiem trong mang : ");
					scanf("%d",&find);
					int start=0;
					int length=num;
					int end=num-1;
					int mid;
					int a=0;
					while(start<=end){
						mid=(start+end)/2;
						if(arr[mid]==find){
						    printf("phan tu %d o vi tri %d\n",find,mid);
						    a=1;
						    break;
					    }else if(arr[mid]>find){
					    	end=mid-1;
						}else{
							start=mid+1;
						}
					}
				}
				break;
			case 9:
				if(array==0){
					printf("hay nhap gia tri cho mang\n");
				}else{
					for(int i=0;i<num;i++){
						if(arr[i]==1){
							continue;
						}
						for(int j=2;j<arr[i];j++){
							if(arr[i]%j==0){
								snt++;
							}
						}
						if(snt==0){
							printf("binh phuong so nguyen to trong mang : %d\n",arr[i]*arr[i]);
						}
						snt=0;
					}
				}
				break;
			case 10:
				if(array==0){
					printf("hay nhap gia tri cho mang\n");
				}else{
					for(int i=0;i<num;i++){
						for(int j=0;j<num-i-1;j++){
							if(arr[j]<arr[j+1]){
								int temp =arr[j];
								arr[j]=arr[j+1];
								arr[j+1]=temp;
							}
						}
					}
				}
				break;
			case 11:
				printf("ket thuc chuong trinh");
				break;
			default:
				printf("khong thuoc menu\n");
		}
	}while(chose!=11);
	return 0;
}
