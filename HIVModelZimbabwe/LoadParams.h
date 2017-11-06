/////////////////////////////////////////////////////////////////
//    LoadParams.h                                             //
//    Created by Mikaela Smit on 29/10/2015.				   //
//    Copyright (c) 2015 Mikaela Smit. All rights reserved.    //
//    Loads arrays and parameters from txt file                //
/////////////////////////////////////////////////////////////////


#ifndef ____LoadParams__
#define ____LoadParams__


//// --- External Large Arrays --- ////
void loadBirthArray();								// functions to load arrays
void loadDeathArray_Women();
void loadDeathArray_Men();
void loadHIVArray_Women_National();
void loadHIVArray_Men_National();
void loadHIVArray_Women_Central();
void loadHIVArray_Men_Central();
void loadHIVArray_Women_Coast();
void loadHIVArray_Men_Coast();
void loadHIVArray_Women_Eastern();
void loadHIVArray_Men_Eastern();
void loadHIVArray_Women_Nairobi();
void loadHIVArray_Men_Nairobi();
void loadHIVArray_Women_NorthEastern();
void loadHIVArray_Men_NorthEastern();
void loadHIVArray_Women_Nyanza();
void loadHIVArray_Men_Nyanza();
void loadHIVArray_Women_RiftValley();
void loadHIVArray_Men_RiftValley();
void loadHIVArray_Women_Western();
void loadHIVArray_Men_Western();


void loadNCDArray();
void loadCancerArray();


//// --- Shorter Parameter Arrays from txt file --- ////

void loadCD4StartArray();
void loadCD4ProgArray();
void loadCD4DeathArray();
void loadCD4ARTArray();

void loadARTKidsArray();
void loadARTMenArray();
void loadARTWomenArray();
void loadARTMen_sumArray();
void loadARTWomen_sumArray();

void loadNrChildren();
void loadNrChildrenProb();
void loadAgeDistribution();
void loadAgeMin();
void loadAgeMax();

void loadNCDAgeArrayMin();
void loadNCDAgeArrayMax();

void loadCancerAgeArrayMin();
void loadCancerAgeArrayMax();




#endif /* defined(____LoadParams__) */
