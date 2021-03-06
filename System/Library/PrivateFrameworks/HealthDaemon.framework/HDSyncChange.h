/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:44:45 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSNumber;


@protocol HDSyncChange <NSObject>
@property (getter=isSpeculative,nonatomic,readonly) BOOL speculative; 
@property (nonatomic,readonly) HDSyncAnchorRange syncAnchorRange; 
@property (nonatomic,readonly) NSNumber * sequenceNumber; 
@property (nonatomic,readonly) BOOL done; 
@property (nonatomic,readonly) long long encodedByteCount; 
@required
-(NSNumber *)sequenceNumber;
-(BOOL)done;
-(id)syncEntityIdentifier;
-(Class)syncEntityClassForProfile:(id)arg1;
-(HDSyncAnchorRange)syncAnchorRange;
-(long long)encodedByteCount;
-(BOOL)isSpeculative;
-(void)setObjects:(id)arg1 syncAnchorRange:(HDSyncAnchorRange)arg2 requiredAnchorMap:(id)arg3;
-(void)setSequenceNumber:(long long)arg1 done:(BOOL)arg2;
-(id)requiredAnchorMapWithProfile:(id)arg1 error:(id*)arg2;
-(id)decodedObjectsForProfile:(id)arg1 error:(id*)arg2;

@end

