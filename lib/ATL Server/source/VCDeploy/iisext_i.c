//
// Copyright (c) Microsoft Corporation.  All rights reserved.
//

#pragma warning( disable: 4049 )  /* more than 64k source lines */
#pragma warning( disable: 4100 ) /* unreferenced arguments in x86 call */
#pragma warning( disable: 4211 )  /* redefine extent to static */

/* this ALWAYS GENERATED file contains the IIDs and CLSIDs */

/* link this file in with the server and any clients */


 /* File created by MIDL compiler version 6.00.0358 */
/* at Mon May 06 20:13:17 2002
 */
/* Compiler settings for iisext.odl:
    Oicf, W1, Zp8, env=Win32 (32b run)
    protocol : dce , ms_ext, c_ext, robust
    error checks: allocation ref bounds_check enum stub_data 
    VC __declspec() decoration level: 
         __declspec(uuid()), __declspec(selectany), __declspec(novtable)
         DECLSPEC_UUID(), MIDL_INTERFACE()
*/
//@@MIDL_FILE_HEADING(  )

#if !defined(_M_IA64) && !defined(_M_AMD64)

#ifdef __cplusplus
extern "C"{
#endif 


#include <rpc.h>
#include <rpcndr.h>

#ifdef _MIDL_USE_GUIDDEF_

#ifndef INITGUID
#define INITGUID
#include <guiddef.h>
#undef INITGUID
#else
#include <guiddef.h>
#endif

#define MIDL_DEFINE_GUID(type,name,l,w1,w2,b1,b2,b3,b4,b5,b6,b7,b8) \
        DEFINE_GUID(name,l,w1,w2,b1,b2,b3,b4,b5,b6,b7,b8)

#else // !_MIDL_USE_GUIDDEF_

#ifndef __IID_DEFINED__
#define __IID_DEFINED__

typedef struct _IID
{
    unsigned long x;
    unsigned short s1;
    unsigned short s2;
    unsigned char  c[8];
} IID;

#endif // __IID_DEFINED__

#ifndef CLSID_DEFINED
#define CLSID_DEFINED
typedef IID CLSID;
#endif // CLSID_DEFINED

#define MIDL_DEFINE_GUID(type,name,l,w1,w2,b1,b2,b3,b4,b5,b6,b7,b8) \
        const type name = {l,w1,w2,{b1,b2,b3,b4,b5,b6,b7,b8}}

#endif !_MIDL_USE_GUIDDEF_

MIDL_DEFINE_GUID(IID, LIBID_IISExt,0x2a56ea30,0xafeb,0x11d1,0x98,0x68,0x00,0xa0,0xc9,0x22,0xe7,0x03);


MIDL_DEFINE_GUID(IID, IID_IISApplicationPool,0x0B3CB1E1,0x829A,0x4c06,0x8B,0x09,0xF5,0x6D,0xA1,0x89,0x4C,0x88);


MIDL_DEFINE_GUID(IID, IID_IISApplicationPools,0x587F123F,0x49B4,0x49dd,0x93,0x9E,0xF4,0x54,0x7A,0xA3,0xFA,0x75);


MIDL_DEFINE_GUID(IID, IID_IISWebService,0xEE46D40C,0x1B38,0x4a02,0x89,0x8D,0x35,0x8E,0x74,0xDF,0xC9,0xD2);


MIDL_DEFINE_GUID(IID, IID_IISDsCrMap,0xedcd6a60,0xb053,0x11d0,0xa6,0x2f,0x00,0xa0,0xc9,0x22,0xe7,0x52);


MIDL_DEFINE_GUID(IID, IID_IISApp,0x46FBBB80,0x0192,0x11d1,0x9C,0x39,0x00,0xA0,0xC9,0x22,0xE7,0x03);


MIDL_DEFINE_GUID(IID, IID_IISApp2,0x603DCBEA,0x7350,0x11d2,0xA7,0xBE,0x00,0x00,0xF8,0x08,0x5B,0x95);


MIDL_DEFINE_GUID(IID, IID_IISApp3,0x2812B639,0x8FAC,0x4510,0x96,0xC5,0x71,0xDD,0xBD,0x1F,0x54,0xFC);


MIDL_DEFINE_GUID(IID, IID_IISComputer,0xCF87A2E0,0x078B,0x11d1,0x9C,0x3D,0x00,0xA0,0xC9,0x22,0xE7,0x03);


MIDL_DEFINE_GUID(IID, IID_IISComputer2,0x63d89839,0x5762,0x4a68,0xb1,0xb9,0x35,0x07,0xea,0x76,0xcb,0xbf);


MIDL_DEFINE_GUID(CLSID, CLSID_IISExtComputer,0x91ef9258,0xafec,0x11d1,0x98,0x68,0x00,0xa0,0xc9,0x22,0xe7,0x03);


MIDL_DEFINE_GUID(CLSID, CLSID_IISExtApp,0xb4f34438,0xafec,0x11d1,0x98,0x68,0x00,0xa0,0xc9,0x22,0xe7,0x03);


MIDL_DEFINE_GUID(CLSID, CLSID_IISExtServer,0xc3b32488,0xafec,0x11d1,0x98,0x68,0x00,0xa0,0xc9,0x22,0xe7,0x03);


MIDL_DEFINE_GUID(CLSID, CLSID_IISExtDsCrMap,0xbc36cde8,0xafeb,0x11d1,0x98,0x68,0x00,0xa0,0xc9,0x22,0xe7,0x03);


MIDL_DEFINE_GUID(CLSID, CLSID_IISExtApplicationPool,0xE99F9D0C,0xFB39,0x402b,0x9E,0xEB,0xAA,0x18,0x52,0x37,0xBD,0x34);


MIDL_DEFINE_GUID(CLSID, CLSID_IISExtApplicationPools,0x95863074,0xA389,0x406a,0xA2,0xD7,0xD9,0x8B,0xFC,0x95,0xB9,0x05);


MIDL_DEFINE_GUID(CLSID, CLSID_IISExtWebService,0x40B8F873,0xB30E,0x475d,0xBE,0xC5,0x4D,0x0E,0xBB,0x0D,0xBA,0xF3);

#undef MIDL_DEFINE_GUID

#ifdef __cplusplus
}
#endif



#endif /* !defined(_M_IA64) && !defined(_M_AMD64)*/


#pragma warning( disable: 4049 )  /* more than 64k source lines */

#pragma warning( disable: 4211 )  /* redefine extent to static */

/* this ALWAYS GENERATED file contains the IIDs and CLSIDs */

/* link this file in with the server and any clients */


 /* File created by MIDL compiler version 6.00.0358 */
/* at Mon May 06 20:13:17 2002
 */
/* Compiler settings for iisext.odl:
    Oicf, W1, Zp8, env=Win64 (32b run,appending)
    protocol : dce , ms_ext, c_ext, robust
    error checks: allocation ref bounds_check enum stub_data 
    VC __declspec() decoration level: 
         __declspec(uuid()), __declspec(selectany), __declspec(novtable)
         DECLSPEC_UUID(), MIDL_INTERFACE()
*/
//@@MIDL_FILE_HEADING(  )

#if defined(_M_IA64) || defined(_M_AMD64)

#ifdef __cplusplus
extern "C"{
#endif 


#include <rpc.h>
#include <rpcndr.h>

#ifdef _MIDL_USE_GUIDDEF_

#ifndef INITGUID
#define INITGUID
#include <guiddef.h>
#undef INITGUID
#else
#include <guiddef.h>
#endif

#define MIDL_DEFINE_GUID(type,name,l,w1,w2,b1,b2,b3,b4,b5,b6,b7,b8) \
        DEFINE_GUID(name,l,w1,w2,b1,b2,b3,b4,b5,b6,b7,b8)

#else // !_MIDL_USE_GUIDDEF_

#ifndef __IID_DEFINED__
#define __IID_DEFINED__

typedef struct _IID
{
    unsigned long x;
    unsigned short s1;
    unsigned short s2;
    unsigned char  c[8];
} IID;

#endif // __IID_DEFINED__

#ifndef CLSID_DEFINED
#define CLSID_DEFINED
typedef IID CLSID;
#endif // CLSID_DEFINED

#define MIDL_DEFINE_GUID(type,name,l,w1,w2,b1,b2,b3,b4,b5,b6,b7,b8) \
        const type name = {l,w1,w2,{b1,b2,b3,b4,b5,b6,b7,b8}}

#endif !_MIDL_USE_GUIDDEF_

MIDL_DEFINE_GUID(IID, LIBID_IISExt,0x2a56ea30,0xafeb,0x11d1,0x98,0x68,0x00,0xa0,0xc9,0x22,0xe7,0x03);


MIDL_DEFINE_GUID(IID, IID_IISApplicationPool,0x0B3CB1E1,0x829A,0x4c06,0x8B,0x09,0xF5,0x6D,0xA1,0x89,0x4C,0x88);


MIDL_DEFINE_GUID(IID, IID_IISApplicationPools,0x587F123F,0x49B4,0x49dd,0x93,0x9E,0xF4,0x54,0x7A,0xA3,0xFA,0x75);


MIDL_DEFINE_GUID(IID, IID_IISWebService,0xEE46D40C,0x1B38,0x4a02,0x89,0x8D,0x35,0x8E,0x74,0xDF,0xC9,0xD2);


MIDL_DEFINE_GUID(IID, IID_IISDsCrMap,0xedcd6a60,0xb053,0x11d0,0xa6,0x2f,0x00,0xa0,0xc9,0x22,0xe7,0x52);


MIDL_DEFINE_GUID(IID, IID_IISApp,0x46FBBB80,0x0192,0x11d1,0x9C,0x39,0x00,0xA0,0xC9,0x22,0xE7,0x03);


MIDL_DEFINE_GUID(IID, IID_IISApp2,0x603DCBEA,0x7350,0x11d2,0xA7,0xBE,0x00,0x00,0xF8,0x08,0x5B,0x95);


MIDL_DEFINE_GUID(IID, IID_IISApp3,0x2812B639,0x8FAC,0x4510,0x96,0xC5,0x71,0xDD,0xBD,0x1F,0x54,0xFC);


MIDL_DEFINE_GUID(IID, IID_IISComputer,0xCF87A2E0,0x078B,0x11d1,0x9C,0x3D,0x00,0xA0,0xC9,0x22,0xE7,0x03);


MIDL_DEFINE_GUID(IID, IID_IISComputer2,0x63d89839,0x5762,0x4a68,0xb1,0xb9,0x35,0x07,0xea,0x76,0xcb,0xbf);


MIDL_DEFINE_GUID(CLSID, CLSID_IISExtComputer,0x91ef9258,0xafec,0x11d1,0x98,0x68,0x00,0xa0,0xc9,0x22,0xe7,0x03);


MIDL_DEFINE_GUID(CLSID, CLSID_IISExtApp,0xb4f34438,0xafec,0x11d1,0x98,0x68,0x00,0xa0,0xc9,0x22,0xe7,0x03);


MIDL_DEFINE_GUID(CLSID, CLSID_IISExtServer,0xc3b32488,0xafec,0x11d1,0x98,0x68,0x00,0xa0,0xc9,0x22,0xe7,0x03);


MIDL_DEFINE_GUID(CLSID, CLSID_IISExtDsCrMap,0xbc36cde8,0xafeb,0x11d1,0x98,0x68,0x00,0xa0,0xc9,0x22,0xe7,0x03);


MIDL_DEFINE_GUID(CLSID, CLSID_IISExtApplicationPool,0xE99F9D0C,0xFB39,0x402b,0x9E,0xEB,0xAA,0x18,0x52,0x37,0xBD,0x34);


MIDL_DEFINE_GUID(CLSID, CLSID_IISExtApplicationPools,0x95863074,0xA389,0x406a,0xA2,0xD7,0xD9,0x8B,0xFC,0x95,0xB9,0x05);


MIDL_DEFINE_GUID(CLSID, CLSID_IISExtWebService,0x40B8F873,0xB30E,0x475d,0xBE,0xC5,0x4D,0x0E,0xBB,0x0D,0xBA,0xF3);

#undef MIDL_DEFINE_GUID

#ifdef __cplusplus
}
#endif



#endif /* defined(_M_IA64) || defined(_M_AMD64)*/

