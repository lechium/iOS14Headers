/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:40:57 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/AudioToolboxCore.framework/AudioToolboxCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AudioToolboxCore/AudioToolboxCore-Structs.h>
#import <AudioToolboxCore/AudioComponentRegistrarProtocol.h>

@interface AudioComponentMainRegConnection : NSObject <AudioComponentRegistrarProtocol> {

	AudioComponentRegistrarImpl* mImpl;
	ConnectionInfo mConnInfo;

}
-(id)initWithRegistrar:(AudioComponentRegistrarImpl*)arg1 connection:(id)arg2 ;
-(void)getComponentList:(id)arg1 linkedSDKRequiresEntitlement:(BOOL)arg2 includeExtensions:(BOOL)arg3 reply:(/*^block*/id)arg4 ;
-(void)canRegisterComponent:(id)arg1 reply:(/*^block*/id)arg2 ;
@end
