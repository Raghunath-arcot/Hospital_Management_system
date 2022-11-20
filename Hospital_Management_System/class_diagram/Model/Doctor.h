/**
 * Project Untitled
 */


#ifndef _DOCTOR_H
#define _DOCTOR_H

#include "HospitalStaff.h"


class Doctor: public HospitalStaff {
private: 
    string fieldOfSpecialization;
    bool appointmentStatus;
    
void Getinfo();
    
void GetAppointment();
};

#endif //_DOCTOR_H