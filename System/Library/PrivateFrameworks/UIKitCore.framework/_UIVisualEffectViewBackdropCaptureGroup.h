/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:38:47 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSPointerArray, NSString;

@interface _UIVisualEffectViewBackdropCaptureGroup : NSObject {

	NSPointerArray* _backdrops;
	BOOL _disableInPlaceFiltering;
	NSString* _groupName;
	NSString* _groupNamespace;
	double _scale;
	double _minimumScale;

}

@property (nonatomic,copy) NSString * groupName;                        //@synthesize groupName=_groupName - In the implementation block
@property (nonatomic,copy) NSString * groupNamespace;                   //@synthesize groupNamespace=_groupNamespace - In the implementation block
@property (assign,nonatomic) double scale;                              //@synthesize scale=_scale - In the implementation block
@property (assign,nonatomic) double minimumScale;                       //@synthesize minimumScale=_minimumScale - In the implementation block
@property (assign,nonatomic) BOOL disableInPlaceFiltering;              //@synthesize disableInPlaceFiltering=_disableInPlaceFiltering - In the implementation block
-(void)updateAllBackdropViews;
-(NSString *)groupName;
-(double)scale;
-(void)setGroupNamespace:(NSString *)arg1 ;
-(id)initWithName:(id)arg1 scale:(double)arg2 ;
-(void)setScale:(double)arg1 ;
-(long long)indexOfBackdropView:(id)arg1 ;
-(void)removeBackdrop:(id)arg1 update:(BOOL)arg2 ;
-(BOOL)disableInPlaceFiltering;
-(void)setDisableInPlaceFiltering:(BOOL)arg1 ;
-(void)applyScaleHint:(double)arg1 ;
-(void)setGroupName:(NSString *)arg1 ;
-(id)initWithBackdrop:(id)arg1 ;
-(id)init;
-(double)minimumScale;
-(void)setMinimumScale:(double)arg1 ;
-(NSString *)groupNamespace;
-(void)addBackdrop:(id)arg1 update:(BOOL)arg2 ;
-(id)description;
-(BOOL)allowInPlaceFiltering;
@end
