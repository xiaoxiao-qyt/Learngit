#ifndef HEAD_H
#define HEAD_H
#include <QString>
enum MACHINECONTENT{
    MACHINE_NUM = 0,        //设备名--简称
    MACHINE_STATUS,         //设备状态
    PRINT_JOB,              //打印job
    PRINT_PROGRESS,         //打印进度条
    PRINT_REMAIN_TIME,      //打印剩余时间
    PRINT_FINISHED_TIME,    //打印完成时间
    IP_ADDRESS,              //IP地址
    CONNECT_STATUS,         //连接状态
    SEND_PROGRESS,           //发送文件进度
    PRIORITY                //优先级
};

enum FILE_TYPE {
    INI_FILE,
    PKG_FILE,
    JOB_FILE,
    EXE_FILE,
    REST_FILE
};

//enum S2C_CMD        //终端发到客户端（下位机)命令
//{
//    ReadLog = 1, //日志
//    ReadParam = 2,//参数
//    ReadEncryptSerial = 3,
//    PrintingAbort = 4,
//    ReadModelParam,         //读取模型参数
//    ReadDentalParam,        //读取牙冠参数
//    ReadGuidePlateParam,    //读取导板参数
//    ReadOrthodonticPara     //读取正畸参数
//};

//enum {  //优先级
//    PRIORITY_WARN = 0,              //警告状态
//    PRIORITY_FINISHED = 1,          //打印结束
//    PRIORITY_PRINTING = 2,          //打印中
//    PRIORITY_WAIT_PRINT = 3,        //待打印
//    PRIORITY_WAIT_READY = 4,        //待准备
//    PRIORITY_DISCONNECT = 5,        //断开
//    PRIORITY_PAUSE = 6              //暂停
//};

//typedef struct {
//    QString machineNum;
//    QString machineStatus;
//    QString machineIp;
//    QString connectStatus;
//    QString printJob;
//    QString finishedTime;   //完成时间

//    QString layer;          //  1/200
//    QString thickness;      //层厚
//    QString progressValue;  //进度值
//    QString remainTime;     //剩余时间

//    QString projectorUseTime;  //光机使用时间
//    QString machineUseTime;     //设备已使用时间,从发机算起
//}DetailedMsg;               //详细数据

#endif // HEAD_H
