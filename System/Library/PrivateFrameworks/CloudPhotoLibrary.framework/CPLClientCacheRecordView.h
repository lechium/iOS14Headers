/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:43:34 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudPhotoLibrary/CPLRecordView.h>

@protocol CPLEngineIDMapping;
@class CPLScopedIdentifier, CPLRecordChange;

@interface CPLClientCacheRecordView : CPLRecordView {

	CPLScopedIdentifier* _localScopedIdentifier;
	CPLRecordChange* _cloudRecord;
	id<CPLEngineIDMapping> _idMapping;

}

@property (nonatomic,readonly) CPLScopedIdentifier * localScopedIdentifier; 
@property (nonatomic,readonly) CPLRecordChange * cloudRecord;                            //@synthesize cloudRecord=_cloudRecord - In the implementation block
@property (nonatomic,readonly) id<CPLEngineIDMapping> idMapping;                         //@synthesize idMapping=_idMapping - In the implementation block
-(id)redactedDescription;
-(id)scopedIdentifier;
-(Class)recordClass;
-(id)relation;
-(BOOL)supportsResources;
-(id)description;
-(id)synthesizedRecord;
-(id<CPLEngineIDMapping>)idMapping;
-(id)relatedScopedIdentifier;
-(id)secondaryScopedIdentifier;
-(id)initWithLocalScopedIdentifier:(id)arg1 cloudRecord:(id)arg2 idMapping:(id)arg3 ;
-(CPLScopedIdentifier *)localScopedIdentifier;
-(CPLRecordChange *)cloudRecord;
@end
