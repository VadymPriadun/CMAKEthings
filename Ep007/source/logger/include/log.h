#ifndef LOG_H
#define LOG_H

enum LogType {
    MESSAGE,
    WARNING,
    FATAL_ERROR
};;

void log_data(const char* message, LogType lt);

#endif // LOG_H