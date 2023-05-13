#include<stdio.h>
#include<string.h>
#include<stdlib.h>
struct cel
{
    char user[100],contact[100],dm[100];
};
void newuser(struct cel*ask);
void mensajes(struct cel p);
void menucel(struct cel p);
void modcel(struct cel *ask);
void sendmens(struct cel *ask);
void apps(void);
void contactos(void);
int op,flag=1;
int main(){
    struct cel p;
    menucel(p);
}
void contactos(void){
    printf("\nContactos registrados: \n1. Pedro\n2. Juan\n3. Osvaldo\n4. Luis\n5. Ricardo\n6. Jose");
}
void newuser(struct cel *ask){
    printf("Ingresa tu usuario: \n");
    fgets(ask->user,100,stdin);
}
void menucel(struct cel p){
    newuser(&p);
    do
    {
        op=0;
        printf("\nBienvenido a Nexus Tech %s\n Acciones: 1. Mensajes\t 2. Aplicaiones instaladas\t 3. Directorio\t 4. Salir: ",p.user);
    scanf("%d",&op);
    switch (op)
    {
    case 1:
        mensajes(p);
        break;
    case 2:
        apps();
        break;
    case 3:
        contactos();
        break;
    case 4:
        exit (0);
        break;
    default:
        break;
    }
    } while (flag);
}
void mensajes(struct cel p){
    do
    {
        op=0;
        printf("1. Enviar mensajes\n2. Ultimo mensaje enviado \n3. Contactos\n4. Salir");
        scanf("%d",&op);
        switch (op)
        {
        case 1:
            sendmens(&p);
            break;
        case 2:
            printf("\nUltimo mensaje enviado: %s",p.dm);
            break;
        case 3:
            contactos();
            break;
        case 4:
            exit (0);
            break;
        default:
            printf("\nIngresa una opcion valida");
            break;
        }
    } while (flag);
}
void sendmens(struct cel *ask){
    contactos();
    printf("\nA quien deseas enviar el mensaje?\n");
    fgets(ask->contact,100,stdin);
    printf("\nMensaje: \n%s, ",ask->contact);
    fgets(ask->dm,100,stdin);
}
void apps(void){
    printf("\nAplicaciones instaladas: Whatsapp\n Youtube\n Twitter\n Classroom\n Facebook\n Netflix\n Tiktok\n Google Chrome\n Spotify");
}