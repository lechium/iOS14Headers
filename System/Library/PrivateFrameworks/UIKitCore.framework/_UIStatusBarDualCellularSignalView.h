/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:38:58 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIView.h>
#import <UIKitCore/_UIStatusBarDisplayable.h>

@class _UIStatusBarCellularSignalView, NSLayoutConstraint, UIAccessibilityHUDItem, NSString;

@interface _UIStatusBarDualCellularSignalView : UIView <_UIStatusBarDisplayable> {

	_UIStatusBarCellularSignalView* _topSignalView;
	_UIStatusBarCellularSignalView* _bottomSignalView;
	long long _iconSize;
	NSLayoutConstraint* _topConstraint;
	NSLayoutConstraint* _verticalInterspaceConstraint;
	UIEdgeInsets _alignmentRectInsets;

}

@property (assign,nonatomic) long long iconSize;                                                     //@synthesize iconSize=_iconSize - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * topConstraint;                                     //@synthesize topConstraint=_topConstraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * verticalInterspaceConstraint;                      //@synthesize verticalInterspaceConstraint=_verticalInterspaceConstraint - In the implementation block
@property (assign,nonatomic) UIEdgeInsets alignmentRectInsets;                                       //@synthesize alignmentRectInsets=_alignmentRectInsets - In the implementation block
@property (readonly) _UIStatusBarCellularSignalView * topSignalView;                                 //@synthesize topSignalView=_topSignalView - In the implementation block
@property (readonly) _UIStatusBarCellularSignalView * bottomSignalView;                              //@synthesize bottomSignalView=_bottomSignalView - In the implementation block
@property (nonatomic,readonly) BOOL wantsCrossfade; 
@property (nonatomic,readonly) BOOL prefersBaselineAlignment; 
@property (nonatomic,readonly) long long overriddenVerticalAlignment; 
@property (nonatomic,readonly) UIAccessibilityHUDItem * accessibilityHUDRepresentation; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(double)_interspaceForIconSize:(long long)arg1 ;
-(long long)iconSize;
-(id)viewForLastBaselineLayout;
-(void)setAlignmentRectInsets:(UIEdgeInsets)arg1 ;
-(void)setIconSize:(long long)arg1 ;
-(void)setVerticalInterspaceConstraint:(NSLayoutConstraint *)arg1 ;
-(CGSize)intrinsicContentSize;
-(UIEdgeInsets)alignmentRectInsets;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)_iconSizeDidChange;
-(_UIStatusBarCellularSignalView *)bottomSignalView;
-(void)applyStyleAttributes:(id)arg1 ;
-(_UIStatusBarCellularSignalView *)topSignalView;
-(NSLayoutConstraint *)topConstraint;
-(void)setTopConstraint:(NSLayoutConstraint *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)_commonInit;
-(NSLayoutConstraint *)verticalInterspaceConstraint;
@end
