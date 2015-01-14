/* 
 * File:   main.cpp
 * Author: Vincent Espada
 *
 * Created on January 12, 2015, 6:27 PM
 */ 
#include <iostream>

using namespace std;

/*
 * 
 */
int main() {

    int number_of_pods, peas_per_pod, total_peas;
  
    cout<<"Press return after entering a number.\n";
    cout<<"Enter the number of pods:\n";
    cin>> number_of_pods;
    cout<<"Enter the number of peas in a pod:\n";
    cin>> peas_per_pod;
    total_peas = number_of_pods * peas_per_pod;
    cout<<"If you have ";
    cout<< number_of_pods;
    cout<< " pea pods\n";
    cout<< "and ";
    cout<< peas_per_pod;
    cout<< " peas in each pod,then you have\n";
    cout<< total_peas;
    cout<< " peas in all the pods.\n";
    return 0;
}
