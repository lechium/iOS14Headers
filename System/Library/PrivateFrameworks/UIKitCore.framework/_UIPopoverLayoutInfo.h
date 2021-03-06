/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:39:03 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray;

@interface _UIPopoverLayoutInfo : NSObject <NSCopying> {

	UIEdgeInsets _contentInset;
	double _arrowHeight;
	double _arrowOffset;
	CGSize _preferredContentSize;
	unsigned long long _preferredArrowDirections;
	CGRect _containingFrame;
	UIEdgeInsets _containingFrameInsets;
	CGRect _sourceViewRect;
	BOOL _canOverlapSourceViewRect;
	CGRect _frame;
	double _offset;
	unsigned long long _arrowDirection;
	BOOL _preferLandscapeOrientations;
	BOOL _updatesEnabled;
	NSMutableArray* _candidates;
	BOOL _isRTL;
	long long _preferredHorizontalAlignment;

}

@property (assign,setter=_setUpdatesEnabled:,getter=_updatesEnabled,nonatomic) BOOL updatesEnabled;              //@synthesize updatesEnabled=_updatesEnabled - In the implementation block
@property (assign,nonatomic) UIEdgeInsets contentInset;                                                          //@synthesize contentInset=_contentInset - In the implementation block
@property (assign,nonatomic) double arrowHeight;                                                                 //@synthesize arrowHeight=_arrowHeight - In the implementation block
@property (assign,nonatomic) double arrowOffset;                                                                 //@synthesize arrowOffset=_arrowOffset - In the implementation block
@property (assign,nonatomic) CGSize preferredContentSize;                                                        //@synthesize preferredContentSize=_preferredContentSize - In the implementation block
@property (assign,nonatomic) unsigned long long preferredArrowDirections;                                        //@synthesize preferredArrowDirections=_preferredArrowDirections - In the implementation block
@property (assign,nonatomic) CGRect containingFrame;                                                             //@synthesize containingFrame=_containingFrame - In the implementation block
@property (assign,nonatomic) UIEdgeInsets containingFrameInsets;                                                 //@synthesize containingFrameInsets=_containingFrameInsets - In the implementation block
@property (assign,nonatomic) CGRect sourceViewRect;                                                              //@synthesize sourceViewRect=_sourceViewRect - In the implementation block
@property (assign,nonatomic) BOOL canOverlapSourceViewRect;                                                      //@synthesize canOverlapSourceViewRect=_canOverlapSourceViewRect - In the implementation block
@property (assign,nonatomic) BOOL preferLandscapeOrientations;                                                   //@synthesize preferLandscapeOrientations=_preferLandscapeOrientations - In the implementation block
@property (assign,nonatomic) long long preferredHorizontalAlignment;                                             //@synthesize preferredHorizontalAlignment=_preferredHorizontalAlignment - In the implementation block
@property (assign,nonatomic) BOOL isRTL;                                                                         //@synthesize isRTL=_isRTL - In the implementation block
@property (nonatomic,readonly) CGRect frame;                                                                     //@synthesize frame=_frame - In the implementation block
@property (nonatomic,readonly) double offset;                                                                    //@synthesize offset=_offset - In the implementation block
@property (nonatomic,readonly) unsigned long long arrowDirection;                                                //@synthesize arrowDirection=_arrowDirection - In the implementation block
+(id)_observationKeys;
-(void)setPreferredContentSize:(CGSize)arg1 ;
-(void)setContentInset:(UIEdgeInsets)arg1 ;
-(UIEdgeInsets)contentInset;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)_setUpdatesEnabled:(BOOL)arg1 ;
-(unsigned long long)preferredArrowDirections;
-(BOOL)preferLandscapeOrientations;
-(CGSize)_popoverViewSizeForContentSize:(CGSize)arg1 arrowDirection:(unsigned long long)arg2 ;
-(BOOL)_updatesEnabled;
-(long long)preferredHorizontalAlignment;
-(id)candidates;
-(CGSize)preferredContentSize;
-(void)dealloc;
-(double)offset;
-(void)setIsRTL:(BOOL)arg1 ;
-(double)arrowHeight;
-(void)setPreferredArrowDirections:(unsigned long long)arg1 ;
-(void)setContainingFrame:(CGRect)arg1 ;
-(void)setPreferLandscapeOrientations:(BOOL)arg1 ;
-(void)setPreferredHorizontalAlignment:(long long)arg1 ;
-(BOOL)canOverlapSourceViewRect;
-(id)init;
-(CGRect)frame;
-(double)arrowOffset;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)setCanOverlapSourceViewRect:(BOOL)arg1 ;
-(void)setArrowOffset:(double)arg1 ;
-(void)_updateOutputs;
-(CGRect)containingFrame;
-(BOOL)isRTL;
-(void)setArrowHeight:(double)arg1 ;
-(unsigned long long)arrowDirection;
-(void)setSourceViewRect:(CGRect)arg1 ;
-(CGRect)sourceViewRect;
-(void)updateProperties:(/*^block*/id)arg1 ;
-(id)description;
-(UIEdgeInsets)containingFrameInsets;
-(void)setContainingFrameInsets:(UIEdgeInsets)arg1 ;
@end

