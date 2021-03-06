//-----------------------------------------------------------------------------
// Copyright (C) 2020 tharexde
//
// This code is licensed to you under the terms of the GNU GPL, version 2 or,
// at your option, any later version. See the LICENSE.txt file for the text of
// the license.
//-----------------------------------------------------------------------------
// Low frequency EM4x50 commands
//-----------------------------------------------------------------------------

#ifndef CMDLFEM4X50_H__
#define CMDLFEM4X50_H__

int usage_lf_em4x50_info(void);
int usage_lf_em4x50_write(void);
int usage_lf_em4x50_write_password(void);
int usage_lf_em4x50_sread(void);

int CmdEM4x50Info(const char *Cmd);
int CmdEM4x50Write(const char *Cmd);
int CmdEM4x50WritePassword(const char *Cmd);
int CmdEM4x50SRead(const char *Cmd);

#endif
