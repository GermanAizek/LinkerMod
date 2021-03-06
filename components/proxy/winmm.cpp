#include "stdafx.h"

#define FORWARD_EXPORT(MODULE, SYMBOL) \
    __pragma(comment(linker, "/export:" #SYMBOL "=" #MODULE "." #SYMBOL))

FORWARD_EXPORT(winmm, CloseDriver)
FORWARD_EXPORT(winmm, DefDriverProc)
FORWARD_EXPORT(winmm, DriverCallback)
FORWARD_EXPORT(winmm, DrvGetModuleHandle)
FORWARD_EXPORT(winmm, GetDriverModuleHandle)
FORWARD_EXPORT(winmm, OpenDriver)
FORWARD_EXPORT(winmm, PlaySound)
FORWARD_EXPORT(winmm, PlaySoundA)
FORWARD_EXPORT(winmm, PlaySoundW)
FORWARD_EXPORT(winmm, SendDriverMessage)
FORWARD_EXPORT(winmm, WOWAppExit)
FORWARD_EXPORT(winmm, auxGetDevCapsA)
FORWARD_EXPORT(winmm, auxGetDevCapsW)
FORWARD_EXPORT(winmm, auxGetNumDevs)
FORWARD_EXPORT(winmm, auxGetVolume)
FORWARD_EXPORT(winmm, auxOutMessage)
FORWARD_EXPORT(winmm, auxSetVolume)
FORWARD_EXPORT(winmm, joyConfigChanged)
FORWARD_EXPORT(winmm, joyGetDevCapsA)
FORWARD_EXPORT(winmm, joyGetDevCapsW)
FORWARD_EXPORT(winmm, joyGetNumDevs)
FORWARD_EXPORT(winmm, joyGetPos)
FORWARD_EXPORT(winmm, joyGetPosEx)
FORWARD_EXPORT(winmm, joyGetThreshold)
FORWARD_EXPORT(winmm, joyReleaseCapture)
FORWARD_EXPORT(winmm, joySetCapture)
FORWARD_EXPORT(winmm, joySetThreshold)
FORWARD_EXPORT(winmm, mciDriverNotify)
FORWARD_EXPORT(winmm, mciDriverYield)
FORWARD_EXPORT(winmm, mciExecute)
FORWARD_EXPORT(winmm, mciFreeCommandResource)
FORWARD_EXPORT(winmm, mciGetCreatorTask)
FORWARD_EXPORT(winmm, mciGetDeviceIDA)
FORWARD_EXPORT(winmm, mciGetDeviceIDFromElementIDA)
FORWARD_EXPORT(winmm, mciGetDeviceIDFromElementIDW)
FORWARD_EXPORT(winmm, mciGetDeviceIDW)
FORWARD_EXPORT(winmm, mciGetDriverData)
FORWARD_EXPORT(winmm, mciGetErrorStringA)
FORWARD_EXPORT(winmm, mciGetErrorStringW)
FORWARD_EXPORT(winmm, mciGetYieldProc)
FORWARD_EXPORT(winmm, mciLoadCommandResource)
FORWARD_EXPORT(winmm, mciSendCommandA)
FORWARD_EXPORT(winmm, mciSendCommandW)
FORWARD_EXPORT(winmm, mciSendStringA)
FORWARD_EXPORT(winmm, mciSendStringW)
FORWARD_EXPORT(winmm, mciSetDriverData)
FORWARD_EXPORT(winmm, mciSetYieldProc)
FORWARD_EXPORT(winmm, midiConnect)
FORWARD_EXPORT(winmm, midiDisconnect)
FORWARD_EXPORT(winmm, midiInAddBuffer)
FORWARD_EXPORT(winmm, midiInClose)
FORWARD_EXPORT(winmm, midiInGetDevCapsA)
FORWARD_EXPORT(winmm, midiInGetDevCapsW)
FORWARD_EXPORT(winmm, midiInGetErrorTextA)
FORWARD_EXPORT(winmm, midiInGetErrorTextW)
FORWARD_EXPORT(winmm, midiInGetID)
FORWARD_EXPORT(winmm, midiInGetNumDevs)
FORWARD_EXPORT(winmm, midiInMessage)
FORWARD_EXPORT(winmm, midiInOpen)
FORWARD_EXPORT(winmm, midiInPrepareHeader)
FORWARD_EXPORT(winmm, midiInReset)
FORWARD_EXPORT(winmm, midiInStart)
FORWARD_EXPORT(winmm, midiInStop)
FORWARD_EXPORT(winmm, midiInUnprepareHeader)
FORWARD_EXPORT(winmm, midiOutCacheDrumPatches)
FORWARD_EXPORT(winmm, midiOutCachePatches)
FORWARD_EXPORT(winmm, midiOutClose)
FORWARD_EXPORT(winmm, midiOutGetDevCapsA)
FORWARD_EXPORT(winmm, midiOutGetDevCapsW)
FORWARD_EXPORT(winmm, midiOutGetErrorTextA)
FORWARD_EXPORT(winmm, midiOutGetErrorTextW)
FORWARD_EXPORT(winmm, midiOutGetID)
FORWARD_EXPORT(winmm, midiOutGetNumDevs)
FORWARD_EXPORT(winmm, midiOutGetVolume)
FORWARD_EXPORT(winmm, midiOutLongMsg)
FORWARD_EXPORT(winmm, midiOutMessage)
FORWARD_EXPORT(winmm, midiOutOpen)
FORWARD_EXPORT(winmm, midiOutPrepareHeader)
FORWARD_EXPORT(winmm, midiOutReset)
FORWARD_EXPORT(winmm, midiOutSetVolume)
FORWARD_EXPORT(winmm, midiOutShortMsg)
FORWARD_EXPORT(winmm, midiOutUnprepareHeader)
FORWARD_EXPORT(winmm, midiStreamClose)
FORWARD_EXPORT(winmm, midiStreamOpen)
FORWARD_EXPORT(winmm, midiStreamOut)
FORWARD_EXPORT(winmm, midiStreamPause)
FORWARD_EXPORT(winmm, midiStreamPosition)
FORWARD_EXPORT(winmm, midiStreamProperty)
FORWARD_EXPORT(winmm, midiStreamRestart)
FORWARD_EXPORT(winmm, midiStreamStop)
FORWARD_EXPORT(winmm, mixerClose)
FORWARD_EXPORT(winmm, mixerGetControlDetailsA)
FORWARD_EXPORT(winmm, mixerGetControlDetailsW)
FORWARD_EXPORT(winmm, mixerGetDevCapsA)
FORWARD_EXPORT(winmm, mixerGetDevCapsW)
FORWARD_EXPORT(winmm, mixerGetID)
FORWARD_EXPORT(winmm, mixerGetLineControlsA)
FORWARD_EXPORT(winmm, mixerGetLineControlsW)
FORWARD_EXPORT(winmm, mixerGetLineInfoA)
FORWARD_EXPORT(winmm, mixerGetLineInfoW)
FORWARD_EXPORT(winmm, mixerGetNumDevs)
FORWARD_EXPORT(winmm, mixerMessage)
FORWARD_EXPORT(winmm, mixerOpen)
FORWARD_EXPORT(winmm, mixerSetControlDetails)
FORWARD_EXPORT(winmm, mmDrvInstall)
FORWARD_EXPORT(winmm, mmGetCurrentTask)
FORWARD_EXPORT(winmm, mmTaskBlock)
FORWARD_EXPORT(winmm, mmTaskCreate)
FORWARD_EXPORT(winmm, mmTaskSignal)
FORWARD_EXPORT(winmm, mmTaskYield)
FORWARD_EXPORT(winmm, mmioAdvance)
FORWARD_EXPORT(winmm, mmioAscend)
FORWARD_EXPORT(winmm, mmioClose)
FORWARD_EXPORT(winmm, mmioCreateChunk)
FORWARD_EXPORT(winmm, mmioDescend)
FORWARD_EXPORT(winmm, mmioFlush)
FORWARD_EXPORT(winmm, mmioGetInfo)
FORWARD_EXPORT(winmm, mmioInstallIOProcA)
FORWARD_EXPORT(winmm, mmioInstallIOProcW)
FORWARD_EXPORT(winmm, mmioOpenA)
FORWARD_EXPORT(winmm, mmioOpenW)
FORWARD_EXPORT(winmm, mmioRead)
FORWARD_EXPORT(winmm, mmioRenameA)
FORWARD_EXPORT(winmm, mmioRenameW)
FORWARD_EXPORT(winmm, mmioSeek)
FORWARD_EXPORT(winmm, mmioSendMessage)
FORWARD_EXPORT(winmm, mmioSetBuffer)
FORWARD_EXPORT(winmm, mmioSetInfo)
FORWARD_EXPORT(winmm, mmioStringToFOURCCA)
FORWARD_EXPORT(winmm, mmioStringToFOURCCW)
FORWARD_EXPORT(winmm, mmioWrite)
FORWARD_EXPORT(winmm, mmsystemGetVersion)
FORWARD_EXPORT(winmm, sndPlaySoundA)
FORWARD_EXPORT(winmm, sndPlaySoundW)
FORWARD_EXPORT(winmm, timeBeginPeriod)
FORWARD_EXPORT(winmm, timeEndPeriod)
FORWARD_EXPORT(winmm, timeGetDevCaps)
FORWARD_EXPORT(winmm, timeGetSystemTime)
FORWARD_EXPORT(winmm, timeGetTime)
FORWARD_EXPORT(winmm, timeKillEvent)
FORWARD_EXPORT(winmm, timeSetEvent)
FORWARD_EXPORT(winmm, waveInAddBuffer)
FORWARD_EXPORT(winmm, waveInClose)
FORWARD_EXPORT(winmm, waveInGetDevCapsA)
FORWARD_EXPORT(winmm, waveInGetDevCapsW)
FORWARD_EXPORT(winmm, waveInGetErrorTextA)
FORWARD_EXPORT(winmm, waveInGetErrorTextW)
FORWARD_EXPORT(winmm, waveInGetID)
FORWARD_EXPORT(winmm, waveInGetNumDevs)
FORWARD_EXPORT(winmm, waveInGetPosition)
FORWARD_EXPORT(winmm, waveInMessage)
FORWARD_EXPORT(winmm, waveInOpen)
FORWARD_EXPORT(winmm, waveInPrepareHeader)
FORWARD_EXPORT(winmm, waveInReset)
FORWARD_EXPORT(winmm, waveInStart)
FORWARD_EXPORT(winmm, waveInStop)
FORWARD_EXPORT(winmm, waveInUnprepareHeader)
FORWARD_EXPORT(winmm, waveOutBreakLoop)
FORWARD_EXPORT(winmm, waveOutClose)
FORWARD_EXPORT(winmm, waveOutGetDevCapsA)
FORWARD_EXPORT(winmm, waveOutGetDevCapsW)
FORWARD_EXPORT(winmm, waveOutGetErrorTextA)
FORWARD_EXPORT(winmm, waveOutGetErrorTextW)
FORWARD_EXPORT(winmm, waveOutGetID)
FORWARD_EXPORT(winmm, waveOutGetNumDevs)
FORWARD_EXPORT(winmm, waveOutGetPitch)
FORWARD_EXPORT(winmm, waveOutGetPlaybackRate)
FORWARD_EXPORT(winmm, waveOutGetPosition)
FORWARD_EXPORT(winmm, waveOutGetVolume)
FORWARD_EXPORT(winmm, waveOutMessage)
FORWARD_EXPORT(winmm, waveOutOpen)
FORWARD_EXPORT(winmm, waveOutPause)
FORWARD_EXPORT(winmm, waveOutPrepareHeader)
FORWARD_EXPORT(winmm, waveOutReset)
FORWARD_EXPORT(winmm, waveOutRestart)
FORWARD_EXPORT(winmm, waveOutSetPitch)
FORWARD_EXPORT(winmm, waveOutSetPlaybackRate)
FORWARD_EXPORT(winmm, waveOutSetVolume)
FORWARD_EXPORT(winmm, waveOutUnprepareHeader)
FORWARD_EXPORT(winmm, waveOutWrite)
FORWARD_EXPORT(winmm, ___XXX___181)
