/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:51:37 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreDAV/CoreDAVItem.h>

@class NSMutableSet;

@interface CoreDAVCalendarServerPushTransportsItem : CoreDAVItem {

	NSMutableSet* _transports;

}

@property (nonatomic,retain) NSMutableSet * transports;              //@synthesize transports=_transports - In the implementation block
+(id)copyParseRules;
-(id)init;
-(NSMutableSet *)transports;
-(id)description;
-(void)addTransport:(id)arg1 ;
-(void)setTransports:(NSMutableSet *)arg1 ;
@end

