/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:40:37 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSArray, FCArticleListEditorialMetadata, NSDate, NTPBArticleListRecord, FCInterestToken;

@interface FCArticleList : NSObject {

	NSString* _identifier;
	NSArray* _articleIDs;
	unsigned long long _type;
	FCArticleListEditorialMetadata* _editorialMetadata;
	NSDate* _lastModifiedDate;
	NTPBArticleListRecord* _record;
	FCInterestToken* _interestToken;

}

@property (nonatomic,readonly) NTPBArticleListRecord * record;                                  //@synthesize record=_record - In the implementation block
@property (nonatomic,readonly) FCInterestToken * interestToken;                                 //@synthesize interestToken=_interestToken - In the implementation block
@property (nonatomic,readonly) NSString * identifier;                                           //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) NSArray * articleIDs;                                            //@synthesize articleIDs=_articleIDs - In the implementation block
@property (nonatomic,readonly) unsigned long long type;                                         //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) FCArticleListEditorialMetadata * editorialMetadata;              //@synthesize editorialMetadata=_editorialMetadata - In the implementation block
@property (nonatomic,copy,readonly) NSDate * lastModifiedDate;                                  //@synthesize lastModifiedDate=_lastModifiedDate - In the implementation block
-(NTPBArticleListRecord *)record;
-(NSArray *)articleIDs;
-(NSString *)identifier;
-(FCArticleListEditorialMetadata *)editorialMetadata;
-(FCInterestToken *)interestToken;
-(unsigned long long)type;
-(id)initWithRecord:(id)arg1 interestToken:(id)arg2 ;
-(NSDate *)lastModifiedDate;
@end

