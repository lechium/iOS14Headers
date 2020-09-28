/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:26:34 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TSReading/TSReading-Structs.h>
#import <UIKitCore/UIControl.h>

@class NSMutableArray, NSIndexSet, UIFont, UIColor;

@interface TSKSegmentedControl : UIControl {

	NSMutableArray* mItems;
	NSMutableArray* mButtonSegments;
	NSIndexSet* mSelectedSegmentIndices;
	BOOL mAllowsMultipleSelection;
	BOOL mAllowsEmptySelection;
	long long mLastPressedSegmentIndex;
	void* mUserData;
	UIFont* mFont;
	int mStyle;
	int _segmentedControlStyle;
	UIColor* mSelectedTintColor;

}

@property (nonatomic,retain) UIColor * selectedTintColor; 
@property (nonatomic,retain) UIFont * font; 
@property (nonatomic,readonly) int segmentedControlStyle;                        //@synthesize segmentedControlStyle=_segmentedControlStyle - In the implementation block
@property (nonatomic,readonly) unsigned long long numberOfSegments; 
@property (nonatomic,copy) NSIndexSet * selectedSegmentIndices; 
@property (nonatomic,readonly) long long lastPressedSegmentIndex; 
@property (assign,nonatomic) BOOL allowsMultipleSelection; 
@property (assign,nonatomic) BOOL allowsEmptySelection; 
@property (assign,nonatomic) void* userData; 
-(unsigned long long)numberOfSegments;
-(id)initWithItems:(id)arg1 ;
-(void*)userData;
-(void)setUserData:(void*)arg1 ;
-(void)sizeToFit;
-(void)tintColorDidChange;
-(void)setFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)setSegmentedControlStyle:(int)arg1 ;
-(int)segmentedControlStyle;
-(BOOL)allowsMultipleSelection;
-(UIFont *)font;
-(void)setTitle:(id)arg1 forSegment:(unsigned long long)arg2 ;
-(void)setImage:(id)arg1 forSegment:(unsigned long long)arg2 ;
-(void)setEnabled:(BOOL)arg1 forSegment:(unsigned long long)arg2 ;
-(void)setAllowsMultipleSelection:(BOOL)arg1 ;
-(void)setAllowsEmptySelection:(BOOL)arg1 ;
-(UIColor *)selectedTintColor;
-(void)setSelectedTintColor:(UIColor *)arg1 ;
-(void)setFont:(UIFont *)arg1 ;
-(BOOL)allowsEmptySelection;
-(long long)tagForSegment:(unsigned long long)arg1 ;
-(void)setTag:(long long)arg1 forSegment:(unsigned long long)arg2 ;
-(id)initWithItems:(id)arg1 style:(int)arg2 ;
-(void)tappedSegment:(id)arg1 ;
-(void)p_setSegmentedControlStyle:(int)arg1 ;
-(void)p_updateSegmentProperties;
-(void)setSelectedSegmentIndices:(NSIndexSet *)arg1 ;
-(void)p_setSelectedTintColor:(id)arg1 ;
-(void)sizeToFitWidth:(float)arg1 ;
-(id)p_losengeBackgroundImageForButton:(id)arg1 item:(id)arg2 fillColor:(id)arg3 ;
-(id)p_fullBleedBackgroundImageForButton:(id)arg1 item:(id)arg2 fillColor:(id)arg3 ;
-(void)p_setButtonAttributedTitle:(id)arg1 color:(id)arg2 forState:(unsigned long long)arg3 button:(id)arg4 ;
-(id)p_backgroundImageForButton:(id)arg1 item:(id)arg2 fillColor:(id)arg3 ;
-(NSIndexSet *)selectedSegmentIndices;
-(id)initWithItems:(id)arg1 style:(int)arg2 target:(id)arg3 action:(SEL)arg4 ;
-(void)setBackgroundImage:(id)arg1 forState:(unsigned long long)arg2 forSegment:(unsigned long long)arg3 ;
-(unsigned long long)segmentWithTag:(long long)arg1 ;
-(long long)lastPressedSegmentIndex;
@end
