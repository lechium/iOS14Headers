/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:53:12 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/LocalAuthentication.framework/Support/SharedUtils.framework/SharedUtils
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/Service.h>

@class NSString, NSXPCListenerEndpoint;

@interface VirtualService : NSObject <Service> {

	NSXPCListenerEndpoint* _endpoint;
	NSString* _serviceID;

}

@property (nonatomic,readonly) NSString * serviceID;                          //@synthesize serviceID=_serviceID - In the implementation block
@property (nonatomic,readonly) NSXPCListenerEndpoint * endpoint; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)serviceID;
-(NSXPCListenerEndpoint *)endpoint;
-(void)dealloc;
-(id)initWithEndpoint:(id)arg1 ;
@end
