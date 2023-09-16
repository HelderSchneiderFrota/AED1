//necessário fazer ajustes
float pagamentoCartao (float quantidade, valor, soma){

int codigo, quantidade; 
int i=0; 
float soma; 
float valor; 
 


	do{
	printf("\n\nDigite o codigo do produto: ");
	scanf("%d",&codigo);
	printf("Digite a quantidade comprada: ");
	scanf("%d",&quantidade);



	switch(codigo){
			case 1:
				if(quantidade>5){
				valor=quantidade*4.50*0.05;
				soma=soma+valor;
				printf("\nBarrinha de cereal\tqnt:%d\tvalor:R$%.2f\n\n",quantidade,valor);
				}else{
				valor=quantidade*4.50;
				soma=soma+valor;
				printf("\nBarrinha de Cereal\tqnt:%d\tvalor:R$%.2f\n\n",quantidade,valor);
				}
				break;

			case 2:
				if(quantidade>2){
				valor=quantidade*75.00*0.05;
				soma=soma+valor;
				printf("\nCreatina\tqnt:%d\tvalor:R$%.2f\n\n",quantidade,valor);

				}else{
				valor=quantidade*75.00;
				soma=soma+valor;
				printf("\nCreatina\tqnt:%d\tvalor:R$%.2f\n\n",quantidade,valor);

				}
				break;

			case 3:
				if(quantidade>1){
				valor=quantidade*99.00*0.05;
				soma=soma+valor;
				printf("\nWhey Protein\tqnt:%d\tvalor:R$%.2f\n\n",quantidade,valor);
				}else{
				valor=quantidade*99.00;
				soma=soma+valor;
				printf("\nWhey Protein\tqnt:%d\tvalor:R$%.2f\n\n",quantidade,valor);
				}
				break;

			case 4:
				if(quantidade>2){
				valor=quantidade*59.00*0.05;
				soma=soma+valor;
				printf("\nBeta Alanina\tqnt:%d\tvalor:R$%.2f\n\n",quantidade,valor);
				}else{
				valor=quantidade*59.00;
				soma=soma+valor;
				printf("\nBeta Alanina\tqnt:%d\tvalor:R$%.2f\n\n",quantidade,valor);
				}
				break;

			case 5:
				if(quantidade>1){
				valor=quantidade*89.00*0.05;
				soma=soma+valor;
				printf("\nPre treino\tqnt:%d\tvalor:R$%.2f\n\n",quantidade,valor);
				}else{
				valor=quantidade*89.00;
				soma=soma+valor;
				printf("\nPre treino\tqnt:%d\tvalor:R$%.2f\n\n",quantidade,valor);
				}
				break;

			case 6:
				if(quantidade>2){
				valor=quantidade*40.00*0.05;
				soma=soma+valor;
				printf("\nCafeina\tqnt:%d\tvalor:R$%.2f\n\n",quantidade,valor);
				}else{
				valor=quantidade*40.00;
				soma=soma+valor;
				printf("\nCafeina\tqnt:%d\tvalor:R$%.2f\n\n",quantidade,valor);
				}
				break;

			case 7:
				if(quantidade>3){
				valor=quantidade*32.89*0.05;
				soma=soma+valor;
				printf("\nGlutamina\tqnt:%d\tvalor:R$%.2f\n\n",quantidade,valor);
				}else{
				valor=quantidade*32.89;
				soma=soma+valor;
				printf("\nGlutamina\tqnt:%d\tvalor:R$%.2f\n\n",quantidade,valor);
				}
				break;
			case 8:
				if(quantidade>4){
				valor=quantidade*21.00*0.05;
				soma=soma+valor;
				printf("\nMaca Peruana\tqnt:%d\tvalor:R$%.2f\n\n",quantidade,valor);
				}else{
				valor=quantidade*21.00;
				soma=soma+valor;
				printf("\nMaca Peruana\tqnt:%d\tvalor:R$%.2f\n\n",quantidade,valor);
				}
				break;
			case 9:
				if(quantidade>4){
				valor=quantidade*12.50*0.05;
				soma=soma+valor;
				printf("\nBCAA\tqnt:%d\tvalor:R$%.2f\n\n",quantidade,valor);
				}else{
				valor=quantidade*12.50;
				soma=soma+valor;
				printf("\nBCAA\tqnt:%d\tvalor:R$%.2f\n\n",quantidade,valor);
				}
				break;
			case 10:
				if(quantidade>3){
				valor=quantidade*20.30*0.05;
				soma=soma+valor;
				printf("\nOmega 3\tqnt:%d\tvalor:R$%.2f\n\n",quantidade,valor);
				}else{
				valor=quantidade*20.30;
				soma=soma+valor;
				printf("\nOmega 3\tqnt:%d\tvalor:R$%.2f\n\n",quantidade,valor);
				}
				break;

		}

		
	printf("Digite -1 para encerrar a operacao: ");
	scanf("%d",&i);
	
	}while(i!=-1);
	printf("\nValor a ser pago R$%.2f",soma);
}


double pagamentoPIX (double quantidade, valor, soma){

int codigo,quantidade; 
int i=0; 
float soma; 
float valor; 

	do{
	printf("\n\nDigite o codigo do produto: ");
	scanf("%d",&codigo);
	printf("Digite a quantidade comprada: ");
	scanf("%d",&quantidade);



	switch(codigo){
			case 1:
				if(quantidade>5){
				valor=quantidade*4.50*0.05;
				soma=soma+valor;
				printf("\nBarrinha de cereal\tqnt:%d\tvalor:R$%.2f\n\n",quantidade,valor);
				}else{
				valor=quantidade*4.50;
				soma=soma+valor;
				printf("\nBarrinha de Cereal\tqnt:%d\tvalor:R$%.2f\n\n",quantidade,valor);
				}
				break;

			case 2:
				if(quantidade>2){
				valor=quantidade*75.00*0.05;
				soma=soma+valor;
				printf("\nCreatina\tqnt:%d\tvalor:R$%.2f\n\n",quantidade,valor);

				}else{
				valor=quantidade*75.00;
				soma=soma+valor;
				printf("\nCreatina\tqnt:%d\tvalor:R$%.2f\n\n",quantidade,valor);

				}
				break;

			case 3:
				if(quantidade>1){
				valor=quantidade*99.00*0.05;
				soma=soma+valor;
				printf("\nWhey Protein\tqnt:%d\tvalor:R$%.2f\n\n",quantidade,valor);
				}else{
				valor=quantidade*99.00;
				soma=soma+valor;
				printf("\nWhey Protein\tqnt:%d\tvalor:R$%.2f\n\n",quantidade,valor);
				}
				break;

			case 4:
				if(quantidade>2){
				valor=quantidade*59.00*0.05;
				soma=soma+valor;
				printf("\nBeta Alanina\tqnt:%d\tvalor:R$%.2f\n\n",quantidade,valor);
				}else{
				valor=quantidade*59.00;
				soma=soma+valor;
				printf("\nBeta Alanina\tqnt:%d\tvalor:R$%.2f\n\n",quantidade,valor);
				}
				break;

			case 5:
				if(quantidade>1){
				valor=quantidade*89.00*0.05;
				soma=soma+valor;
				printf("\nPre treino\tqnt:%d\tvalor:R$%.2f\n\n",quantidade,valor);
				}else{
				valor=quantidade*89.00;
				soma=soma+valor;
				printf("\nPre treino\tqnt:%d\tvalor:R$%.2f\n\n",quantidade,valor);
				}
				break;

			case 6:
				if(quantidade>2){
				valor=quantidade*40.00*0.05;
				soma=soma+valor;
				printf("\nCafeina\tqnt:%d\tvalor:R$%.2f\n\n",quantidade,valor);
				}else{
				valor=quantidade*40.00;
				soma=soma+valor;
				printf("\nCafeina\tqnt:%d\tvalor:R$%.2f\n\n",quantidade,valor);
				}
				break;

			case 7:
				if(quantidade>3){
				valor=quantidade*32.89*0.05;
				soma=soma+valor;
				printf("\nGlutamina\tqnt:%d\tvalor:R$%.2f\n\n",quantidade,valor);
				}else{
				valor=quantidade*32.89;
				soma=soma+valor;
				printf("\nGlutamina\tqnt:%d\tvalor:R$%.2f\n\n",quantidade,valor);
				}
				break;
			case 8:
				if(quantidade>4){
				valor=quantidade*21.00*0.05;
				soma=soma+valor;
				printf("\nMaca Peruana\tqnt:%d\tvalor:R$%.2f\n\n",quantidade,valor);
				}else{
				valor=quantidade*21.00;
				soma=soma+valor;
				printf("\nMaca Peruana\tqnt:%d\tvalor:R$%.2f\n\n",quantidade,valor);
				}
				break;
			case 9:
				if(quantidade>4){
				valor=quantidade*12.50*0.05;
				soma=soma+valor;
				printf("\nBCAA\tqnt:%d\tvalor:R$%.2f\n\n",quantidade,valor);
				}else{
				valor=quantidade*12.50;
				soma=soma+valor;
				printf("\nBCAA\tqnt:%d\tvalor:R$%.2f\n\n",quantidade,valor);
				}
				break;
			case 10:
				if(quantidade>3){
				valor=quantidade*20.30*0.05;
				soma=soma+valor;
				printf("\nOmega 3\tqnt:%d\tvalor:R$%.2f\n\n",quantidade,valor);
				}else{
				valor=quantidade*20.30;
				soma=soma+valor;
				printf("\nOmega 3\tqnt:%d\tvalor:R$%.2f\n\n",quantidade,valor);
				}
				break;

		}

		
	printf("Digite -1 para encerrar a operacao: ");
	scanf("%d",&i);
	
	}while(i!=-1);
	printf("\nValor a ser pago R$%.2f",soma*0.05);
}

double pagamentoDinheiro (double quantidade, valor, soma){

int codigo,quantidade; 
int i=0; 
float soma; 
float valor; 

	do{
	printf("\n\nDigite o codigo do produto: ");
	scanf("%d",&codigo);
	printf("Digite a quantidade comprada: ");
	scanf("%d",&quantidade);



	switch(codigo){
			case 1:
				if(quantidade>5){
				valor=quantidade*4.50*0.05;
				soma=soma+valor;
				printf("\nBarrinha de cereal\tqnt:%d\tvalor:R$%.2f\n\n",quantidade,valor);
				}else{
				valor=quantidade*4.50;
				soma=soma+valor;
				printf("\nBarrinha de Cereal\tqnt:%d\tvalor:R$%.2f\n\n",quantidade,valor);
				}
				break;

			case 2:
				if(quantidade>2){
				valor=quantidade*75.00*0.05;
				soma=soma+valor;
				printf("\nCreatina\tqnt:%d\tvalor:R$%.2f\n\n",quantidade,valor);

				}else{
				valor=quantidade*75.00;
				soma=soma+valor;
				printf("\nCreatina\tqnt:%d\tvalor:R$%.2f\n\n",quantidade,valor);

				}
				break;

			case 3:
				if(quantidade>1){
				valor=quantidade*99.00*0.05;
				soma=soma+valor;
				printf("\nWhey Protein\tqnt:%d\tvalor:R$%.2f\n\n",quantidade,valor);
				}else{
				valor=quantidade*99.00;
				soma=soma+valor;
				printf("\nWhey Protein\tqnt:%d\tvalor:R$%.2f\n\n",quantidade,valor);
				}
				break;

			case 4:
				if(quantidade>2){
				valor=quantidade*59.00*0.05;
				soma=soma+valor;
				printf("\nBeta Alanina\tqnt:%d\tvalor:R$%.2f\n\n",quantidade,valor);
				}else{
				valor=quantidade*59.00;
				soma=soma+valor;
				printf("\nBeta Alanina\tqnt:%d\tvalor:R$%.2f\n\n",quantidade,valor);
				}
				break;

			case 5:
				if(quantidade>1){
				valor=quantidade*89.00*0.05;
				soma=soma+valor;
				printf("\nPre treino\tqnt:%d\tvalor:R$%.2f\n\n",quantidade,valor);
				}else{
				valor=quantidade*89.00;
				soma=soma+valor;
				printf("\nPre treino\tqnt:%d\tvalor:R$%.2f\n\n",quantidade,valor);
				}
				break;

			case 6:
				if(quantidade>2){
				valor=quantidade*40.00*0.05;
				soma=soma+valor;
				printf("\nCafeina\tqnt:%d\tvalor:R$%.2f\n\n",quantidade,valor);
				}else{
				valor=quantidade*40.00;
				soma=soma+valor;
				printf("\nCafeina\tqnt:%d\tvalor:R$%.2f\n\n",quantidade,valor);
				}
				break;

			case 7:
				if(quantidade>3){
				valor=quantidade*32.89*0.05;
				soma=soma+valor;
				printf("\nGlutamina\tqnt:%d\tvalor:R$%.2f\n\n",quantidade,valor);
				}else{
				valor=quantidade*32.89;
				soma=soma+valor;
				printf("\nGlutamina\tqnt:%d\tvalor:R$%.2f\n\n",quantidade,valor);
				}
				break;
			case 8:
				if(quantidade>4){
				valor=quantidade*21.00*0.05;
				soma=soma+valor;
				printf("\nMaca Peruana\tqnt:%d\tvalor:R$%.2f\n\n",quantidade,valor);
				}else{
				valor=quantidade*21.00;
				soma=soma+valor;
				printf("\nMaca Peruana\tqnt:%d\tvalor:R$%.2f\n\n",quantidade,valor);
				}
				break;
			case 9:
				if(quantidade>4){
				valor=quantidade*12.50*0.05;
				soma=soma+valor;
				printf("\nBCAA\tqnt:%d\tvalor:R$%.2f\n\n",quantidade,valor);
				}else{
				valor=quantidade*12.50;
				soma=soma+valor;
				printf("\nBCAA\tqnt:%d\tvalor:R$%.2f\n\n",quantidade,valor);
				}
				break;
			case 10:
				if(quantidade>3){
				valor=quantidade*20.30*0.05;
				soma=soma+valor;
				printf("\nOmega 3\tqnt:%d\tvalor:R$%.2f\n\n",quantidade,valor);
				}else{
				valor=quantidade*20.30;
				soma=soma+valor;
				printf("\nOmega 3\tqnt:%d\tvalor:R$%.2f\n\n",quantidade,valor);
				}
				break;

		}

		
	printf("Digite -1 para encerrar a operacao: ");
	scanf("%d",&i);
	
	}while(i!=-1);
	printf("\nValor a ser pago R$%.2f",soma*0.02);
}
