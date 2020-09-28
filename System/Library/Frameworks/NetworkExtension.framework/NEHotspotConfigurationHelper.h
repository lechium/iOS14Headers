/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:41:12 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NEHelper, NSObject;

@interface NEHotspotConfigurationHelper : NSObject {

	NEHelper* _helper;
	NSObject*<OS_dispatch_queue> _queue;

}

@property (readonly) NEHelper * helper; 
@property (readonly) NSObject*<OS_dispatch_queue> queue;              //@synthesize queue=_queue - In the implementation block
+(id)sharedManager;
-(NEHelper *)helper;
-(id)init;
-(NSObject*<OS_dispatch_queue>)queue;
-(id)createXPCRequest:(id)arg1 requestType:(long long)arg2 ;
-(id)processQueryNetworksResponse:(id)arg1 ;
-(void)sendRequest:(id)arg1 requestType:(long long)arg2 resultHandler:(/*^block*/id)arg3 ;
@end
