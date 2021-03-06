/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:39:54 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/AVFCore.framework/AVFCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVFCore/AVMediaSelectionOption.h>

@class AVAssetTrack, NSDictionary, AVWeakReference;

@interface AVMediaSelectionTrackOption : AVMediaSelectionOption {

	id _groupID;
	AVAssetTrack* _track;
	NSDictionary* _dictionary;
	AVWeakReference* _weakReferenceToGroup;
	BOOL _displaysNonForcedSubtitles;

}
-(id)mediaType;
-(int)trackID;
-(id)track;
-(BOOL)isPlayable;
-(BOOL)displaysNonForcedSubtitles;
-(id)mediaSubTypes;
-(id)_track;
-(void)dealloc;
-(id)locale;
-(id)initWithAsset:(id)arg1 group:(id)arg2 dictionary:(id)arg3 ;
-(id)_groupID;
-(id)associatedMediaSelectionOptionInMediaSelectionGroup:(id)arg1 ;
-(id)group;
-(BOOL)isEqual:(id)arg1 ;
-(id)commonMetadata;
-(unsigned long long)hash;
-(id)availableMetadataFormats;
-(id)dictionary;
-(id)metadataForFormat:(id)arg1 ;
@end

