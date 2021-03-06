/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:44:19 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/ControlCenterUI.framework/ControlCenterUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ControlCenterUI/ControlCenterUI-Structs.h>
#import <UIKitCore/UIView.h>

@protocol CCUIStatusBarDelegate;
@class UIStatusBar_Modern, UIStatusBarStyleRequest;

@interface CCUIStatusBar : UIView {

	UIStatusBar_Modern* _compactTrailingStatusBar;
	UIStatusBar_Modern* _expandedStatusBar;
	BOOL _needsUpdatedMetrics;
	double _trailingMarginDelta;
	double _verticalBatteryAlignmentDelta;
	BOOL _alignCompactAndExpandedStatusBars;
	id<CCUIStatusBarDelegate> _delegate;
	unsigned long long _leadingState;
	unsigned long long _trailingState;
	double _maxCompactScaleFactor;
	double _verticalSecondaryServiceDelta;
	double _expandedStatusBarTranslation;
	UIEdgeInsets _compactEdgeInsets;
	UIEdgeInsets _expandedEdgeInsets;
	CGAffineTransform _compactScaleTransform;

}

@property (nonatomic,copy,readonly) UIStatusBarStyleRequest * compactTrailingStyleRequest; 
@property (nonatomic,readonly) double maxCompactScaleFactor;                                            //@synthesize maxCompactScaleFactor=_maxCompactScaleFactor - In the implementation block
@property (nonatomic,readonly) double verticalSecondaryServiceDelta;                                    //@synthesize verticalSecondaryServiceDelta=_verticalSecondaryServiceDelta - In the implementation block
@property (assign,nonatomic,__weak) id<CCUIStatusBarDelegate> delegate;                                 //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) unsigned long long leadingState;                                           //@synthesize leadingState=_leadingState - In the implementation block
@property (assign,nonatomic) unsigned long long trailingState;                                          //@synthesize trailingState=_trailingState - In the implementation block
@property (assign,nonatomic) UIEdgeInsets compactEdgeInsets;                                            //@synthesize compactEdgeInsets=_compactEdgeInsets - In the implementation block
@property (assign,nonatomic) UIEdgeInsets expandedEdgeInsets;                                           //@synthesize expandedEdgeInsets=_expandedEdgeInsets - In the implementation block
@property (assign,nonatomic) double leadingAlpha; 
@property (assign,nonatomic) double compactTrailingAlpha; 
@property (assign,nonatomic) double expandedTrailingAlpha; 
@property (assign,nonatomic) double expandedStatusBarTranslation;                                       //@synthesize expandedStatusBarTranslation=_expandedStatusBarTranslation - In the implementation block
@property (assign,nonatomic) BOOL alignCompactAndExpandedStatusBars;                                    //@synthesize alignCompactAndExpandedStatusBars=_alignCompactAndExpandedStatusBars - In the implementation block
@property (assign,nonatomic) long long orientation; 
@property (assign,nonatomic) CGAffineTransform compactScaleTransform;                                   //@synthesize compactScaleTransform=_compactScaleTransform - In the implementation block
-(void)_updateShadow;
-(CGAffineTransform)compactScaleTransform;
-(double)compactTrailingAlpha;
-(void)setExpandedEdgeInsets:(UIEdgeInsets)arg1 ;
-(void)_updateMetricsIfNeeded;
-(UIEdgeInsets)expandedEdgeInsets;
-(void)setCompactTrailingAlpha:(double)arg1 ;
-(void)_updateCompactTrailingStatusBarStyleRequestAndAvoidanceFrame;
-(CGRect)compactAvoidanceFrame;
-(CGSize)intrinsicContentSize;
-(UIStatusBarStyleRequest *)compactTrailingStyleRequest;
-(double)maxCompactScaleFactor;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setExpandedStatusBarTranslation:(double)arg1 ;
-(UIEdgeInsets)compactEdgeInsets;
-(void)setCompactEdgeInsets:(UIEdgeInsets)arg1 ;
-(void)setExpandedTrailingAlpha:(double)arg1 ;
-(void)layoutSubviews;
-(long long)orientation;
-(void)setLeadingAlpha:(double)arg1 ;
-(double)leadingAlpha;
-(void)setLeadingState:(unsigned long long)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(unsigned long long)leadingState;
-(void)setDelegate:(id<CCUIStatusBarDelegate>)arg1 ;
-(void)setTrailingState:(unsigned long long)arg1 ;
-(void)setOrientation:(long long)arg1 ;
-(unsigned long long)trailingState;
-(id<CCUIStatusBarDelegate>)delegate;
-(void)prepareForPresentation;
-(double)verticalSecondaryServiceDelta;
-(double)expandedTrailingAlpha;
-(BOOL)alignCompactAndExpandedStatusBars;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(double)expandedStatusBarTranslation;
-(void)setAlignCompactAndExpandedStatusBars:(BOOL)arg1 ;
-(void)setCompactScaleTransform:(CGAffineTransform)arg1 ;
-(void)controlCenterApplyPrimaryContentShadow;
@end

