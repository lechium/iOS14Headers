/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:39:04 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIIndexBarVisualStyle_Base.h>

@class NSArray, UIFont, UIColor;

@interface UIIndexBarVisualStyle_LegacyiOS : UIIndexBarVisualStyle_Base {

	NSArray* _titles;
	UIFont* _font;
	long long _selectedSection;
	BOOL _pastTop;
	BOOL _pastBottom;
	CGSize _cachedSize;
	CGSize _cachedSizeToFit;
	double _topPadding;
	double _bottomPadding;
	double _verticalTextHeightEstimate;
	UIColor* _nonTrackingBackgroundColor;

}

@property (nonatomic,copy) UIColor * nonTrackingBackgroundColor;              //@synthesize nonTrackingBackgroundColor=_nonTrackingBackgroundColor - In the implementation block
-(BOOL)overlay;
-(double)minLineHeight;
-(void)displayEntriesUpdated;
-(void)setNonTrackingBackgroundColor:(UIColor *)arg1 ;
-(CGRect)_visibleBoundsForRect:(CGRect)arg1 stride:(double*)arg2 ;
-(BOOL)canBecomeFocused;
-(id)displayEntryFromEntry:(id)arg1 ;
-(id)font;
-(void)indexColorUpdated;
-(void)sizeUpdated;
-(long long)_accessibility_indexForEntryAtPoint:(CGPoint)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(BOOL)updateSectionForTouch:(id)arg1 withEvent:(id)arg2 ;
-(id)initWithView:(id)arg1 ;
-(UIColor *)nonTrackingBackgroundColor;
-(void)drawRect:(CGRect)arg1 ;
@end

