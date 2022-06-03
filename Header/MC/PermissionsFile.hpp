// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Core.hpp"
#include "Json.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class PermissionsFile {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_PERMISSIONSFILE
public:
    class PermissionsFile& operator=(class PermissionsFile const &) = delete;
    PermissionsFile(class PermissionsFile const &) = delete;
    PermissionsFile() = delete;
#endif

public:
    MCAPI PermissionsFile(class Core::Path const &);
    MCAPI void applyPlayerPermissionsFromDisk(class Player &, class UserEntityIdentifierComponent const &, enum CommandPermissionLevel);
    MCAPI class std::unordered_map<std::string, enum PlayerPermissionLevel, struct std::hash<std::string>, struct std::equal_to<std::string>, class std::allocator<struct std::pair<std::string const, enum PlayerPermissionLevel>>> const & getPermissions() const;
    MCAPI std::vector<std::string> getXUIDsByPermission(enum PlayerPermissionLevel) const;
    MCAPI bool isPermissionsSet(std::string const &, enum PlayerPermissionLevel) const;
    MCAPI void persistPlayerPermissionsToDisk(std::string const &, enum PlayerPermissionLevel);
    MCAPI void persistPlayerPermissionsToDisk(class UserEntityIdentifierComponent const &, enum PlayerPermissionLevel);
    MCAPI enum FileReadResult reload();

protected:

private:
    MCAPI class std::tuple<enum FileReadResult, class Json::Value> readPermissionFile();
    MCAPI void setDefaultPlayerPermission(class Player &, enum CommandPermissionLevel);

};