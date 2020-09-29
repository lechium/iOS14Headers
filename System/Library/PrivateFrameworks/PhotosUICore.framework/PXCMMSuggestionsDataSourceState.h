/*
                       * This header is generated by classdump-dyld 1.0
                       * on Monday, September 28, 2020 at 5:55:06 PM Mountain Standard Time
                       * Operating System: Version 14.0 (Build 18A373)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
                       */

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PHFetchResult, NSDictionary, PXCMMSuggestionsDataSourceContext, PHAssetCollection;

@interface PXCMMSuggestionsDataSourceState : NSObject <NSCopying> {

	PHFetchResult* _assetCollections;
	NSDictionary* _suggestionsByAssetCollectionObjectID;
	PXCMMSuggestionsDataSourceContext* _context;
	PHAssetCollection* _confidentMatch;

}

@property (nonatomic,readonly) PHFetchResult * assetCollections;                                 //@synthesize assetCollections=_assetCollections - In the implementation block
@property (nonatomic,readonly) NSDictionary * suggestionsByAssetCollectionObjectID;              //@synthesize suggestionsByAssetCollectionObjectID=_suggestionsByAssetCollectionObjectID - In the implementation block
@property (nonatomic,readonly) PXCMMSuggestionsDataSourceContext * context;                      //@synthesize context=_context - In the implementation block
@property (nonatomic,readonly) PHAssetCollection * confidentMatch;                               //@synthesize confidentMatch=_confidentMatch - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)stateUpdatedWithChange:(id)arg1 changeDetails:(id*)arg2 ;
-(PHFetchResult *)assetCollections;
-(PXCMMSuggestionsDataSourceContext *)context;
-(PHAssetCollection *)confidentMatch;
-(id)_confidentMatch;
-(id)initWithAssetCollections:(id)arg1 suggestionsByAssetCollectionObjectID:(id)arg2 context:(id)arg3 ;
-(void)_compareSuggestionsUsingContext;
-(id)_confidentMatchUsingStrategy:(unsigned long long)arg1 ;
-(NSDictionary *)suggestionsByAssetCollectionObjectID;
@end
