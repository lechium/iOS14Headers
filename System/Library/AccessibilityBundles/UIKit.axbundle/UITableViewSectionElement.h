/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:33:05 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/AccessibilityBundles/UIKit.axbundle/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKitCore/UIAccessibilityElement.h>
#import <UIKit/UIAccessibilityElementMockViewDelegateProtocol.h>

@class NSMutableArray;

@interface UITableViewSectionElement : UIAccessibilityElement <UIAccessibilityElementMockViewDelegateProtocol> {

	BOOL _isHeader;
	long long _section;
	NSMutableArray* _children;

}

@property (assign,nonatomic) long long section;              //@synthesize section=_section - In the implementation block
@property (assign,nonatomic) BOOL isHeader;                  //@synthesize isHeader=_isHeader - In the implementation block
-(void)setSection:(long long)arg1 ;
-(BOOL)isAccessibilityElement;
-(long long)section;
-(BOOL)isHeader;
-(id)accessibilityElements;
-(BOOL)_accessibilityIsNotFirstElement;
-(void)dealloc;
-(CGRect)accessibilityFrame;
-(id)_accessibilityHitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(id)initWithAccessibilityContainer:(id)arg1 ;
-(void)accessibilityScrollToVisibleWithChild:(id)arg1 ;
-(BOOL)accessibilityScrollToVisible;
-(void)setIsHeader:(BOOL)arg1 ;
-(id)accessibilityIdentifier;
-(id)description;
-(void)_accessibilityClearChildren;
-(void)updateMockView:(id)arg1 ;
-(id)accessibilityChildren;
-(void)_acccessibilityClearChildCache;
-(id)_textChildWithTitle:(id)arg1 ;
-(id)_accessibilityAccessibleElementsInView:(id)arg1 ;
@end
