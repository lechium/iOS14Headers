//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "REMCDObject.h"

@class NSDate, NSString, REMCDAlarmTrigger, REMCDReminder;

@interface REMCDAlarm : REMCDObject
{
}

+ (id)cdEntityName;	// IMP=0x000000010003e888
+ (id)fetchRequest;	// IMP=0x000000010004fed4
+ (_Bool)shouldAttemptLocalObjectMerge;	// IMP=0x00000001000ba0ac
+ (id)newCloudObjectForRecord:(id)arg1 account:(id)arg2 context:(id)arg3;	// IMP=0x00000001000b92ec
+ (id)existingCloudObjectForRecordID:(id)arg1 context:(id)arg2;	// IMP=0x00000001000b9160
+ (id)recordTypes;	// IMP=0x00000001000b909c
@property(retain, nonatomic) REMCDReminder *reminder; // @dynamic reminder;
- (id)modelObject;	// IMP=0x000000010003e7a8
- (_Bool)isConnectedToAccountObject:(id)arg1;	// IMP=0x000000010003e730
- (void)fixBrokenReferences;	// IMP=0x00000001000bae08
- (id)objectsToBeDeletedBeforeThisObject;	// IMP=0x00000001000ba8ec
- (void)cleanUpAfterLocalObjectMerge;	// IMP=0x00000001000ba714
- (_Bool)mergeWithLocalObject:(id)arg1;	// IMP=0x00000001000ba484
- (id)existingLocalObjectToMergeWithPredicate:(id)arg1;	// IMP=0x00000001000ba1f0
- (id)parentCloudObject;	// IMP=0x00000001000ba054
- (id)newlyCreatedRecord;	// IMP=0x00000001000b9ffc
- (void)mergeDataFromRecord:(id)arg1;	// IMP=0x00000001000b9aa4
- (_Bool)shouldMarkAsDeletedInsteadOfDeletingImmediately;	// IMP=0x00000001000b945c
- (_Bool)supportsDeletionByTTL;	// IMP=0x00000001000b9434
- (id)recordType;	// IMP=0x00000001000b93fc
- (id)recordZoneName;	// IMP=0x00000001000b939c

// Remaining properties
@property(copy, nonatomic) NSDate *acknowledgedDate; // @dynamic acknowledgedDate;
@property(copy, nonatomic) NSString *alarmUID; // @dynamic alarmUID;
@property(copy, nonatomic) NSString *originalAlarmUID; // @dynamic originalAlarmUID;
@property(retain, nonatomic) REMCDAlarmTrigger *trigger; // @dynamic trigger;

@end

