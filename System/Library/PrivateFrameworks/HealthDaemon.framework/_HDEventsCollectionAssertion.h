/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:44:44 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthDaemon/HDAssertion.h>

@class NSSet;

@interface _HDEventsCollectionAssertion : HDAssertion {

	NSSet* _eventCollectors;

}

@property (nonatomic,retain) NSSet * eventCollectors;              //@synthesize eventCollectors=_eventCollectors - In the implementation block
-(id)initWithOwnerIdentifier:(id)arg1 ;
-(void)setEventCollectors:(NSSet *)arg1 ;
-(NSSet *)eventCollectors;
@end
