/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:52:03 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/EmailDaemon.framework/EmailDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreData/NSManagedObject.h>

@class NSString, NSData;

@interface EDCloudKitControl : NSManagedObject

@property (nonatomic,copy) NSString * ckRecordID; 
@property (nonatomic,retain) NSData * ckRecordSystemFields; 
@property (assign,nonatomic) BOOL migratedFromKVSStorage; 
+(id)fetchRequest;
@end
