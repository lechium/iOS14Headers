/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:39:18 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/ChronoServices.framework/ChronoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CHSChronoWidgetServiceServer;
@interface CHSApplicationProcessStateChangeConsumer : NSObject {

	id<CHSChronoWidgetServiceServer> _server;

}

@property (nonatomic,readonly) id<CHSChronoWidgetServiceServer> server;              //@synthesize server=_server - In the implementation block
-(id)initWithServer:(id)arg1 ;
-(id)init;
-(void)applicationWithBundleIdentifierEnteredForeground:(id)arg1 ;
-(id<CHSChronoWidgetServiceServer>)server;
@end
