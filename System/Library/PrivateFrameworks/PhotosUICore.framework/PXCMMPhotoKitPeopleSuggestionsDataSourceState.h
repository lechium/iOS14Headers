/*
                       * This header is generated by classdump-dyld 1.0
                       * on Monday, September 28, 2020 at 5:55:03 PM Mountain Standard Time
                       * Operating System: Version 14.0 (Build 18A373)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
                       */

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PHFetchResult, NSDictionary;

@interface PXCMMPhotoKitPeopleSuggestionsDataSourceState : NSObject <NSCopying> {

	PHFetchResult* _people;
	NSDictionary* _personSuggestionsByPerson;

}

@property (nonatomic,readonly) PHFetchResult * people;                                //@synthesize people=_people - In the implementation block
@property (nonatomic,readonly) NSDictionary * personSuggestionsByPerson;              //@synthesize personSuggestionsByPerson=_personSuggestionsByPerson - In the implementation block
-(PHFetchResult *)people;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)stateUpdatedWithChange:(id)arg1 changeDetails:(id*)arg2 ;
-(NSDictionary *)personSuggestionsByPerson;
-(id)initWithPeople:(id)arg1 personSuggestionsByPerson:(id)arg2 ;
@end
