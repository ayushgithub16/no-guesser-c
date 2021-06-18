#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void instruction();
void easy(int n,int i);

int main(){
	int n,i=5,c=0;
	srand(time(0));
	printf("**********Game developed by = Ayush Adhikari***************\n");
	printf("\n");
	printf("***there are your choices for guesses***\n");
	printf("1      ===     From 1 to 50\n");
	printf("2      ===     From 50 to 100\n");
	printf("3      ===     From 101 to 150\n");
	printf("4      ===     From 151 to 200\n");
	printf("\n");
	printf("Enter your choice(1/2/3/4)");
	scanf("%d",&c);
	if(c==1){
		instruction();
		n=rand()%50+1;
		easy(i,n);
	}
	else if(c==2){
		instruction();
		n=rand()%50+50;
		easy(i,n);	
	}
	else if(c==3){
		instruction();
		n=rand()%50+101;
		easy(i,n);
	}
	else{
		instruction();
		n=rand()%50+151;
		easy(i,n);
	}
	printf("Thank you for chossing us.\n");
	printf("*******Developer=Ayush(Paltu's motu)******************\n");
	return 0;
}

void instruction(){
	printf("************instructions:-**********\n");
		printf("you are very near!! just add little=add maximum 5\n");
		printf("you are very near!! just subtract little=subtract maximum 5\n");
		printf("some less than the answer=add maximum 10,minimum 5\n");
		printf("some more than the answer=subtract maximum 10,subtract 5\n");
		printf("you are too far!! Add=Add definitely more than 10\n");
		printf("you are too far!! subtract=subtract definitely more than 10\n");
		printf("\n");
}
void easy(int i,int n){
	for(i;i>=1;i--){
			int ans=0;
			printf("number of guesses left %d\n",i+1);
			printf("enter your guess(1-50)\n");
			scanf("%d",&ans);
			if(ans>(n-5) && ans<n){
				printf("you are very near!! just add little\n");
			}
			else if(ans>(n-10) && ans<(n-5)){
				printf(" some less than the answer\n");
			}
			else if(ans<(n+5) && ans>n){
				printf("you are very near!! just subtract little\n");
			}
			else if(ans<(n+10) && ans>(n+5)){
				printf(" some more than the answer");
			}
			else if(ans<(n-10)){
				printf("you are too far!! add\n");
			}
			else if(ans>(n+10)){
				printf("you are too far!! Subtract\n");
			}
			else if(ans==n){
				printf("congratulation!! Yes, the number was %d \n",n);
				printf("you guessed it in %d times\n",i);
				break;
			}
			if(i=0){
				printf("number of guesses finished!! You are a looser\n");
				break;
			}
		}

}
