#include<iostream>
#include"Mascota.cpp"
#include"Propietario.cpp"
#include"Administracion.cpp"

int main(){
    Administracion Administracion;
    int opcion;
    int identificacionM = 1;
    int identificacionP = 1;
    do{
        cout<<"Mascotas:\n";
        cout<<"1. Agregar\n2. Eliminar\n3. Listar\n4. Editar";
        cout<<"Dueños:\n";
        cout<<"5. Agregar\n6. Eliminar\n7. Listar\n8. Editar";
        cout<<"0. Salir\n";

        cin>>opcion;

        switch (opcion){
        case 1:
            Administracion.AgregarM(identificacionM);
            identificacionM ++;
            break;
        case 2:
            int opc;
            cout<<"Digite un valor";
            cin>>opc;
            Administracion.EliminarM(opc);
            break;
        case 3:
            Administracion.ListarM(Administracion);
            break;
        case 4:
            int opc;
            cout<<"Digite un valor";
            cin>>opc;
            Administracion.EditarM(opc);
            break;
        case 5:
            Administracion.AgregarP(identificacionP);
            identificacionP ++;
            break;
        case 6:
            int opc;
            cout<<"Digite un valor";
            cin>>opc;
            Administracion.EliminarP(opc);
            break;
        case 7:
            Administracion.ListarP(Administracion);
            break;
        case 8:
            int opc;
            cout<<"Digite un valor";
            cin>>opc;
            Administracion.EditarP(opc);
            break;
        case 0:
            /* code */
            break;
        default: 
            cout<<"digite una opcion valida";
            break;
        }
    }while (opcion != 0);
    
}