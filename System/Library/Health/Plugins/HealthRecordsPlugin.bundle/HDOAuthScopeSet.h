/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:33:16 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Health/Plugins/HealthRecordsPlugin.bundle/HealthRecordsPlugin
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSSet;

@interface HDOAuthScopeSet : NSObject {

	BOOL _canReadAllResources;
	BOOL _shouldSelectivelyIngest;
	NSString* _originalScopeString;
	NSSet* _readableResources;

}

@property (nonatomic,copy,readonly) NSString * originalScopeString;              //@synthesize originalScopeString=_originalScopeString - In the implementation block
@property (nonatomic,copy,readonly) NSSet * readableResources;                   //@synthesize readableResources=_readableResources - In the implementation block
@property (nonatomic,readonly) BOOL canReadAllResources;                         //@synthesize canReadAllResources=_canReadAllResources - In the implementation block
@property (nonatomic,readonly) BOOL shouldSelectivelyIngest;                     //@synthesize shouldSelectivelyIngest=_shouldSelectivelyIngest - In the implementation block
-(BOOL)parseWithError:(id*)arg1 ;
-(id)description;
-(id)initWithScopeString:(id)arg1 ;
-(BOOL)canReadResourceType:(id)arg1 ;
-(NSString *)originalScopeString;
-(NSSet *)readableResources;
-(BOOL)canReadAllResources;
-(BOOL)shouldSelectivelyIngest;
@end

