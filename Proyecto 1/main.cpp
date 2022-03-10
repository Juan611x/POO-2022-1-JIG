#include<iostream>
#include"Administracion.h"


using namespace std;

int main(){
    Administracion Administracion;
    int opcion;
    int identificacionM = 1;
    int identificacionP = 1;
    int opc;
    int idP;
    int idM;
    do{
        cout<<"Mascotas:\n";
        cout<<"  1. Agregar\n  2. Eliminar\n  3. Listar\n  4. Editar";
        cout<<"Dueños:\n";
        cout<<"  5. Agregar\n  6. Eliminar\n  7. Listar\n  8. Editar";
        cout<<"9. Enlazar\n";
        cout<<"0. Salir\n";

        cin>>opcion;

        switch (opcion){
        case 1:
            Administracion.AgregarM(identificacionM);
            identificacionM ++;
            break;
        case 2:
            //int opc;
            cout<<"Digite un valor";
            cin>>opc;
            Administracion.EliminarM(opc);
            break;
        case 3:
            Administracion.ListarM(1);
            break;
        case 4:
            //int opc;
            cout<<"Digite un valor";
            cin>>opc;
            Administracion.EditarM(opc);
            break;
        case 5:
            Administracion.AgregarP(identificacionP);
            identificacionP ++;
            break;
        case 6:
            //int opc;
            cout<<"Digite un valor";
            cin>>opc;
            Administracion.EliminarP(opc);
            break;
        case 7:
            Administracion.ListarP(1);
            break;
        case 8:
            //int opc;
            cout<<"Digite un valor";
            cin>>opc;
            Administracion.EditarP(opc);
            break;
        case 9:
            
            Administracion.ListarP(0);
            cout<<"Digita en valor...";
            cin>>idP;
            Administracion.ListarM(0);
            cout<<"Digita en valor...";
            cin>>idM;
            Administracion.enlazarMascotaPropietarios(Administracion.getMascota(idM),Administracion.getPropietario(idP));
            break;
        case 0:
            
            break;
        default: 
            cout<<"digite una opcion valida";
            break;
        }
    }while (opcion != 0);
    return 0;
    
}