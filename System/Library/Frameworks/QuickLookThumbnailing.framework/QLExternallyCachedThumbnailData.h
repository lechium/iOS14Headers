/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:53:30 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/QuickLookThumbnailing.framework/QuickLookThumbnailing
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/PQLResultSetInitializer.h>

@class NSString, NSData;

@interface QLExternallyCachedThumbnailData : NSObject <PQLResultSetInitializer> {

	NSString* _itemIdentifier;
	NSData* _versionIdentifier;
	NSString* _fileExtension;
	unsigned long long _size;

}

@property (nonatomic,readonly) NSString * itemIdentifier;               //@synthesize itemIdentifier=_itemIdentifier - In the implementation block
@property (nonatomic,readonly) NSData * versionIdentifier;              //@synthesize versionIdentifier=_versionIdentifier - In the implementation block
@property (nonatomic,readonly) NSString * fileExtension;                //@synthesize fileExtension=_fileExtension - In the implementation block
@property (nonatomic,readonly) unsigned long long size;                 //@synthesize size=_size - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)itemIdentifier;
-(NSString *)fileExtension;
-(NSData *)versionIdentifier;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)size;
-(NSString *)description;
-(id)initFromPQLResultSet:(id)arg1 error:(id*)arg2 ;
@end

