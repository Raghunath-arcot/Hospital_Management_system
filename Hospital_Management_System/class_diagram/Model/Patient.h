/**
 * Project Untitled
 */


#ifndef _PATIENT_H
#define _PATIENT_H

class Patient {
public: 
    
string GetFullName();
private: 
    int patientId;
    string firstName;
    string lastName;
    string phoneNumber;
    string address;
};

#endif //_PATIENT_H