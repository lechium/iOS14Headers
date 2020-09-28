/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:41:27 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/HomeKit.framework/HomeKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSUUID, NSDate;


@protocol HMCameraRecordingEvent
@property (copy,readonly) NSUUID * uniqueIdentifier; 
@property (copy,readonly) NSDate * dateOfOccurrence; 
@required
-(NSUUID *)uniqueIdentifier;
-(NSDate *)dateOfOccurrence;

@end
