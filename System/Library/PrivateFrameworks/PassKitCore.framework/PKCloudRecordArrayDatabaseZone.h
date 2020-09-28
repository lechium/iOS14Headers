/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:40:24 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class CKRecordZoneID, NSString, NSMutableDictionary;

@interface PKCloudRecordArrayDatabaseZone : NSObject <NSSecureCoding> {

	CKRecordZoneID* _zoneID;
	NSString* _databaseIdentifier;
	NSMutableDictionary* _cloudRecordByZoneRecord;

}

@property (nonatomic,retain) NSMutableDictionary * cloudRecordByZoneRecord;              //@synthesize cloudRecordByZoneRecord=_cloudRecordByZoneRecord - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)allItems;
-(id)allObjects;
-(id)allRecordNames;
-(id)initWithCoder:(id)arg1 ;
-(long long)count;
-(id)descriptionWithDetailedOutput:(BOOL)arg1 includeItem:(BOOL)arg2 ;
-(void)addCloudRecord:(id)arg1 ;
-(id)allRecordsWithRecordType:(id)arg1 ;
-(void)applyCloudRecordDatabaseZone:(id)arg1 ;
-(id)initWithZoneID:(id)arg1 databaseIdentifier:(id)arg2 ;
-(NSMutableDictionary *)cloudRecordByZoneRecord;
-(void)setCloudRecordByZoneRecord:(NSMutableDictionary *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
@end
