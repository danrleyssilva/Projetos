#include <Arduino.h>
#define dtime1 500
#define dtime2 500
#include<Keyboard.h>

void setup() { 
  pinMode(A3, OUTPUT); //led 1 verde
  pinMode(A2, OUTPUT); //led 2 amarelo
  pinMode(2, OUTPUT); //led 3 vermelho 
  pinMode(A4,INPUT_PULLUP); //botao  verde 1. Operadora Vivo
  pinMode(A5,INPUT_PULLUP); //botao  vermelho 2. Operadora Arqia
  pinMode(1,INPUT_PULLUP); //botao  amarelo 3. Operadora Claro
}


void loop() {




 // Setup de configuracao das APNs
 //CONFIGURANDO BOTAO 1 
if(digitalRead(A4)==LOW){  
digitalWrite(A2, HIGH); 

 Keyboard.begin();
    
    //SAINDO DA TELA INICIAL
    Keyboard.press(KEY_RIGHT_ARROW);
    Keyboard.release(KEY_RIGHT_ARROW);
    delay(dtime2);

    Keyboard.press(KEY_RIGHT_ARROW);
    Keyboard.release(KEY_RIGHT_ARROW);
    delay(dtime2);


    Keyboard.press(KEY_RETURN);
    Keyboard.release(KEY_RETURN);
    delay(dtime2);
    
    // INDO PARA CONFIGURACOES
    Keyboard.press(KEY_RIGHT_ARROW);
    Keyboard.release(KEY_RIGHT_ARROW);
    delay(dtime1);

    Keyboard.press(KEY_RIGHT_ARROW);
    Keyboard.release(KEY_RIGHT_ARROW);
    delay(dtime2);
    

    Keyboard.press(KEY_RETURN);
    Keyboard.release(KEY_RETURN);
    delay(dtime1);

    //INDO PARA CONFIGURACOES DE REDE
    Keyboard.press(KEY_DOWN_ARROW);
    Keyboard.release(KEY_DOWN_ARROW);
    delay(dtime2);
    
    Keyboard.press(KEY_DOWN_ARROW);
    Keyboard.release(KEY_DOWN_ARROW);
    delay(dtime2);
     
    Keyboard.press(KEY_RETURN);
    Keyboard.release(KEY_RETURN);
    delay(dtime2);

    //ENTRANDO EM REDES MOVEIS
    Keyboard.press(KEY_DOWN_ARROW);
    Keyboard.release(KEY_DOWN_ARROW);
    delay(dtime1);

    Keyboard.press(KEY_RETURN);
    Keyboard.release(KEY_RETURN);
    delay(dtime2);

    //ENTRADO EM CONF AVANCADA 
    Keyboard.press(KEY_DOWN_ARROW);
    Keyboard.release(KEY_DOWN_ARROW);
    delay(dtime1);

    Keyboard.press(KEY_DOWN_ARROW);
    Keyboard.release(KEY_DOWN_ARROW);
    delay(dtime2);

    Keyboard.press(KEY_DOWN_ARROW);
    Keyboard.release(KEY_DOWN_ARROW);
    delay(dtime2);

        
    Keyboard.press(KEY_RETURN);
    Keyboard.release(KEY_RETURN);
    delay(dtime2);

    Keyboard.press(KEY_DOWN_ARROW);
    Keyboard.release(KEY_DOWN_ARROW);
    delay(dtime1);

    Keyboard.press(KEY_DOWN_ARROW);
    Keyboard.release(KEY_DOWN_ARROW);
    delay(dtime2);

    Keyboard.press(KEY_DOWN_ARROW);
    Keyboard.release(KEY_DOWN_ARROW);
    delay(dtime2);

    Keyboard.press(KEY_DOWN_ARROW);
    Keyboard.release(KEY_DOWN_ARROW);
    delay(dtime2);

    //ENTRANDO NA CONFIGURACAO DE APN
    Keyboard.press(KEY_RETURN);
    Keyboard.release(KEY_RETURN);
    delay(dtime1);

    //EDITANDO CONFIGURACOES DE APN
    Keyboard.press(KEY_RETURN);
    Keyboard.release(KEY_RETURN);
    delay(dtime2);
    
    Keyboard.press(KEY_DOWN_ARROW);
    Keyboard.release(KEY_DOWN_ARROW);
    delay(dtime2);
    //1
    Keyboard.press(KEY_UP_ARROW);
    Keyboard.release(KEY_UP_ARROW);
    delay(dtime2);
    //2
    Keyboard.press(KEY_UP_ARROW);
    Keyboard.release(KEY_UP_ARROW);
    delay(dtime2);
    //3 
    Keyboard.press(KEY_UP_ARROW);
    Keyboard.release(KEY_UP_ARROW);
    delay(dtime2);
    //4
    Keyboard.press(KEY_UP_ARROW);
    Keyboard.release(KEY_UP_ARROW);
    delay(dtime2);
    //5
    Keyboard.press(KEY_UP_ARROW);
    Keyboard.release(KEY_UP_ARROW);
    delay(dtime2);
    //6
    Keyboard.press(KEY_UP_ARROW);
    Keyboard.release(KEY_UP_ARROW);
    delay(dtime2);
    //7
    Keyboard.press(KEY_UP_ARROW);
    Keyboard.release(KEY_UP_ARROW);
    delay(dtime2);

    Keyboard.press(KEY_RETURN);
    Keyboard.release(KEY_RETURN);
    delay(dtime2);

    //DIGITANDO APN
    Keyboard.press(KEY_BACKSPACE);
    delay(1500);
    Keyboard.release(KEY_BACKSPACE);
    delay(dtime2);

    Keyboard.println("giotto.m2m.vivo.com.br");

    //CONFIRMACAO 
    Keyboard.press(KEY_TAB);
    Keyboard.release(KEY_TAB);
    delay(dtime2);
    
    Keyboard.press(KEY_TAB);
    Keyboard.release(KEY_TAB);
    delay(dtime2);

    Keyboard.press(KEY_RETURN);
    Keyboard.release(KEY_RETURN);
    delay(dtime2);
    
    //SALVANDO E CONFIRMANDO CONFIGURACOES

    Keyboard.press(KEY_LEFT_GUI);
    Keyboard.press(KEY_TAB);
    Keyboard.release(KEY_LEFT_GUI);
    Keyboard.release(KEY_TAB);
    delay(dtime2);


    Keyboard.press(KEY_RIGHT_ARROW);
    Keyboard.release(KEY_RIGHT_ARROW);
    delay(dtime2);
    
    Keyboard.press(KEY_RIGHT_ARROW);
    Keyboard.release(KEY_RIGHT_ARROW);
    delay(dtime2);
    
    
    Keyboard.press(KEY_RETURN);
    Keyboard.release(KEY_RETURN);
    delay(dtime2);
    
    Keyboard.press(KEY_RETURN);
    Keyboard.release(KEY_RETURN);
    delay(dtime2);
    
    Keyboard.press(KEY_TAB);
    Keyboard.release(KEY_TAB);
    delay(dtime2);
    
    Keyboard.press(KEY_TAB);
    Keyboard.release(KEY_TAB);
    delay(dtime2);

    Keyboard.press(KEY_RETURN);
    Keyboard.release(KEY_RETURN);
    delay(dtime2);
       
   
    Keyboard.end();
    delay(500);
    digitalWrite(A2, LOW);

}
   
 //CONFIGURANDO BOTAO 2
if(digitalRead(A5)==LOW){  
digitalWrite(A3, HIGH);   

 Keyboard.begin();
    
    //SAINDO DA TELA INICIAL
    Keyboard.press(KEY_RIGHT_ARROW);
    Keyboard.release(KEY_RIGHT_ARROW);
    delay(dtime2);

    Keyboard.press(KEY_RIGHT_ARROW);
    Keyboard.release(KEY_RIGHT_ARROW);
    delay(dtime2);


    Keyboard.press(KEY_RETURN);
    Keyboard.release(KEY_RETURN);
    delay(dtime2);
    
    // INDO PARA CONFIGURACOES
    Keyboard.press(KEY_RIGHT_ARROW);
    Keyboard.release(KEY_RIGHT_ARROW);
    delay(dtime2);

    Keyboard.press(KEY_RIGHT_ARROW);
    Keyboard.release(KEY_RIGHT_ARROW);
    delay(dtime2);

    Keyboard.press(KEY_RETURN);
    Keyboard.release(KEY_RETURN);
    delay(dtime2);

    //INDO PARA CONFIGURACOES DE REDE
    Keyboard.press(KEY_DOWN_ARROW);
    Keyboard.release(KEY_DOWN_ARROW);
    delay(dtime2);
    
    Keyboard.press(KEY_DOWN_ARROW);
    Keyboard.release(KEY_DOWN_ARROW);
    delay(dtime2);
     
    Keyboard.press(KEY_RETURN);
    Keyboard.release(KEY_RETURN);
    delay(dtime2);

    //ENTRANDO EM REDES MOVEIS
    Keyboard.press(KEY_DOWN_ARROW);
    Keyboard.release(KEY_DOWN_ARROW);
    delay(dtime2);

    Keyboard.press(KEY_RETURN);
    Keyboard.release(KEY_RETURN);
    delay(dtime2);

    //ENTRADO EM CONF AVANCADA 
    Keyboard.press(KEY_DOWN_ARROW);
    Keyboard.release(KEY_DOWN_ARROW);
    delay(dtime2);

    Keyboard.press(KEY_DOWN_ARROW);
    Keyboard.release(KEY_DOWN_ARROW);
    delay(dtime2);

    Keyboard.press(KEY_DOWN_ARROW);
    Keyboard.release(KEY_DOWN_ARROW);
    delay(dtime2);

        
    Keyboard.press(KEY_RETURN);
    Keyboard.release(KEY_RETURN);
    delay(dtime2);

    Keyboard.press(KEY_DOWN_ARROW);
    Keyboard.release(KEY_DOWN_ARROW);
    delay(dtime2);

    Keyboard.press(KEY_DOWN_ARROW);
    Keyboard.release(KEY_DOWN_ARROW);
    delay(dtime2);

    Keyboard.press(KEY_DOWN_ARROW);
    Keyboard.release(KEY_DOWN_ARROW);
    delay(dtime2);

    Keyboard.press(KEY_DOWN_ARROW);
    Keyboard.release(KEY_DOWN_ARROW);
    delay(dtime2);

    //ENTRANDO NA CONFIGURACAO DE APN
    Keyboard.press(KEY_RETURN);
    Keyboard.release(KEY_RETURN);
    delay(dtime2);



    //Criando apn Arqia(essa configuracao e usada somente para operadora arquia)
    Keyboard.press(KEY_LEFT_GUI);
    Keyboard.press(KEY_TAB);
    Keyboard.release(KEY_LEFT_GUI);
    Keyboard.release(KEY_TAB);
    delay(dtime2);


    Keyboard.press(KEY_RIGHT_ARROW);
    Keyboard.release(KEY_RIGHT_ARROW);
    delay(dtime2);

    Keyboard.press(KEY_RETURN);
    Keyboard.release(KEY_RETURN);
    delay(dtime2);
   
    Keyboard.press(KEY_DOWN_ARROW);
    Keyboard.release(KEY_DOWN_ARROW);
    delay(dtime2);
    
    //8 comandos seguidos de seta para cima
    Keyboard.press(KEY_UP_ARROW);
    Keyboard.release(KEY_UP_ARROW);
    delay(dtime2);

    Keyboard.press(KEY_UP_ARROW);
    Keyboard.release(KEY_UP_ARROW);
    delay(dtime2);

    Keyboard.press(KEY_UP_ARROW);
    Keyboard.release(KEY_UP_ARROW);
    delay(dtime2);

    Keyboard.press(KEY_UP_ARROW);
    Keyboard.release(KEY_UP_ARROW);
    delay(dtime2);

    Keyboard.press(KEY_UP_ARROW);
    Keyboard.release(KEY_UP_ARROW);
    delay(dtime2);

    Keyboard.press(KEY_UP_ARROW);
    Keyboard.release(KEY_UP_ARROW);
    delay(dtime2);

    Keyboard.press(KEY_UP_ARROW);
    Keyboard.release(KEY_UP_ARROW);
    delay(dtime2);

    Keyboard.press(KEY_UP_ARROW);
    Keyboard.release(KEY_UP_ARROW);
    delay(dtime2);

    Keyboard.press(KEY_RETURN);
    Keyboard.release(KEY_RETURN);
    delay(dtime2);

    //escrevendo o nome da apn

    Keyboard.println("Arqia");

    Keyboard.press(KEY_TAB);
    Keyboard.release(KEY_TAB);
    delay(dtime2);

    Keyboard.press(KEY_TAB);
    Keyboard.release(KEY_TAB);
    delay(dtime2);
    
    Keyboard.press(KEY_RETURN);
    Keyboard.release(KEY_RETURN);
    delay(dtime2);

    //escrevendo a apn e salvando tudo
    Keyboard.press(KEY_DOWN_ARROW);
    Keyboard.release(KEY_DOWN_ARROW);
    delay(dtime2);
  
    Keyboard.press(KEY_RETURN);
    Keyboard.release(KEY_RETURN);
    delay(dtime2);


    Keyboard.println("giottorp.br");

    Keyboard.press(KEY_TAB);
    Keyboard.release(KEY_TAB);
    delay(dtime2);

    Keyboard.press(KEY_TAB);
    Keyboard.release(KEY_TAB);
    delay(dtime2);
    
    Keyboard.press(KEY_RETURN);
    Keyboard.release(KEY_RETURN);
    delay(dtime2);

    //Salvando todas as configuracaoes

    Keyboard.press(KEY_LEFT_GUI);
    Keyboard.press(KEY_TAB);
    Keyboard.release(KEY_LEFT_GUI);
    Keyboard.release(KEY_TAB);
    delay(dtime2);

    Keyboard.press(KEY_RIGHT_ARROW);
    Keyboard.release(KEY_RIGHT_ARROW);
    delay(dtime2);
    
    Keyboard.press(KEY_RIGHT_ARROW);
    Keyboard.release(KEY_RIGHT_ARROW);
    delay(dtime2);

    Keyboard.press(KEY_RETURN);
    Keyboard.release(KEY_RETURN);
    delay(dtime2);
   
    Keyboard.press(KEY_RETURN);
    Keyboard.release(KEY_RETURN);
    delay(dtime2);


   Keyboard.end();
   delay(500);
   digitalWrite(A3, LOW);
   }




//CONFIGURANDO BOTAO 1
if(digitalRead(1)==LOW){  
digitalWrite(2, HIGH);   

    Keyboard.begin();
    
    //SAINDO DA TELA INICIAL
    Keyboard.press(KEY_RIGHT_ARROW);
    Keyboard.release(KEY_RIGHT_ARROW);
    delay(dtime2);

    Keyboard.press(KEY_RIGHT_ARROW);
    Keyboard.release(KEY_RIGHT_ARROW);
    delay(dtime2);


    Keyboard.press(KEY_RETURN);
    Keyboard.release(KEY_RETURN);
    delay(dtime2);
    
    // INDO PARA CONFIGURACOES
    Keyboard.press(KEY_RIGHT_ARROW);
    Keyboard.release(KEY_RIGHT_ARROW);
    delay(dtime2);

    Keyboard.press(KEY_RIGHT_ARROW);
    Keyboard.release(KEY_RIGHT_ARROW);
    delay(dtime2);

    Keyboard.press(KEY_RETURN);
    Keyboard.release(KEY_RETURN);
    delay(dtime2);

    //INDO PARA CONFIGURACOES DE REDE
    Keyboard.press(KEY_DOWN_ARROW);
    Keyboard.release(KEY_DOWN_ARROW);
    delay(dtime2);
    
    Keyboard.press(KEY_DOWN_ARROW);
    Keyboard.release(KEY_DOWN_ARROW);
    delay(dtime2);
     
    Keyboard.press(KEY_RETURN);
    Keyboard.release(KEY_RETURN);
    delay(dtime2);

    //ENTRANDO EM REDES MOVEIS
    Keyboard.press(KEY_DOWN_ARROW);
    Keyboard.release(KEY_DOWN_ARROW);
    delay(dtime2);

    Keyboard.press(KEY_RETURN);
    Keyboard.release(KEY_RETURN);
    delay(dtime2);

    //ENTRADO EM CONF AVANCADA 
    Keyboard.press(KEY_DOWN_ARROW);
    Keyboard.release(KEY_DOWN_ARROW);
    delay(dtime2);

    Keyboard.press(KEY_DOWN_ARROW);
    Keyboard.release(KEY_DOWN_ARROW);
    delay(dtime2);

    Keyboard.press(KEY_DOWN_ARROW);
    Keyboard.release(KEY_DOWN_ARROW);
    delay(dtime2);

        
    Keyboard.press(KEY_RETURN);
    Keyboard.release(KEY_RETURN);
    delay(dtime2);

    Keyboard.press(KEY_DOWN_ARROW);
    Keyboard.release(KEY_DOWN_ARROW);
    delay(dtime2);

    Keyboard.press(KEY_DOWN_ARROW);
    Keyboard.release(KEY_DOWN_ARROW);
    delay(dtime2);

    Keyboard.press(KEY_DOWN_ARROW);
    Keyboard.release(KEY_DOWN_ARROW);
    delay(dtime2);

    Keyboard.press(KEY_DOWN_ARROW);
    Keyboard.release(KEY_DOWN_ARROW);
    delay(dtime2);

    //ENTRANDO NA CONFIGURACAO DE APN
    Keyboard.press(KEY_RETURN);
    Keyboard.release(KEY_RETURN);
    delay(dtime2);

    //EDITANDO CONFIGURACOES DE APN
    Keyboard.press(KEY_RETURN);
    Keyboard.release(KEY_RETURN);
    delay(dtime2);
    
    Keyboard.press(KEY_DOWN_ARROW);
    Keyboard.release(KEY_DOWN_ARROW);
    delay(dtime2);
    //1
    Keyboard.press(KEY_UP_ARROW);
    Keyboard.release(KEY_UP_ARROW);
    delay(dtime2);
    //2
    Keyboard.press(KEY_UP_ARROW);
    Keyboard.release(KEY_UP_ARROW);
    delay(dtime2);
    //3 
    Keyboard.press(KEY_UP_ARROW);
    Keyboard.release(KEY_UP_ARROW);
    delay(dtime2);
    //4
    Keyboard.press(KEY_UP_ARROW);
    Keyboard.release(KEY_UP_ARROW);
    delay(dtime2);
    //5
    Keyboard.press(KEY_UP_ARROW);
    Keyboard.release(KEY_UP_ARROW);
    delay(dtime2);
    //6
    Keyboard.press(KEY_UP_ARROW);
    Keyboard.release(KEY_UP_ARROW);
    delay(dtime2);
    //7
    Keyboard.press(KEY_UP_ARROW);
    Keyboard.release(KEY_UP_ARROW);
    delay(dtime2);

    Keyboard.press(KEY_RETURN);
    Keyboard.release(KEY_RETURN);
    delay(dtime2);

    //DIGITANDO APN
    Keyboard.press(KEY_BACKSPACE);
    delay(1500);
    Keyboard.release(KEY_BACKSPACE);
    delay(dtime2);

    Keyboard.println("giotto.claro.com.br");

    //CONFIRMACAO 
    Keyboard.press(KEY_TAB);
    Keyboard.release(KEY_TAB);
    delay(dtime2);
    
    Keyboard.press(KEY_TAB);
    Keyboard.release(KEY_TAB);
    delay(dtime2);

    Keyboard.press(KEY_RETURN);
    Keyboard.release(KEY_RETURN);
    delay(dtime2);

   
    //SALVANDO E CONFIRMANDO CONFIGURACOES

    Keyboard.press(KEY_LEFT_GUI);
    Keyboard.press(KEY_TAB);
    Keyboard.release(KEY_LEFT_GUI);
    Keyboard.release(KEY_TAB);
    delay(dtime2);


    Keyboard.press(KEY_RIGHT_ARROW);
    Keyboard.release(KEY_RIGHT_ARROW);
    delay(dtime2);
    
    Keyboard.press(KEY_RIGHT_ARROW);
    Keyboard.release(KEY_RIGHT_ARROW);
    delay(dtime2);
    
    
    Keyboard.press(KEY_RETURN);
    Keyboard.release(KEY_RETURN);
    delay(dtime2);
    
    Keyboard.press(KEY_RETURN);
    Keyboard.release(KEY_RETURN);
    delay(dtime2);
    
    Keyboard.press(KEY_TAB);
    Keyboard.release(KEY_TAB);
    delay(dtime2);
    
    Keyboard.press(KEY_TAB);
    Keyboard.release(KEY_TAB);
    delay(dtime2);

    Keyboard.press(KEY_RETURN);
    Keyboard.release(KEY_RETURN);
    delay(dtime2);

    Keyboard.end();
    delay(500);
    digitalWrite(2, LOW);
}
}