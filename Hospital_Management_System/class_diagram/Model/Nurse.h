/**
 * Project Untitled
 */


#ifndef _NURSE_H
#define _NURSE_H

#include "HospitalStaff.h"


class Nurse: public HospitalStaff {
public: 
    
void Getinfo();
    
/**
 * @param Doctor
 */
void AssignToDoctor(void Doctor);
private: 
    Doctor headDoctor;
};

#endif //_NURSE_H