/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:44:36 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <UIKitCore/UIView.h>

@class NSArray, UIViewController;

@interface SKUIIPadChartsColumnView : UIView {

	UIEdgeInsets _contentInset;
	NSArray* _contentViewControllers;
	long long _selectedViewControllerIndex;

}

@property (assign,nonatomic) UIEdgeInsets contentInset;                                //@synthesize contentInset=_contentInset - In the implementation block
@property (nonatomic,copy) NSArray * contentViewControllers;                           //@synthesize contentViewControllers=_contentViewControllers - In the implementation block
@property (nonatomic,readonly) UIViewController * selectedViewController; 
-(void)setContentInset:(UIEdgeInsets)arg1 ;
-(UIEdgeInsets)contentInset;
-(void)layoutSubviews;
-(UIViewController *)selectedViewController;
-(void)setContentViewControllers:(NSArray *)arg1 ;
-(NSArray *)contentViewControllers;
-(void)setSelectedViewControllerIndex:(long long)arg1 ;
-(void)_addSelectedViewController;
@end
