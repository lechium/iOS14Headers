/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:39:41 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/CloudKit.framework/CloudKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudKit/CKDatabaseOperationInfo.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSArray;

@interface CKModifyRecordZonesOperationInfo : CKDatabaseOperationInfo <NSSecureCoding> {

	BOOL _allowDefaultZoneSave;
	BOOL _markZonesAsUserPurged;
	BOOL _dontFetchFromServer;
	NSArray* _recordZonesToSave;
	NSArray* _recordZoneIDsToDelete;
	long long _maxZoneSaveAttempts;

}

@property (nonatomic,retain) NSArray * recordZonesToSave;                  //@synthesize recordZonesToSave=_recordZonesToSave - In the implementation block
@property (nonatomic,retain) NSArray * recordZoneIDsToDelete;              //@synthesize recordZoneIDsToDelete=_recordZoneIDsToDelete - In the implementation block
@property (assign,nonatomic) BOOL allowDefaultZoneSave;                    //@synthesize allowDefaultZoneSave=_allowDefaultZoneSave - In the implementation block
@property (assign,nonatomic) BOOL markZonesAsUserPurged;                   //@synthesize markZonesAsUserPurged=_markZonesAsUserPurged - In the implementation block
@property (assign,nonatomic) long long maxZoneSaveAttempts;                //@synthesize maxZoneSaveAttempts=_maxZoneSaveAttempts - In the implementation block
@property (assign,nonatomic) BOOL dontFetchFromServer;                     //@synthesize dontFetchFromServer=_dontFetchFromServer - In the implementation block
+(BOOL)supportsSecureCoding;
-(long long)maxZoneSaveAttempts;
-(void)setAllowDefaultZoneSave:(BOOL)arg1 ;
-(void)setRecordZoneIDsToDelete:(NSArray *)arg1 ;
-(BOOL)markZonesAsUserPurged;
-(BOOL)dontFetchFromServer;
-(void)setMaxZoneSaveAttempts:(long long)arg1 ;
-(void)setDontFetchFromServer:(BOOL)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSArray *)recordZoneIDsToDelete;
-(void)setRecordZonesToSave:(NSArray *)arg1 ;
-(BOOL)allowDefaultZoneSave;
-(void)setMarkZonesAsUserPurged:(BOOL)arg1 ;
-(NSArray *)recordZonesToSave;
@end
