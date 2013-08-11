#ifndef _H_hp_error_hd_READER
#include "hotpot/hp_platform.h"
#include "hotprotocol/hp_abstract_reader.h"
#include <string.h>
#include "hotpot/hp_error_code.h"
#include "hotpot/hp_error_reader.h"
void read_HP_ERROR_CODE_name(HPAbstractReader *self, HP_ERROR_CODE *data)
{
    char name[128];
    read_enum_name(self, name, 128);
    if(strcmp(name, "E_HP_NOERROR") == 0)
    {
        *data = E_HP_NOERROR;
        goto done;
    }
    if(strcmp(name, "E_HP_ERROR") == 0)
    {
        *data = E_HP_ERROR;
        goto done;
    }
    if(strcmp(name, "E_HP_BAD_PARAMETER") == 0)
    {
        *data = E_HP_BAD_PARAMETER;
        goto done;
    }
    if(strcmp(name, "E_HP_SYNTAX_ERROR") == 0)
    {
        *data = E_HP_SYNTAX_ERROR;
        goto done;
    }
    if(strcmp(name, "E_HP_NOT_ENOUGH_BYTEBUFF_SIZE") == 0)
    {
        *data = E_HP_NOT_ENOUGH_BYTEBUFF_SIZE;
        goto done;
    }
    if(strcmp(name, "E_HP_CONSTANT_REDEFINITION") == 0)
    {
        *data = E_HP_CONSTANT_REDEFINITION;
        goto done;
    }
    if(strcmp(name, "E_HP_INTEGER_OVERFLOW") == 0)
    {
        *data = E_HP_INTEGER_OVERFLOW;
        goto done;
    }
    if(strcmp(name, "E_HP_CAN_NOT_OPEN_FILE") == 0)
    {
        *data = E_HP_CAN_NOT_OPEN_FILE;
        goto done;
    }
    if(strcmp(name, "E_HP_CAN_NOT_FIND_CONSTANCE") == 0)
    {
        *data = E_HP_CAN_NOT_FIND_CONSTANCE;
        goto done;
    }
    if(strcmp(name, "E_HP_CONSTANCE_TYPE_TOO_SMALL") == 0)
    {
        *data = E_HP_CONSTANCE_TYPE_TOO_SMALL;
        goto done;
    }
    if(strcmp(name, "E_HP_INVALID_CONSTANCE_TYPE") == 0)
    {
        *data = E_HP_INVALID_CONSTANCE_TYPE;
        goto done;
    }
    if(strcmp(name, "E_HP_UNKNOW_CONSTANT_VALUE") == 0)
    {
        *data = E_HP_UNKNOW_CONSTANT_VALUE;
        goto done;
    }
    if(strcmp(name, "E_HP_SYMBOL_REDEFINITION") == 0)
    {
        *data = E_HP_SYMBOL_REDEFINITION;
        goto done;
    }
    if(strcmp(name, "E_HP_TYPEDEF_ONLY_SUPPORT_SIMPLEY_TYPE_OR_OBJECCT_TYPE") == 0)
    {
        *data = E_HP_TYPEDEF_ONLY_SUPPORT_SIMPLEY_TYPE_OR_OBJECCT_TYPE;
        goto done;
    }
done:
    return;
}
void read_HP_ERROR_CODE_number(HPAbstractReader *self, HP_ERROR_CODE *data)
{
    read_enum_number(self, (hpint32*)data);
}
void read_HP_ERROR_CODE(HPAbstractReader *self, HP_ERROR_CODE *data)
{
    read_HP_ERROR_CODE_name(self, data);
    read_HP_ERROR_CODE_number(self, data);
}
#endif//_H_hp_error_hd_READER