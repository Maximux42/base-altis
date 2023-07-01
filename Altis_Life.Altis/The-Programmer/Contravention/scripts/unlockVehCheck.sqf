/*
    Author: Maxence Lyon
    Altis DEV: https://altisdev.com/user/maxence-lyon
    Teamspeak 3: ts.the-programmer.com
    Web site: www.the-programmer.com
    Steam: « Une Vache Sur CS – Maxence », please leave a message on my profile who says the exact reason before adding me.

    Terms of use:
        - This file is forbidden unless you have permission from the author. If you have this file without permission to use it please do not use it and do not share it.
        - If you have permission to use this file, you can use it on your server however it is strictly forbidden to share it.
        - Out of respect for the author please do not delete this information.

    License number:
    Server's name:
    Owner's name:
*/  
[] spawn {
    _veh = objNull;
    if (isNull objectParent player) then {_veh = cursorObject;} else {_veh = vehicle player;};
    _data = _veh getVariable ["vehicle_immobilised",[]];

    _action = true;
    _name_cop = "";
    _reason = "";
    _price = 0;

    if !(_data isEqualTo []) then {
        _data = _veh getVariable ["vehicle_immobilised",[]];
        _name_cop = _data select 0;
        _reason = _data select 1;
        _price = _data select 2;

        if (local _veh) then {
            _veh lock 2;
        } else {
            [_veh,2] remoteExecCall ["life_fnc_lockVehicle",_veh];
        };

        _text = format [(["STR_CONFIRM_CIV_TEXT","Max_Settings_Contravention","Contravention_Localization"] call theprogrammer_core_fnc_localize),_name_cop,[_price] call life_fnc_numberText,_reason];
        _action = [
            _text,
            (["STR_CONFIRM_CIV_HEADER","Max_Settings_Contravention","Contravention_Localization"] call theprogrammer_core_fnc_localize),
            (["STR_YES","Max_Settings_Contravention","Contravention_Localization"] call theprogrammer_core_fnc_localize),
            (["STR_NO","Max_Settings_Contravention","Contravention_Localization"] call theprogrammer_core_fnc_localize)
        ] call BIS_fnc_guiMessage;

        if (_action) then {
            if (BANK < _price) exitWith {hint (["STR_NOT_ENOUGHT_BANK_MONEY","Max_Settings_Contravention","Contravention_Localization"] call theprogrammer_core_fnc_localize);};
            _veh setVariable ["vehicle_immobilised",nil,true];
            [_veh,[]] remoteExec ["max_contrav_fnc_updateContravention",2];
            hint (["STR_SUCCES_PAY","Max_Settings_Contravention","Contravention_Localization"] call theprogrammer_core_fnc_localize);

            BANK = BANK - _price;
            if !(isNil "masterpay_script_enable_and_ready") then {
                if (masterpay_script_enable_and_ready) then {
                    [player,(["STR_TICKET_SYSTEM_FROM","The_Programmer_Settings_MasterPay","MasterPay_Localization"] call theprogrammer_core_fnc_localize),_price,format [(["STR_TICKET_SYSTEM_DESCRITPION_PAYTICKET","The_Programmer_Settings_MasterPay","MasterPay_Localization"] call theprogrammer_core_fnc_localize),_reason]] spawn masterpay_fnc_updateBank;
                };
            };

            [1] call SOCK_fnc_updatePartial;
            if (local _veh) then {
                _veh lock 0;
            } else {
                [_veh,0] remoteExecCall ["life_fnc_lockVehicle",_veh];
            };
        };
    };    

    if !(_action) exitWith {
        [_veh,[_name_cop,_reason,(_price * getNumber (missionConfigFile >> "Max_Settings_Contravention" >> "multiplier_on_refuse"))]] remoteExec ["max_contrav_fnc_updateContravention",2];
        hint (["STR_REFUSE_PAY","Max_Settings_Contravention","Contravention_Localization"] call theprogrammer_core_fnc_localize);
        _veh setVariable ["vehicle_immobilised",[_name_cop,_reason,(_price * getNumber (missionConfigFile >> "Max_Settings_Contravention" >> "multiplier_on_refuse"))],true];
    };
};