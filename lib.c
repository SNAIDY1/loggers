#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include "lib.h"


#define TIME_COLOR "\e[38;2;231;167;15m"
#define INFO_COLOR "\e[1;38;2;54;178;242m"
#define WARN_COLOR "\e[1;38;2;255;205;0m"
#define DEBUG_COLOR "\e[1;38;2;0;220;180m"
#define SUCCESS_COLOR "\e[1;38;2;0;255;0m"
#define ERROR_COLOR "\e[1;38;2;255;0;0m"
#define COLOR_RESET "\e[0m"




time_t t;
struct tm *currentTime;
char *fileLocation = "logging.log";
FILE* file;



void CleanLog(void)
{

	file = fopen(fileLocation,"w");
	if (file == NULL) perror("Cannot Open The File.");
	fclose(file);
}

void LogError(const char* msg) {

	t = time(NULL);
	currentTime = localtime(&t);
	

	file = fopen(fileLocation,"a");

	if (file == NULL) perror("Cannot Open The File.");

	fprintf(file,"[%04d:%02d:%02d-%02d:%02d:%02d] [ERROR] → %s\n",	
			currentTime->tm_year+1900,
			currentTime->tm_mon+1
			,currentTime->tm_mday,
			currentTime->tm_hour,
			currentTime->tm_min,
			currentTime->tm_sec,
			msg);
	printf("[%s%04d:%02d:%02d-%02d:%02d:%02d%s] [%sERROR%s] → %s\n",
			TIME_COLOR,
			currentTime->tm_year+1900,
			currentTime->tm_mon+1
			,currentTime->tm_mday,
			currentTime->tm_hour,
			currentTime->tm_min,
			currentTime->tm_sec,
			COLOR_RESET,ERROR_COLOR,COLOR_RESET,msg);
}

void LogInfo(const char* msg) {

	t = time(NULL);
	currentTime = localtime(&t);


	file = fopen(fileLocation,"a");

	if (file == NULL) perror("Cannot Open The File.");

	fprintf(file,"[%04d:%02d:%02d-%02d:%02d:%02d] [INFO] → %s\n",	
			currentTime->tm_year+1900,
			currentTime->tm_mon+1
			,currentTime->tm_mday,
			currentTime->tm_hour,
			currentTime->tm_min,
			currentTime->tm_sec,
			msg);

	printf("[%s%04d:%02d:%02d-%02d:%02d:%02d%s] [%sINFO%s] → %s\n",
			TIME_COLOR,
			currentTime->tm_year+1900,
			currentTime->tm_mon+1
			,currentTime->tm_mday,
			currentTime->tm_hour,
			currentTime->tm_min,
			currentTime->tm_sec,
			COLOR_RESET,INFO_COLOR,COLOR_RESET,msg);
}
void LogDebug(const char* msg) {

	t = time(NULL);
	currentTime = localtime(&t);


	file = fopen(fileLocation,"a");

	if (file == NULL) perror("Cannot Open The File.");

	fprintf(file,"[%04d:%02d:%02d-%02d:%02d:%02d] [DEBUG] → %s\n",	
			currentTime->tm_year+1900,
			currentTime->tm_mon+1
			,currentTime->tm_mday,
			currentTime->tm_hour,
			currentTime->tm_min,
			currentTime->tm_sec,
			msg);

	printf("[%s%04d:%02d:%02d-%02d:%02d:%02d%s] [%sDEBUG%s] → %s\n",
			TIME_COLOR,
			currentTime->tm_year+1900,
			currentTime->tm_mon+1
			,currentTime->tm_mday,
			currentTime->tm_hour,
			currentTime->tm_min,
			currentTime->tm_sec,
			COLOR_RESET,DEBUG_COLOR,COLOR_RESET,msg);
}
void LogWarn(const char* msg) {

	t = time(NULL);
	currentTime = localtime(&t);


	file = fopen(fileLocation,"a");

	if (file == NULL) perror("Cannot Open The File.");

	fprintf(file,"[%04d:%02d:%02d-%02d:%02d:%02d] [WARN] → %s\n",	
			currentTime->tm_year+1900,
			currentTime->tm_mon+1
			,currentTime->tm_mday,
			currentTime->tm_hour,
			currentTime->tm_min,
			currentTime->tm_sec,
			msg);

	printf("[%s%04d:%02d:%02d-%02d:%02d:%02d%s] [%sWARN%s] → %s\n",
			TIME_COLOR,
			currentTime->tm_year+1900,
			currentTime->tm_mon+1
			,currentTime->tm_mday,
			currentTime->tm_hour,
			currentTime->tm_min,
			currentTime->tm_sec,
			COLOR_RESET,WARN_COLOR,COLOR_RESET,msg);
}
void LogSuccess(const char* msg) {


	t = time(NULL);
	currentTime = localtime(&t);


	file = fopen(fileLocation,"a");

	if (file == NULL) perror("Cannot Open The File.");

	fprintf(file,"[%04d:%02d:%02d-%02d:%02d:%02d] [SUCCESS] → %s\n",	
			currentTime->tm_year+1900,
			currentTime->tm_mon+1
			,currentTime->tm_mday,
			currentTime->tm_hour,
			currentTime->tm_min,
			currentTime->tm_sec,
			msg);


	printf("[%s%04d:%02d:%02d-%02d:%02d:%02d%s] [%sSUCCESS%s] → %s\n",
			TIME_COLOR,
			currentTime->tm_year+1900,
			currentTime->tm_mon+1
			,currentTime->tm_mday,
			currentTime->tm_hour,
			currentTime->tm_min,
			currentTime->tm_sec,
			COLOR_RESET,SUCCESS_COLOR,COLOR_RESET,msg);
}




void MsgError(const char* msg) {
	t = time(NULL);
	currentTime = localtime(&t);
	printf("[%s%04d:%02d:%02d-%02d:%02d:%02d%s] [%sERROR%s] → %s\n",
			TIME_COLOR,
			currentTime->tm_year+1900,
			currentTime->tm_mon+1
			,currentTime->tm_mday,
			currentTime->tm_hour,
			currentTime->tm_min,
			currentTime->tm_sec,
			COLOR_RESET,ERROR_COLOR,COLOR_RESET,msg);
}
void MsgInfo(const char* msg) {
	t = time(NULL);
	currentTime = localtime(&t);
	printf("[%s%04d:%02d:%02d-%02d:%02d:%02d%s] [%sINFO%s] → %s\n",
			TIME_COLOR,
			currentTime->tm_year+1900,
			currentTime->tm_mon+1
			,currentTime->tm_mday,
			currentTime->tm_hour,
			currentTime->tm_min,
			currentTime->tm_sec,
			COLOR_RESET,INFO_COLOR,COLOR_RESET,msg);
}
void MsgDebug(const char* msg) {
	t = time(NULL);
	currentTime = localtime(&t);
	printf("[%s%04d:%02d:%02d-%02d:%02d:%02d%s] [%sDEBUG%s] → %s\n",
			TIME_COLOR,
			currentTime->tm_year+1900,
			currentTime->tm_mon+1
			,currentTime->tm_mday,
			currentTime->tm_hour,
			currentTime->tm_min,
			currentTime->tm_sec,
			COLOR_RESET,DEBUG_COLOR,COLOR_RESET,msg);
}
void MsgWarn(const char* msg) {
	t = time(NULL);
	currentTime = localtime(&t);
	printf("[%s%04d:%02d:%02d-%02d:%02d:%02d%s] [%sWARN%s] → %s\n",
			TIME_COLOR,
			currentTime->tm_year+1900,
			currentTime->tm_mon+1
			,currentTime->tm_mday,
			currentTime->tm_hour,
			currentTime->tm_min,
			currentTime->tm_sec,
			COLOR_RESET,WARN_COLOR,COLOR_RESET,msg);
}
void MsgSuccess(const char* msg) {
	t = time(NULL);
	currentTime = localtime(&t);
	printf("[%s%04d:%02d:%02d-%02d:%02d:%02d%s] [%sSUCCESS%s] → %s\n",
			TIME_COLOR,
			currentTime->tm_year+1900,
			currentTime->tm_mon+1
			,currentTime->tm_mday,
			currentTime->tm_hour,
			currentTime->tm_min,
			currentTime->tm_sec,
			COLOR_RESET,SUCCESS_COLOR,COLOR_RESET,msg);
}


/*
 *
 * Copyright (c) 2025 Moayyad Mohammed Al-Ruzqawi
 * 
*/
