/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:41:13 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/Trial.framework/Trial
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/TRINotificationToken.h>

@protocol OS_dispatch_queue;
@class NSObject, NSString;

@interface TRINotificationCallback : NSObject <TRINotificationToken> {

	unsigned long long _id;
	NSObject*<OS_dispatch_queue> _queue;
	/*^block*/id _handler;

}

@property (readonly) unsigned long long id;                                   //@synthesize id=_id - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;              //@synthesize queue=_queue - In the implementation block
@property (nonatomic,copy) id handler;                                        //@synthesize handler=_handler - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setHandler:(id)arg1 ;
-(unsigned long long)id;
-(id)init;
-(NSObject*<OS_dispatch_queue>)queue;
-(id)handler;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
@end
