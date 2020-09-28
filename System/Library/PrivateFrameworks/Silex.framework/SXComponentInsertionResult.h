/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:43:28 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SXBlueprintMarker;
@class SXComponentInsert;

@interface SXComponentInsertionResult : NSObject {

	SXComponentInsert* _insert;
	id<SXBlueprintMarker> _marker;

}

@property (nonatomic,readonly) SXComponentInsert * insert;                //@synthesize insert=_insert - In the implementation block
@property (nonatomic,readonly) id<SXBlueprintMarker> marker;              //@synthesize marker=_marker - In the implementation block
-(SXComponentInsert *)insert;
-(id<SXBlueprintMarker>)marker;
-(id)initWithInsert:(id)arg1 marker:(id)arg2 ;
@end
