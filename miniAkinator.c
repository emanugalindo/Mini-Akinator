#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"Portuguese");
	char resposta;
	printf("Pense um dos animais abaixo e responda:\n -Leão\n -Cavalo\n -Homem\n -Macaco\n -Morcego\n -Baleia\n -Avetruz\n -Pinguim\n -Pato\n -Águia\n -Tartaruga\n -Cobra\n -Crocodilo");
	printf("\nEle é um Mamífero (S|N)?: ");
	scanf("%c",&resposta);
	fflush(stdin);
	if(toupper(resposta) == 'S' ){
			printf("\nEle é Quadrúpede (S|N)?: ");
			scanf("%c",&resposta);
			fflush(stdin);
			if(toupper(resposta) == 'S'){
				printf("\nEle é Carnívoro (S|N)?: ");
				scanf("%c",&resposta);
				fflush(stdin);
				if(toupper(resposta) == 'S'){
					printf("\nÉ o Leão!");
				}else{
					printf("\nÉ o Cavalo!");
				}
			}else{
					printf("\nEle é Bípede (S|N)?: ");
					scanf("%c",&resposta);
					fflush(stdin);
					if(toupper(resposta) == 'S'){
						printf("\nEle é Onívoro (S|N)?: ");
						scanf("%c",&resposta);
						fflush(stdin);
						if(toupper(resposta) == 'S'){
							printf("\nÉ o Ser Humano!");
						}else{
							printf("\nÉ o Macaco!");
						}
					}else{
							printf("\nEle é Voador (S|N)?: ");
							scanf("%c",&resposta);
							fflush(stdin);
							if(toupper(resposta) == 'S'){
								printf("\nÉ o Morcego!");
						}else{
							printf("\nÉ a Baleia!");
						}
					}
				}	
			}else{
				printf("\nEle é uma Ave (S|N)?: ");
				scanf("%c",&resposta);
				fflush(stdin);
				if(toupper(resposta) == 'S'){
					printf("\nEla é Não-Voadora (S|N)?: ");
					scanf("%c",&resposta);
					fflush(stdin);
					if(toupper(resposta) == 'S'){
						printf("\nEla é Tropical (S|N)?: ");
						scanf("%c",&resposta);
						fflush(stdin);
						if(toupper(resposta) == 'S'){
							printf("\nÉ o Avestruz!");
						}else{
							printf("\nÉ o Pinguim!");
						}
					}else{
						printf("\nEla é Nadadora (S|N)?: ");
						scanf("%c",&resposta);
						fflush(stdin);
						if(toupper(resposta) == 'S'){
							printf("\nÉ o Pato!");
						}else{
							printf("\nÉ a Águia!");
						}
					}
				}else{
					printf("\nEle é um Réptil (S|N)?: ");
					scanf("%c",&resposta);
					fflush(stdin);
					if(toupper(resposta) == 'S'){
						printf("\nEle possui Casco (S|N)?: ");
						scanf("%c",&resposta);
						fflush(stdin);
						if(toupper(resposta) == 'S'){
							printf("\nÉ a Tartaruga!");
						}else{
							printf("\nEle não possui Patas (S|N)?: ");
							scanf("%c",&resposta);
							fflush(stdin);
							if(toupper(resposta) == 'S'){
								printf("\nÉ a Cobra!");
							}else{
								printf("\nÉ o Crocodilo!");
							}
						}
					}else{
						printf("\nO animal que você pensou não está na lista!");
					}
				}
			}
	return 0;
}
