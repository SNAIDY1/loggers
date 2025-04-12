#ifndef LIB_H
#define LIB_H

#include <stdio.h>
#include <time.h>

extern time_t t;
extern struct tm *currentTime;
extern char *fileLocation;
extern FILE *file;
extern int nchar;
extern char c;
extern char *token;
extern char LOG_FILENAME[256];
extern char LOG_PATH[256];
extern char *readContent;
extern FILE *confFile;


// NOTE: if you want to use this function, call it before any Log.
// should have the config reader and executer 
void ConfigLog(void);

// Clear log File
void CleanLog(void);

void LogError(const char* msg);
void LogInfo(const char* msg);
void LogDebug(const char* msg);
void LogWarn(const char* msg);
void LogSuccess(const char* msg);

void MsgError(const char* msg);
void MsgInfo(const char* msg);
void MsgDebug(const char* msg);
void MsgWarn(const char* msg);
void MsgSuccess(const char* msg);

#endif
