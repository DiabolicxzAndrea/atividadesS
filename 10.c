int main() {
float base_maior, base_menor, altura, area; 
printf("Digite o comprimento da base maior do trap�zio");
scanf("%f", &base_maior);
printf("Digite o comprimento da base menor do trap�zio: "); 
scanf("%f", &base_menor);
printf("Digite a altura do trap�zio: ");
scanf("%f", &altura);
float area = (base_maior + base_menor) * altura / 2.0;
 printf("A area do trap�zio �: %f", area);
}
