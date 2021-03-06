/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:41:28 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/HomeKit.framework/HomeKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/HMCameraRecordingEvent.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSUUID, NSDate;

@interface HMCameraRecordingReachabilityEvent : NSObject <HMCameraRecordingEvent, NSSecureCoding> {

	BOOL _reachable;
	NSUUID* _uniqueIdentifier;
	NSDate* _dateOfOccurrence;

}

@property (copy,readonly) NSUUID * uniqueIdentifier;                 //@synthesize uniqueIdentifier=_uniqueIdentifier - In the implementation block
@property (getter=isReachable,readonly) BOOL reachable;              //@synthesize reachable=_reachable - In the implementation block
@property (copy,readonly) NSDate * dateOfOccurrence;                 //@synthesize dateOfOccurrence=_dateOfOccurrence - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)isReachable;
-(NSUUID *)uniqueIdentifier;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithUniqueIdentifier:(id)arg1 dateOfOccurrence:(id)arg2 reachable:(BOOL)arg3 ;
-(unsigned long long)hash;
-(NSDate *)dateOfOccurrence;
-(id)description;
@end

