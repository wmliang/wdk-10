

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


 /* File created by MIDL compiler version 8.00.0613 */
/* @@MIDL_FILE_HEADING(  ) */



/* verify that the <rpcndr.h> version is high enough to compile this file*/
#ifndef __REQUIRED_RPCNDR_H_VERSION__
#define __REQUIRED_RPCNDR_H_VERSION__ 500
#endif

/* verify that the <rpcsal.h> version is high enough to compile this file*/
#ifndef __REQUIRED_RPCSAL_H_VERSION__
#define __REQUIRED_RPCSAL_H_VERSION__ 100
#endif

#include "rpc.h"
#include "rpcndr.h"

#ifndef __RPCNDR_H_VERSION__
#error this stub requires an updated version of <rpcndr.h>
#endif /* __RPCNDR_H_VERSION__ */

#ifndef COM_NO_WINDOWS_H
#include "windows.h"
#include "ole2.h"
#endif /*COM_NO_WINDOWS_H*/

#ifndef __inkrenderer_h__
#define __inkrenderer_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */ 

#ifndef __IInkD2DRenderer_FWD_DEFINED__
#define __IInkD2DRenderer_FWD_DEFINED__
typedef interface IInkD2DRenderer IInkD2DRenderer;

#endif 	/* __IInkD2DRenderer_FWD_DEFINED__ */


#ifndef __InkD2DRenderer_FWD_DEFINED__
#define __InkD2DRenderer_FWD_DEFINED__

#ifdef __cplusplus
typedef class InkD2DRenderer InkD2DRenderer;
#else
typedef struct InkD2DRenderer InkD2DRenderer;
#endif /* __cplusplus */

#endif 	/* __InkD2DRenderer_FWD_DEFINED__ */


/* header files for imported files */
#include "oaidl.h"
#include "ocidl.h"
#include "inspectable.h"

#ifdef __cplusplus
extern "C"{
#endif 


/* interface __MIDL_itf_inkrenderer_0000_0000 */
/* [local] */ 

#include <winapifamily.h>
#pragma region Application Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP)
#if (NTDDI_VERSION >= NTDDI_WINTHRESHOLD)


extern RPC_IF_HANDLE __MIDL_itf_inkrenderer_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_inkrenderer_0000_0000_v0_0_s_ifspec;

#ifndef __IInkD2DRenderer_INTERFACE_DEFINED__
#define __IInkD2DRenderer_INTERFACE_DEFINED__

/* interface IInkD2DRenderer */
/* [uuid][object] */ 


EXTERN_C const IID IID_IInkD2DRenderer;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("407fb1de-f85a-4150-97cf-b7fb274fb4f8")
    IInkD2DRenderer : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE Draw( 
            /* [in] */ __RPC__in_opt IUnknown *pD2D1DeviceContext,
            /* [in] */ __RPC__in_opt IUnknown *pInkStrokeIterable,
            /* [in] */ BOOL fHighContrast) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IInkD2DRendererVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IInkD2DRenderer * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IInkD2DRenderer * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IInkD2DRenderer * This);
        
        HRESULT ( STDMETHODCALLTYPE *Draw )( 
            __RPC__in IInkD2DRenderer * This,
            /* [in] */ __RPC__in_opt IUnknown *pD2D1DeviceContext,
            /* [in] */ __RPC__in_opt IUnknown *pInkStrokeIterable,
            /* [in] */ BOOL fHighContrast);
        
        END_INTERFACE
    } IInkD2DRendererVtbl;

    interface IInkD2DRenderer
    {
        CONST_VTBL struct IInkD2DRendererVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IInkD2DRenderer_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IInkD2DRenderer_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IInkD2DRenderer_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IInkD2DRenderer_Draw(This,pD2D1DeviceContext,pInkStrokeIterable,fHighContrast)	\
    ( (This)->lpVtbl -> Draw(This,pD2D1DeviceContext,pInkStrokeIterable,fHighContrast) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IInkD2DRenderer_INTERFACE_DEFINED__ */



#ifndef __InkD2DRendererLib_LIBRARY_DEFINED__
#define __InkD2DRendererLib_LIBRARY_DEFINED__

/* library InkD2DRendererLib */
/* [uuid] */ 


EXTERN_C const IID LIBID_InkD2DRendererLib;

EXTERN_C const CLSID CLSID_InkD2DRenderer;

#ifdef __cplusplus

class DECLSPEC_UUID("4044e60c-7b01-4671-a97c-04e0210a07a5")
InkD2DRenderer;
#endif
#endif /* __InkD2DRendererLib_LIBRARY_DEFINED__ */

/* interface __MIDL_itf_inkrenderer_0000_0002 */
/* [local] */ 

#endif // NTDDI_VERSION >= NTDDI_WINTHRESHOLD
#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP) */
#pragma endregion


extern RPC_IF_HANDLE __MIDL_itf_inkrenderer_0000_0002_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_inkrenderer_0000_0002_v0_0_s_ifspec;

/* Additional Prototypes for ALL interfaces */

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


