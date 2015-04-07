#include "headers/CParameter.h"

CParameter::CParameter(
        const unsigned char opCodePage0,
        const unsigned char opCodePage1,
        const unsigned char opCode0,
        const unsigned char opCode1,
        const IRange * range)
: m_range(range) 
{
    m_opCodePage[0] = opCodePage0;
    m_opCodePage[1] = opCodePage1;
    m_opCode[0]     = opCode0;
    m_opCode[1]     = opCode1;
}
CParameter::CParameter(const CParameter & other) {
    if (this != &other) {
        m_opCodePage[0] = other.m_opCodePage[0];
        m_opCodePage[1] = other.m_opCodePage[1];
        m_opCode[0]     = other.m_opCode[0];
        m_opCode[1]     = other.m_opCode[1];
        m_range = other.m_range->clone();
    }
}
CParameter::~CParameter() {
    delete m_range;
}

//const char * m_name;
//const unsigned char m_opCodePage[2];
//const unsigned char m_opCode[2];
//IRange * m_range;
