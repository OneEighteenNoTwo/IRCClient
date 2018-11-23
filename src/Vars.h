#ifndef _VARS_H_
#define _VARS_H_

#include <string>
#include <map>
#include <ctime>
#include <vector>
#include "Functions/SmsMessage.h"
#include <memory>

namespace Global
{
    extern std::map<std::string, std::vector<std::shared_ptr<SmsMessage>>> SmsList;
	extern std::map<std::string, std::string> setinfos;
    extern std::map<std::string, std::string> describes;
    extern std::vector<std::string> descTargets;
    extern std::string descFile;
    extern std::string setinfoFile;
    extern std::string smsFile;
    extern std::map<std::string, std::time_t> readers;
    extern std::map<std::string, std::time_t> sleepers;
    extern std::map<std::string, std::time_t> bikers;
    extern std::map<std::string, std::time_t> gamers;
    
    extern std::map<std::string, std::time_t> smokers;
    extern std::map<std::string, std::time_t> chefs;
    extern std::map<std::string, std::time_t> drinkers;
    extern std::map<std::string, std::time_t> poopers;
    extern std::map<std::string, std::time_t> watchers;
    extern std::map<std::string, std::time_t> listeners;
    extern std::time_t lastact;
    extern std::time_t currtime;
    extern std::time_t daystart;
    extern std::time_t sixhcycle;
    extern int annoyance;
    extern bool joinedChannel;
    extern std::string chan;
    extern const std::vector<std::string> commandList;

}

#endif
