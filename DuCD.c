#include "DuCD.h"
#include <windows.h>

void abreCD(void)
{
    MCI_OPEN_PARMS mciParams;
    DWORD dwFlags;
    LPCTSTR szCharDrive = "D";

    memset(&mciParams, 0, sizeof(MCI_OPEN_PARMS));
    mciParams.lpstrDeviceType = (LPCSTR) MCI_DEVTYPE_CD_AUDIO;
    mciParams.lpstrElementName = szCharDrive;

    dwFlags = MCI_OPEN_TYPE | MCI_OPEN_TYPE_ID;

    if (!mciSendCommand(0, MCI_OPEN, dwFlags, (DWORD) & mciParams)) {
        mciSendCommand(mciParams.wDeviceID, MCI_SET,
                MCI_SET_DOOR_OPEN | MCI_WAIT, 0);
        mciSendCommand(mciParams.wDeviceID, MCI_CLOSE, MCI_WAIT, 0);
    }
}

void cierraCD(void)
{
    MCI_OPEN_PARMS mciParams;
    DWORD dwFlags;
    LPCTSTR szCharDrive = "D";

    memset(&mciParams, 0, sizeof(MCI_OPEN_PARMS));
    mciParams.lpstrDeviceType = (LPCSTR) MCI_DEVTYPE_CD_AUDIO;
    mciParams.lpstrElementName = szCharDrive;

    dwFlags = MCI_OPEN_TYPE | MCI_OPEN_TYPE_ID;

    if (!mciSendCommand(0, MCI_OPEN, dwFlags, (DWORD) & mciParams)) {
        mciSendCommand(mciParams.wDeviceID, MCI_SET,
                MCI_SET_DOOR_CLOSED | MCI_WAIT, 0);
        mciSendCommand(mciParams.wDeviceID, MCI_CLOSE, MCI_WAIT, 0);
    }
}
