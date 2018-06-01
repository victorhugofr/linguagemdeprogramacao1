## Implemente em C++ um programa que simule a uma corrida de sapos. 
Implemente uma classe chamada Sapo contendo atributos: nome, identificador, distância percorrida, quantidade de pulos dados, quantidade de provas disputadas, vitórias, empates, quantidade total de pulos dados.  

Atributo estático público: distância total da corrida 

Métodos públicos: 

◦ Construtor(es).

◦ getters e setters, quando necessários.
                  
◦ pular:
                  
   ▪ incrementa distância percorrida de forma randômica entre 1 e o máximo que o sapo pode saltar
                      
   ▪ Incrementa o número de pulos dados em uma unidade 
                      
  Sinta-se a vontade para adiçionaro de algum outro método ou atributos 
                      
  ### Especificação do Projeto O código desenvolvido deve seguir as especificações abaixo: 
   
1. programa deverá ler um arquivo que conterá as informações dos sapos disponíveis para a corrida. 
2. programa deverá ler um arquivo que conterá as informações sobre as pistas disponíveis para a corrida.
3. Ao iniciar o programa, o usuário poderá: 
     a)Ver estatísticas dos sapos.
     b)Ver estatísticas das pistas. 
     c)Iniciar uma corrida. 
     d)Criar sapos.
     e)Criar uma pista. 
4. Para iniciar uma corrida:
   a) O usuário deverá escolher uma pista de corrida que os sapos irão disputar.
               
   b) É mostrado ao usuário a lista dos sapos que iram participar da corrida com seus nomes e números.
               
   c)O usuário dará o start (pei) da corrida.
               
5. Durante a corrida:
   a)Cada sapo irá pular individualmente, mostrando ao usuário seu nome, numeração e quanto ele pulou, em cada pulo.
   
   b)A medida que um sapo chegar na linha de chegada, ele não deverá mais pular nem emitir mais mensagens na tela.
   
   c)Quando o ultimo sapo terminar a corrida, o programa mostrará o Rank da corrida.
