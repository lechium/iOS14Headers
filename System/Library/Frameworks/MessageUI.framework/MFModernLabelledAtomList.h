/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:42:02 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/MessageUI.framework/MessageUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MessageUI/MessageUI-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/MFPassthroughViewProvider.h>
#import <libobjc.A.dylib/MFModernAddressAtomDelegate.h>

@protocol MFModernLabelledAtomListDelegate;
@class NSMutableArray, NSString, UILabel, UIColor, NSArray;

@interface MFModernLabelledAtomList : UIView <MFPassthroughViewProvider, MFModernAddressAtomDelegate> {

	void* _addressBook;
	NSMutableArray* _addressAtoms;
	NSString* _title;
	BOOL _labelVisible;
	unsigned _needsReflow : 1;
	double _previousWidth;
	UILabel* _label;
	UILabel* _lastBaselineDeceptionLabel;
	BOOL _primary;
	UIColor* _labelTextColor;
	double _lineSpacing;
	unsigned long long _numberOfRows;
	NSArray* _viewsToDodge;
	id<MFModernLabelledAtomListDelegate> _delegate;
	NSArray* _addresses;

}

@property (nonatomic,copy) NSArray * addresses;                                                 //@synthesize addresses=_addresses - In the implementation block
@property (nonatomic,readonly) UILabel * label;                                                 //@synthesize label=_label - In the implementation block
@property (nonatomic,retain) UIColor * labelTextColor;                                          //@synthesize labelTextColor=_labelTextColor - In the implementation block
@property (assign,getter=isLabelVisible,nonatomic) BOOL labelVisible; 
@property (assign,getter=isPrimary,nonatomic) BOOL primary;                                     //@synthesize primary=_primary - In the implementation block
@property (assign,nonatomic) double lineSpacing;                                                //@synthesize lineSpacing=_lineSpacing - In the implementation block
@property (nonatomic,readonly) unsigned long long numberOfRows;                                 //@synthesize numberOfRows=_numberOfRows - In the implementation block
@property (nonatomic,retain) NSArray * viewsToDodge;                                            //@synthesize viewsToDodge=_viewsToDodge - In the implementation block
@property (assign,nonatomic,__weak) id<MFModernLabelledAtomListDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(double)spaceBetweenColonAndFirstAtomNaturalEdge;
+(id)defaultLabelFont;
+(id)primaryLabelFont;
+(double)atomLineHeight;
-(id)passthroughViews;
-(unsigned long long)numberOfRows;
-(id)viewForFirstBaselineLayout;
-(BOOL)pointInside:(CGPoint)arg1 withEvent:(id)arg2 ;
-(id)viewForLastBaselineLayout;
-(NSArray *)addresses;
-(CGSize)intrinsicContentSize;
-(void)setBounds:(CGRect)arg1 ;
-(UIColor *)labelTextColor;
-(void)dealloc;
-(id)title;
-(void)layoutSubviews;
-(id)labelText;
-(void)_reflow;
-(void)contentSizeCategoryDidChangeNotification:(id)arg1 ;
-(double)lineSpacing;
-(CGRect)labelFrame;
-(void)setDelegate:(id<MFModernLabelledAtomListDelegate>)arg1 ;
-(BOOL)isPrimary;
-(void)setLineSpacing:(double)arg1 ;
-(void)addressAtom:(id)arg1 displayStringDidChange:(id)arg2 ;
-(void)addressBookDidChange:(id)arg1 ;
-(id<MFModernLabelledAtomListDelegate>)delegate;
-(void)setAddressAtomTarget:(id)arg1 action:(SEL)arg2 ;
-(id)addressAtoms;
-(BOOL)isLabelVisible;
-(void)_updateNeedsReflow;
-(void)setOpaque:(BOOL)arg1 ;
-(void)_reflowIfNeeded;
-(CGRect)_frameForAtomAtIndex:(unsigned long long)arg1 withStartingPoint:(CGPoint)arg2 row:(inout unsigned long long*)arg3 ;
-(CGPoint)baselinePointForRow:(unsigned long long)arg1 ;
-(double)_remainingSpaceForRowAtPoint:(CGPoint)arg1 ;
-(NSArray *)viewsToDodge;
-(void)setAddressAtomSeparatorStyle:(int)arg1 ;
-(void)enumerateAddressAtomsUsingBlock:(/*^block*/id)arg1 ;
-(void)_setNeedsReflow;
-(UILabel *)label;
-(id)initWithLabel:(id)arg1 title:(id)arg2 addressBook:(const void*)arg3 ;
-(void)setAddresses:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)setLabelTextColor:(UIColor *)arg1 ;
-(void)setAddressAtomScale:(double)arg1 ;
-(void)setAddressAtomsArePrimary:(BOOL)arg1 ;
-(void)setLabelVisible:(BOOL)arg1 ;
-(void)updateAtomsForVIP;
-(id)atomDisplayStrings;
-(void)setAtomAlpha:(double)arg1 ;
-(void)crossFadeLabelVisibility:(BOOL)arg1 atomSeparatorStyle:(int)arg2 withAnimationCoordinator:(id)arg3 ;
-(void)setOverrideFont:(id)arg1 ;
-(void)setViewsToDodge:(NSArray *)arg1 ;
-(void)setAddresses:(NSArray *)arg1 ;
-(void)setPrimary:(BOOL)arg1 ;
@end

