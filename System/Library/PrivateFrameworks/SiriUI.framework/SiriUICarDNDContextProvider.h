/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:43:18 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/SiriUI.framework/SiriUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/AFContextProvider.h>

@protocol SiriUICarDNDContextProviderDelegate;
@class SADeviceCarDNDHintContext;

@interface SiriUICarDNDContextProvider : NSObject <AFContextProvider> {

	id<SiriUICarDNDContextProviderDelegate> _delegate;
	SADeviceCarDNDHintContext* _hintContext;

}

@property (assign,nonatomic,__weak) id<SiriUICarDNDContextProviderDelegate> delegate;                    //@synthesize delegate=_delegate - In the implementation block
@property (setter=_setHintContext:,nonatomic,copy) SADeviceCarDNDHintContext * hintContext;              //@synthesize hintContext=_hintContext - In the implementation block
-(BOOL)allowContextProvider:(id)arg1 ;
-(id)getCurrentContext;
-(void)setDelegate:(id<SiriUICarDNDContextProviderDelegate>)arg1 ;
-(id<SiriUICarDNDContextProviderDelegate>)delegate;
-(SADeviceCarDNDHintContext *)hintContext;
-(void)_setHintContext:(id)arg1 ;
@end
