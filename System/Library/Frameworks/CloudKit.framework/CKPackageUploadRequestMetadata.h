/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:39:43 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/CloudKit.framework/CloudKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudKit/CloudKit-Structs.h>
#import <CloudKit/CKUploadRequestMetadata.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSArray;

@interface CKPackageUploadRequestMetadata : CKUploadRequestMetadata <NSSecureCoding> {

	NSArray* _fileSignatures;
	NSArray* _referenceSignatures;

}

@property (nonatomic,readonly) NSArray * referenceSignatures;              //@synthesize referenceSignatures=_referenceSignatures - In the implementation block
@property (nonatomic,copy,readonly) NSArray * fileSignatures;              //@synthesize fileSignatures=_fileSignatures - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithRepairZoneRecordID:(id)arg1 databaseScope:(long long)arg2 recordID:(id)arg3 recordType:(id)arg4 fieldName:(id)arg5 fileSignatures:(id)arg6 referenceSignatures:(id)arg7 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSArray *)fileSignatures;
-(NSArray *)referenceSignatures;
-(id)initWithRepairZoneRecordID:(id)arg1 databaseScope:(long long)arg2 recordID:(id)arg3 recordType:(id)arg4 fieldName:(id)arg5 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(unsigned long long)hash;
@end
