//////////////////////////////////////////////////////////
//                                                      //
//                  CountryParams.cpp                   //
//            Created by Pablo on 20/10/2017.           //
//  Copyright © 2017 Mikaela Smit. All rights reserved. //
//                                                      //
//////////////////////////////////////////////////////////


#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <vector>
#include "errorcoutmacro.h"
#include "CountryParams.hpp"
#include "LoadParams.h"

using namespace std;


extern int UN_Pop;
extern int init_pop;
extern int total_population;
extern int ART_start_yr;
extern int factor;
extern int ageAdult;
extern double Sex_ratio;
//extern double Region_ratio1;
//extern double Region_ratio2;
//extern double Region_ratio3;
//extern double Region_ratio4;
//extern double Region_ratio5;
//extern double Region_ratio6;
//extern double Region_ratio7;
extern double ARTbuffer;
extern double MortAdj;
extern double background_d;
extern double HIV_d;
extern double IHD_d;
extern double Depression_d;
extern double Asthma_d;
extern double Stroke_d;
extern double Diabetes_d;
extern double CKD_d;
extern double Colo_d;
extern double Liver_d;
extern double Oeso_d;
extern double Prostate_d;
extern double OtherCan_d;
extern string ParamDirectory;

/////////////////// FUNCTION: IF LOOP FOR COUNTRY-SPECIFIC PARAMETERS //////////////////////
void loadCountryParams(int x){
    if (x == 1){                                        // KENYA
        cout << "You have selected Kenya" << endl;
        UN_Pop=5909800;
        init_pop=UN_Pop/factor;
        total_population=init_pop;
        ART_start_yr=2004;
        ageAdult=15;
        Sex_ratio=0.495639296;
//        Region_ratio1=0.1;
//        Region_ratio2=0.2;
//        Region_ratio3=0.3;
//        Region_ratio4=0.4;
//        Region_ratio5=0.5;
//        Region_ratio6=0.6;
//        Region_ratio7=0.7;
        ARTbuffer=1.01;
        MortAdj=1;
        // Mortality percentages from GBD 2016
        background_d =71.32;
        HIV_d        =15.56;
        IHD_d         =3.99;
        Depression_d =0.0;
        Asthma_d     =0.45;
        Stroke_d     =3.92;
        Diabetes_d   =1.27;
        CKD_d        =1.5;
        Colo_d       =0.39;
        Liver_d      =0.34;
        Oeso_d       =0.32;
        Prostate_d    =0.31;
        OtherCan_d   =0.71;
    }
    
 else if (x == 2){                                          // ZIMBABWE
     cout << "You have selected Zimbabwe" << endl;
     UN_Pop=2565000;
     init_pop=UN_Pop/factor;
     total_population=init_pop;
     ART_start_yr=2004;
     ageAdult=15;
     Sex_ratio=0.4986;
     ARTbuffer=1;
     MortAdj=1;
     // Mortality percentages from GBD 2013
     background_d =56.6;
     HIV_d        =29.6;
     IHD_d         =1.00;
     Depression_d =0.0;
     Asthma_d     =0.7;
     Stroke_d     =4.6;
     Diabetes_d   =1.7;
     CKD_d        =1.3;
     Colo_d       =0.3;
     Liver_d      =0.3;
     Oeso_d       =0.6;
     Prostate_d    =0.2;
     OtherCan_d   =3.1;
     }

    
}

void loadRegionParams(int x){
    if (x==1){                                       // Region 1
        cout << "You have selected National" << endl;
        loadHIVArray_Women_National();
        loadHIVArray_Men_National();
        UN_Pop=5909800;
        init_pop=UN_Pop/factor;
        total_population=init_pop;}
    else if (x==2){                                  // Region 2
        cout << "You have selected Central" << endl;
        loadHIVArray_Women_Central();
        loadHIVArray_Men_Central();
        UN_Pop=5909800;
        init_pop=UN_Pop/factor;
        total_population=init_pop;}
    else if (x==3){                                  // Region 3
        cout << "You have selected Coast" << endl;
        loadHIVArray_Women_Coast();
        loadHIVArray_Men_Coast();
        UN_Pop=5909800;
        init_pop=UN_Pop/factor;
        total_population=init_pop;}
    else if (x ==4){                                 // Region 4
        cout << "You have selected Eastern" << endl;
        loadHIVArray_Women_Eastern();
        loadHIVArray_Men_Eastern();
        UN_Pop=5909800;
        init_pop=UN_Pop/factor;
        total_population=init_pop;}
    else if (x==5){                                  // Region 5
        cout << "You have selected Nairobi" << endl;
        loadHIVArray_Women_Nairobi();
        loadHIVArray_Men_Nairobi();
        UN_Pop=5909800;
        init_pop=UN_Pop/factor;
        total_population=init_pop;}
    else if (x==6){                                  // Region 6
        cout << "You have selected North Eastern" << endl;
        loadHIVArray_Women_NorthEastern();
        loadHIVArray_Men_NorthEastern();
        UN_Pop=5909800;
        init_pop=UN_Pop/factor;
        total_population=init_pop;}
    else if (x==7){                                  // Region 7
        cout << "You have selected Nyanza" << endl;
        loadHIVArray_Women_Nyanza();
        loadHIVArray_Men_Nyanza();
        UN_Pop=5909800;
        init_pop=UN_Pop/factor;
        total_population=init_pop;}
    else if (x==8){                                  // Region 8
        cout << "You have selected Rift Valley" << endl;
        loadHIVArray_Women_RiftValley();
        loadHIVArray_Men_RiftValley();
        UN_Pop=5909800;
        init_pop=UN_Pop/factor;
        total_population=init_pop;}
    else if (x==9){                                  // Region 9
        cout << "You have selected Western" << endl;
        loadHIVArray_Women_Western();
        loadHIVArray_Men_Western();
        UN_Pop=5909800;
        init_pop=UN_Pop/factor;
        total_population=init_pop;}
}


void getParamsString(int x){
    if (x == 1){
        ParamDirectory="/Users/rcassidy/Documents/Model_Africa/HIVModelZimbabwe/";
    }
    
    else if (x == 2){
        ParamDirectory="/Users/rcassidy/Documents/Model_Africa/HIVModelZimbabwe/";
    }
}
