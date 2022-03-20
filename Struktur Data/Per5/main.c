#include "header.h"

int main (){
    list L;
    createlist(&L);
    addfirstB("1", "Dummy_1", &L);
    addfirstK("LF4", "B", L.first);
    addafterK(L.first->col, "LF5", "C+");
    addlastK("LF6", "A-", L.first);
    addafterB(L.first, "2", "Dummy_2");
    addfirstK("LF7", "B", L.first->next);
    addlastK("LF8", "A", L.first->next);
    addlastB("3", "Dummy_3", &L);
    addfirstK("LF8", "C", L.first->next->next);
    dellastK(L.first->next);
    //printelement(L);
    //delfirstB(&L);
    // delafterB(L.first);
    // dellastB(&L);
    
    printelement(L);
    return 0;
}