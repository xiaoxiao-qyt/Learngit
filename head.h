#ifndef HEAD_H
#define HEAD_H
#include <QString>
enum MACHINECONTENT{
    MACHINE_NUM = 0,        //�豸��--���
    MACHINE_STATUS,         //�豸״̬
    PRINT_JOB,              //��ӡjob
    PRINT_PROGRESS,         //��ӡ������
    PRINT_REMAIN_TIME,      //��ӡʣ��ʱ��
    PRINT_FINISHED_TIME,    //��ӡ���ʱ��
    IP_ADDRESS,              //IP��ַ
    CONNECT_STATUS,         //����״̬
    SEND_PROGRESS,           //�����ļ�����
    PRIORITY                //���ȼ�
};

enum FILE_TYPE {
    INI_FILE,
    PKG_FILE,
    JOB_FILE,
    EXE_FILE,
    REST_FILE
};

//enum S2C_CMD        //�ն˷����ͻ��ˣ���λ��)����
//{
//    ReadLog = 1, //��־
//    ReadParam = 2,//����
//    ReadEncryptSerial = 3,
//    PrintingAbort = 4,
//    ReadModelParam,         //��ȡģ�Ͳ���
//    ReadDentalParam,        //��ȡ���ڲ���
//    ReadGuidePlateParam,    //��ȡ�������
//    ReadOrthodonticPara     //��ȡ��������
//};

//enum {  //���ȼ�
//    PRIORITY_WARN = 0,              //����״̬
//    PRIORITY_FINISHED = 1,          //��ӡ����
//    PRIORITY_PRINTING = 2,          //��ӡ��
//    PRIORITY_WAIT_PRINT = 3,        //����ӡ
//    PRIORITY_WAIT_READY = 4,        //��׼��
//    PRIORITY_DISCONNECT = 5,        //�Ͽ�
//    PRIORITY_PAUSE = 6              //��ͣ
//};

//typedef struct {
//    QString machineNum;
//    QString machineStatus;
//    QString machineIp;
//    QString connectStatus;
//    QString printJob;
//    QString finishedTime;   //���ʱ��

//    QString layer;          //  1/200
//    QString thickness;      //���
//    QString progressValue;  //����ֵ
//    QString remainTime;     //ʣ��ʱ��

//    QString projectorUseTime;  //���ʹ��ʱ��
//    QString machineUseTime;     //�豸��ʹ��ʱ��,�ӷ�������
//}DetailedMsg;               //��ϸ����

#endif // HEAD_H
