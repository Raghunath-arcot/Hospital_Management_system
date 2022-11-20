/**
 * Project Untitled
 */


#ifndef _RECORD_H
#define _RECORD_H

class Record {
public: 
    
void GetPatientInfo();
    
void ChangeDiagnosis();
    
/**
 * @param Doctor
 */
void AssignFamilyDoctor(void Doctor);
    
void Operation1();
private: 
    int recordId;
    string diagnosis;
    int age;
    Doctor familyDoctor;
};

#endif //_RECORD_H