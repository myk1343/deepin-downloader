//#include <iostream>
//#include "gtest/gtest.h"
//#include "log.h"

//class ut_Log : public ::testing::Test , public QObject
//{
//protected:
//    ut_Log()
//    {
//    }

//    virtual ~ut_Log()
//    {
//    }
//    virtual void SetUp()
//    {
//      m_logPath = QStandardPaths::writableLocation(QStandardPaths::ConfigLocation)+ "Log"+ QDateTime::currentDateTime().toString();
//      m_dir = QStandardPaths::writableLocation(QStandardPaths::ConfigLocation)+ "Log";
//    }

//    virtual void TearDown()
//    {
//     //   delete m_createTaskWidget;
//    }
//    QString m_logPath;
//    QString m_dir;
//};

//TEST_F(ut_Log, init)
//{
//    setLogPath(m_logPath);
//    setLogDir(m_dir);
//    bool ret = Log::ensureDirExist(m_dir)
//    EXPECT_TRUE(true);
////    qDebug()<<"33";
//}

///**
// *@brief 设置日志目录
// *@param dir 目录地址
// *@return
// */
//void setLogDir(const QString &dir);

///**
// *@brief 检查磁盘空间是否大于10MB
// *@param
// *@return
// */
//void CheckFreeDisk();

///**
// *@brief 检查日志时间是否大于7天
// *@param
// *@return
// */
//void CheckLogTime();

///**
// *@brief 创建新的日志
// *@param
// *@return
// */
//void CreateNewLog();

///**
// *@brief 检查磁盘大小
// *@param
// *@return
// */
//bool CheckRotateSize();

///**
// *@brief 设置日志路径
// *@param path 路径地址
// *@return
// */
//void setLogPath(const QString &path);

///**
// *@brief 设置日志级别
// *@param level QtDebugMsg;QtWarningMsg;QtCriticalMsg;QtFatalMsg;
// *@return
// */
//void setLogLevel(int level);

///**
// *@brief 用户日志信息
// *@param
// *@return
// */
//void customLogMessageHandler(QtMsgType type, const QMessageLogContext &ctx, const QString &msg);


