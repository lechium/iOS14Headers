/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:42:39 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/VoiceMemos.framework/VoiceMemos
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreData/NSManagedObject.h>

@interface RCEntityRevision : NSManagedObject

@property (nonatomic,readonly) long long revisionType; 
@property (nonatomic,readonly) long long revisionID; 
@property (nonatomic,readonly) long long recordingID; 
-(long long)revisionID;
-(long long)recordingID;
-(void)setRecordingID:(long long)arg1 ;
-(long long)revisionType;
-(void)setRevisionType:(long long)arg1 ;
-(void)setRevisionID:(long long)arg1 ;
@end
