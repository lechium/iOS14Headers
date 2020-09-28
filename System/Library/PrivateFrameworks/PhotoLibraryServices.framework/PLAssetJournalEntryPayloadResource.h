/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:41:09 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDictionary, NSString, NSData;

@interface PLAssetJournalEntryPayloadResource : NSObject {

	NSDictionary* _payloadAttributes;

}

@property (nonatomic,readonly) unsigned long long cplType; 
@property (nonatomic,readonly) unsigned dataStoreClassID; 
@property (nonatomic,readonly) unsigned resourceType; 
@property (nonatomic,readonly) unsigned version; 
@property (nonatomic,readonly) unsigned recipeID; 
@property (nonatomic,readonly) NSString * uniformTypeIdentifier; 
@property (nonatomic,readonly) NSString * volumeUuidString; 
@property (nonatomic,readonly) NSData * bookmarkData; 
@property (nonatomic,readonly) NSString * bookmarkPath; 
@property (nonatomic,readonly) NSDictionary * payloadAttributes;              //@synthesize payloadAttributes=_payloadAttributes - In the implementation block
+(void)_applyLargeVideoRecipeRefactorFixToExternalResource:(id)arg1 withAsset:(id)arg2 ;
-(unsigned)recipeID;
-(short)trashedState;
-(unsigned)resourceType;
-(unsigned)version;
-(BOOL)isAdjusted;
-(NSString *)bookmarkPath;
-(id)initWithPayloadAttributes:(id)arg1 ;
-(id)validatedExternalResourceWithAsset:(id)arg1 isCPLEnabled:(BOOL)arg2 ;
-(void)updateStoredResource:(id)arg1 ;
-(BOOL)isOriginalResource;
-(BOOL)isReferenceResource;
-(NSDictionary *)payloadAttributes;
-(NSData *)bookmarkData;
-(NSString *)volumeUuidString;
-(NSString *)uniformTypeIdentifier;
-(unsigned long long)cplType;
-(id)fourCharCodeName;
-(id)description;
-(unsigned)dataStoreClassID;
@end
